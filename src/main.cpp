#include <iostream>
#include "../header/Livre.hpp"
#include "../header/Article.hpp"
#include "../header/Biblio.hpp"

using namespace std;

int main(int argc, char* argv[]) {
  /* on ne peut plus déclarer de documents vu qu'elle est maintenant abstract
  string titre0("titre_document0");
  string auteur0("auteur_document0");
  string resume0("resume_document0");
  Document document0(titre0, auteur0, &resume0);
  Document document0bis(document0);
  Document *document0bisclone=document0bis.clone();
  Document document0copy=document0bis;
  /*Test
  cout << "document0:" << endl << document0 << endl;
  cout << "document0bis:" << endl << document0bis << endl;
  cout << "document0bisclone:" << endl << *document0bisclone << endl;
  cout << "document0copy:" << endl << document0copy << endl;
  */

  string titre1("titre_livre1");
  string auteur1("auteur_livre1");
  string resume1("resume_livre1");
  Livre livre1(titre1, auteur1, &resume1, "editeur_livre1", 1);
  Livre livre1bis(livre1);
  Livre *livre1bisclone=livre1bis.clone();
  Livre livre1copy=livre1bis;
  /*Test
  cout << "livre1:" << endl << livre1 << endl;
  cout << "livre1bis:" << endl << livre1bis << endl;
  cout << "livre1bisclone:" << endl << *livre1bisclone << endl;
  cout << "livre1copy:" << endl << livre1copy << endl;
  */

  string titre2("titre_article1");
  string auteur2("auteur_article1");
  string resume2("resume_article1");
  Article article1(titre2, auteur2, &resume2, "revue_article1", "editeur_article1", 2);
  Article article1bis(article1);
  Article *article1bisclone=article1bis.clone();
  Article article1copy=article1bis;
  /*Test
  cout << "article1:" << endl << article1 << endl;
  cout << "article1bis:" << endl << article1bis << endl;
  cout << "article1bisclone:" << endl << *article1bisclone << endl;
  cout << "article1copy:" << endl << article1copy << endl;
  */
  Biblio bibliotheque1=Biblio();
  bibliotheque1.ajouter(&livre1);
  bibliotheque1.ajouter(&livre1bis);
  bibliotheque1.ajouter(livre1bisclone);
  bibliotheque1.ajouter(&livre1copy);

  bibliotheque1.ajouter(&article1);
  bibliotheque1.ajouter(&article1bis);
  bibliotheque1.ajouter(article1bisclone);
  bibliotheque1.ajouter(&article1copy);

  bibliotheque1.rechercher("titre_article1");
  bibliotheque1.rechercher("lol");

  cout << "bibliotheque1:" << endl << bibliotheque1 << endl;

  cout << article1.prix() <<endl;
  cout << livre1.prix() <<endl; 
}
