#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>
#include "enums.hpp"
#include "animal.hpp"

using namespace std;
using namespace enums;

namespace ct{  
  
  class Dog: public Animal {
    
    public:
      
      Dog(std::string nombre, enums::caracter_t caracter);
      Dog();
      ~Dog();
      
      void hola();
      enums::caracter_t getCaracter();
      void setNombre(std::string);
      void setCaracter(caracter_t);
      void setEnergia(int cantidad);
      int getEnergia();
      std::string getNombre();
      bool podesPasear();
      
    private:
      void imprimirNombre();
      enums::caracter_t caracter_;
      std::string nombre_;
      int energia_;
  };
}

#endif