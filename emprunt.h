#include "lecteur.h"
#include "livre.h"
#include "date.h"
#include <iostream>

#ifndef EMPRUNT_H
#define EMPRUNT_H

class Emprunt {
    public:
        Emprunt(Date dateEmprunt, Livre livreEmprunte, Lecteur emprunteur);

        Date dateEmprunt();
        std::string isbn();
        std::string id();

    private:
        Date _dateEmprunt;
        std::string _isbn;
        std::string _id;
};


#endif // EMPRUNT_H