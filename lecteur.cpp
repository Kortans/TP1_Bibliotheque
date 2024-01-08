#include "lecteur.h"

Lecteur::Lecteur(){}

Lecteur::Lecteur(int id, std::string nom, std::string prenom, Date datedenaissance){
    Auteur(id, nom, prenom, datedenaissance);
}

void Lecteur::afficheLivresEmpruntes(){
    int i;
    for (i=0;i<_livresEmpruntes.size();i++){
        std::cout<<_livresEmpruntes[i]<<std::endl;
    }
}
void Lecteur::ajoutLivreEmprunte(Livre livre){
    _livresEmpruntes.push_back(livre.isbn());
}