#ifndef LECTEUR_H
#define LECTEUR_H

#include "auteur.h"
#include "livre.h"
#include <vector>
#include <iostream>

class Lecteur : public Auteur {
    public:
        Lecteur();
        Lecteur(std::string id, std::string nom, std::string prenom, Date datedenaissance);
        void afficheLivresEmpruntes();
        void ajoutLivreEmprunte(Livre livre);

    private:
        std::vector <std::string> _livresEmpruntes;


};




#endif // LECTEUR_H