#include "emprunt.h"

Emprunt::Emprunt(Date dateEmprunt, Livre livreEmprunte, Lecteur emprunteur){
    _dateEmprunt = dateEmprunt;
    _isbn = livreEmprunte.isbn();
    _id = emprunteur.id();
    livreEmprunte.ajoutEmprunteur(emprunteur);
    emprunteur.ajoutLivreEmprunte(livreEmprunte);    
}