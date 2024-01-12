#include "lecteur.h"
#include "livre.h"
#include "date.h"
#include <iostream>

#ifndef EMPRUNT_H
#define EMPRUNT_H

class Emprunt {
    public:
        Emprunt(Date dateEmprunt, Livre livreEmprunte, Lecteur emprunteur);

        Date dateEmprunt() const;
        std::string isbn() const;
        std::string id()   const;

    private:
        Date _dateEmprunt;
        std::string _isbn;
        std::string _id;
};


std::ostream& operator << (std::ostream& os, const Emprunt& emprunt);

#endif // EMPRUNT_H