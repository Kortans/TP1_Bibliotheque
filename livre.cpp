#include "livre.h"

Livre::Livre(std::string titre, Auteur auteurice, std::string langue, std::string genre, Date datePublic, std::string isbn){
    _titre = titre;
    _auteurice = auteurice;
    _langue = langue;
    _genre = genre;
    _datePublic = datePublic;
    _isbn = isbn;
}
        
std::string Livre::titre() const{
    return _titre;
}
Auteur Livre::auteurice()    const{
    return _auteurice;
}
std::string Livre::langue() const{
    return _langue;
}
std::string Livre::genre() const{
    return _genre;
}
Date Livre::datePublic()   const{
    return _datePublic;
}
std::string Livre::isbn()  const{
    return _isbn;
}
        
std::string Livre::dernierEmprunteur() const{
    return _emprunteur[_emprunteur.size() - 1];
}

void Livre::ajoutEmprunteur(Lecteur lecteur){
    _emprunteur.push_back(lecteur.id());
}
        
void Livre::modifAuteurice(Auteur auteurice){
    _auteurice = auteurice;
}



std::ostream& operator << (std::ostream& os, const Livre& livre) {
    std::string premiereligne  = "Titre : "+livre.titre();
    std::string deuxiemeligne  = "Auteurice : "+toString(livre.auteurice());
    std::string deuxiemeBISligne = "Langue : "+livre.langue();
    std::string troisiemeligne = "Genre : "+livre.genre();
    std::string quatriemeligne = "Date de Publication : "+toString(livre.datePublic());
    std::string cinquiemeligne = "ISBN : "+livre.isbn();
    std::string sixiemeligne   = "Dernier Emprunteur : "+ livre.dernierEmprunteur();
    os << premiereligne << std::endl << deuxiemeligne << std::endl << deuxiemeBISligne << std::endl << troisiemeligne << std::endl << quatriemeligne << std::endl << cinquiemeligne << std::endl << sixiemeligne <<std::endl;
    return os;
}
