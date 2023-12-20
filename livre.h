/**
  * @File: livre.h
  * @Author: moi
  * @Created on : 2023-12-20
  * @Last Modified time:
  *  
  * @Description : Declaration Classe Livre
  */

#include <iostream>
#include <array>
#include "date.h"

#ifndef LIVRE_H
#define LIVRE_H

class Livre{
    public:
        Livre(std::string titre, auto auteurice, std::string genre, Date datePublic, std::string isbn);
        
        std::string titre() const;
        auto auteurice()    const;
        std::string genre() const;
        Date datePublic()   const;
        std::string isbn()  const;
        
        std::string dernierEmprunteur();
        void ajoutEmprunteur();
        
        void modifAuteurice();
        

    private:
        std::string _titre;
        auto _auteurice;
        std::string _genre;
        Date _datePublic;
        std::string _isbn;
        std::array <std::string, 250> emprunteur;
};


#endif // LIVRE.H