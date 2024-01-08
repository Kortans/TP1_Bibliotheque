/**
  * @File: livre.h
  * @Author: QDav
  * @Created on : 2023-12-20
  * @Last Modified time:
  *  
  * @Description : Declaration Classe Livre
  */

#include <iostream>
#include <vector>
#include "date.h"
#include "auteur.h"
#include "lecteur.h"

#ifndef LIVRE_H
#define LIVRE_H

class Livre{
    public:
        Livre(std::string titre, Auteur auteurice, std::string langue, std::string genre, Date datePublic, std::string isbn);
        
        std::string titre()    const;
        Auteur auteurice()     const;
        std::string langue()   const;
        std::string genre()    const;
        Date datePublic()      const;
        std::string isbn()     const;
        
        std::string dernierEmprunteur() const;
        void ajoutEmprunteur(Lecteur lecteur);
        
        void modifAuteurice(Auteur auteurice);
        

    private:
        std::string _titre;
        Auteur _auteurice;
        std::string _langue;
        std::string _genre;
        Date _datePublic;
        std::string _isbn;
        std::vector <std::string> _emprunteur;
};

std::ostream& operator << (std::ostream& os, const Livre& livre);

#endif // LIVRE.H