#include "auteur.h"

Auteur::Auteur(std::string id, std::string nom, std::string prenom, Date datedenaissance){
    _id = id;
    _nom = nom;
    _prenom = prenom;
    _datedenaissance = datedenaissance;
}

Auteur::Auteur()
{}
std::string Auteur::id() const{
    return _id;
}
std::string Auteur::nom() const{
    return _nom;
}
std::string Auteur::prenom() const{
    return _prenom;
}
Date Auteur::datedenaissance() const{
    return _datedenaissance;
}

std::string toString(Auteur auteur) {
    return auteur.prenom() + " " + auteur.nom();
}