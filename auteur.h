
#include <iostream>
#include "date.h"

#ifndef AUTEUR_H
#define AUTEUR_H

class Auteur {
public:
Auteur();
    Auteur(int id, std::string nom, std::string prenom, Date datedenaissance);
    int id() const;
    std::string nom() const;
    std::string prenom() const;
    Date datedenaissance() const;

private:
    int _id;
    std::string _nom;
    std::string _prenom;
    Date _datedenaissance;

};

std::string toString(Auteur auteur);

#endif // AUTEUR_H