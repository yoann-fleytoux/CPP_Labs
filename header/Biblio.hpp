#ifndef _BIBLIO_HPP
#define _BIBLIO_HPP

#include <list>
#include "Document.hpp"

class Biblio {
    list <Document*> tab;

    //afficher
    friend ostream& operator<< (ostream&, Biblio&);

public:
    void ajouter(Document*);
    Document* rechercher(string);
};

#endif
