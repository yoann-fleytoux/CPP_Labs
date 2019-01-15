#include "../header/Biblio.hpp"

void Biblio::ajouter(Document* in_document) {
    this->tab.push_back(in_document);
}

Document* Biblio::rechercher(string in_titre) {
    for (list<Document*>::iterator it = this->tab.begin(); it != this->tab.end(); it++)
        if ((*it)->titre == in_titre)
            return (*it);
    cout <<"Erreur Document " + in_titre + " non trouvé \n"<<endl;
}

ostream& operator<< (ostream& out, Biblio& in_biblio) {
    for (list<Document*>::iterator it = in_biblio.tab.begin(); it != in_biblio.tab.end(); it++)
        out << *(*it);
    return out ;
}
