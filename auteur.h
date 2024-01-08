
#include <iostream>
#include "date.h"

#ifndef AUTEUR_H
#define AUTEUR_H

class Auteur {
public:
    Auteur();
    Auteur(std::string id, std::string nom, std::string prenom, Date datedenaissance);
    std::string id() const;
    std::string nom() const;
    std::string prenom() const;
    Date datedenaissance() const;

private:
    std::string _id;
    std::string _nom;
    std::string _prenom;
    Date _datedenaissance;

};

std::string toString(Auteur auteur);

#endif // AUTEUR_H