#ifndef _LIVRE_HPP
#define _LIVRE_HPP

#include "Document.hpp"

class Livre:public Document{

public:
    string editeur;
    int annee;
    Livre& operator=(const Livre&);

public:
    Livre(string&, string, string*, string, int);
    Livre(const Livre&);
    Livre* clone(void) const;
    friend ostream& operator<< (ostream&, const Livre&);
    void printClass(ostream& out) const;
    int prix(void);
};

#endif
