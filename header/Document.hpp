#ifndef _DOCUMENT_HPP
#define _DOCUMENT_HPP

using namespace std;

#include <iostream>

class Document{

public:
  string& titre;
  string auteur;
  string* resume;
  Document& operator=(const Document&);

public:
  Document(string&, string, string*);
  Document(const Document&);
  virtual Document* clone(void) const = 0;
  virtual void printClass(ostream& out) const =0;
  virtual int prix(void) = 0;

  friend ostream& operator<<(ostream&, const Document&);
  friend class Biblio;
};

#endif
