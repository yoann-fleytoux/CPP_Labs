#include "../header/Livre.hpp"

Livre::Livre(string& titre, string auteur, string* resume, string editeur, int annee):
        Document(titre, auteur, resume), editeur(editeur), annee(annee) {
}

Livre::Livre(const Livre& in_livre):
        Document(in_livre.titre, in_livre.auteur, in_livre.resume), editeur(in_livre.editeur), annee(in_livre.annee) {
}

Livre* Livre::clone() const {
    return new Livre(*this);
}

Livre& Livre::operator=(const Livre& in_livre) {
    if (this != &in_livre) {
        this->titre = in_livre.titre;
        this->auteur = in_livre.auteur;
        this->resume = in_livre.resume;
        this->editeur = in_livre.editeur;
        this->annee = in_livre.annee;
    }
    return *this;
}

void Livre::printClass(ostream& out) const{
  out << this->titre << endl;
  out << this->auteur << endl;
  out << *(this->resume) << endl;
  out << this->editeur << endl;
  out << this->annee << endl;
}

int Livre::prix(void){
  return 11;
}
