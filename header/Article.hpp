#ifndef _ARTICLE_HPP
#define _ARTICLE_HPP

#include "Document.hpp"

class Article:public Document{

public:
    string revue;
    string editeur;
    int numero_edition;
    Article& operator=(const Article&);

public:
    Article(string&, string, string*, string, string, int);
    Article(const Article&);
    Article* clone(void) const;
    friend ostream& operator<< (ostream&, const Article&);
    void printClass(ostream& out) const;
    int prix(void);
};

#endif
