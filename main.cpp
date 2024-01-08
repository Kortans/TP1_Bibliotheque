/**
  * @File: main.cpp
  * @Author: d0m <dginhac@u-bourgogne.fr>
  * @Created on : 2022-10-03 10:14:42
  * @Last Modified time: 2022-10-03 15:16:54
  * 
  * @Description: Final class
  */


#include "auteur.h"
#include "date.h"
#include "livre.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Date a_day(2,28,2004);
  std::cout << "a day: " << toString(a_day) << std::endl;
  std::cout << "#day: " << dayOfYear(a_day) << std::endl;
  a_day.next();
  std::cout << "a day + 1: " << toString(a_day) << std::endl;
  std::cout << "#day: " << dayOfYear(a_day) << std::endl;

  Date naissanceDAdams(03,11,1952);
  Auteur DAdams(42, "Adams" , "Douglas" , naissanceDAdams);
  Date sortiedubouquinla(04,05,1987);
  Livre lebouquinla("The Hitchhiker's guide to the Galaxy",DAdams,"Science Fiction",sortiedubouquinla,"0593359445");
  //std::cout << lebouquinla;
  lebouquinla.ajoutEmprunteur("Test");
  lebouquinla.ajoutEmprunteur("Test11");
  std::cout << "Titre : "<<lebouquinla.titre()<<std::endl;
  std::cout << "Dernier Emprunteur : "<<lebouquinla.dernierEmprunteur()<<std::endl;

  std::cout << lebouquinla<<std::endl;
  return 0;
}
