#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
#include "enums.hpp"

using namespace std;

namespace ct{  
  
  class Animal{
    
    public:
      virtual void hola()=0;		//METODO PARA HEREDAR
      //virtual std::string getNombre();
      virtual bool podesPasear()=0;
      
    private:
      //void imprimirNombre(){std::cout << "mi nombre es " << getNombre() << std::endl;}
      
  };
}

#endif