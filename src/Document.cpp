#include "../header/Document.hpp"

Document::Document(string& titre, string auteur, string* resume):
        titre(titre), auteur(auteur), resume(resume) {
}

Document::Document(const Document& in_document):
        titre(in_document.titre), auteur(in_document.auteur), resume(in_document.resume) {
}

/* class maintenant abstract
Document* Document::clone() const {
    return new Document(*this);
}
*/
Document& Document::operator=(const Document& in_document) {
    if (this != &in_document) {
        this->titre = in_document.titre;
        this->auteur = in_document.auteur;
        this->resume = in_document.resume;
    }
    return *this;
}

ostream& operator<< (ostream& out, const Document& in_doc) {
    in_doc.printClass(out);
    return out ;
}
