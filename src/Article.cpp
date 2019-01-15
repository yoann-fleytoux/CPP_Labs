#include "../header/Article.hpp"

Article::Article(string& titre, string auteur, string* resume, string revue, string editeur, int numero_edition):
        Document(titre, auteur, resume), revue(revue), editeur(editeur), numero_edition(numero_edition) {
}

Article::Article(const Article& in_article):
        Document(in_article.titre, in_article.auteur, in_article.resume),
        revue(in_article.revue), editeur(in_article.editeur), numero_edition(in_article.numero_edition) {
}

Article* Article::clone() const {
    return new Article(*this);
}

Article& Article::operator=(const Article& in_article) {
    if (this != &in_article) {
        this->titre = in_article.titre;
        this->auteur = in_article.auteur;
        this->resume = in_article.resume;
        this->revue = in_article.revue;
        this->editeur = in_article.editeur;
        this->numero_edition = in_article.numero_edition;
    }
    return *this;
}
void Article::printClass(ostream& out) const{
  out << this->titre << endl;
  out << this->auteur << endl;
  out << *(this->resume) << endl;
  out << this->revue << endl;
  out << this->editeur << endl;
  out << this->numero_edition << endl;
}

int Article::prix(void){
  return 10;
}
