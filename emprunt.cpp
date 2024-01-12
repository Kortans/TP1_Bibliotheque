#include "emprunt.h"

Emprunt::Emprunt(Date dateEmprunt, Livre livreEmprunte, Lecteur emprunteur){
    _dateEmprunt = dateEmprunt;
    _isbn = livreEmprunte.isbn();
    _id = emprunteur.id();
    livreEmprunte.ajoutEmprunteur(emprunteur);
    emprunteur.ajoutLivreEmprunte(livreEmprunte);    
}

Date Emprunt::dateEmprunt() const{
    return _dateEmprunt;
}

std::string Emprunt::isbn() const{
    return _isbn;
}

std::string Emprunt::id()   const{
    return _id;
}

std::ostream& operator << (std::ostream& os, const Emprunt& emprunt) {
    std::string premiereligne  = "Date Emprunt : "+toString(emprunt.dateEmprunt());
    std::string deuxiemeligne  = "ISBN : "+emprunt.isbn();
    std::string troisiemeligne = "ID Lecteur : "+emprunt.id();
    os << premiereligne << std::endl << deuxiemeligne << std::endl << troisiemeligne << std::endl ;
    return os;
}