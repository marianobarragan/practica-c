#ifndef CAT_H
#define CAT_H

//#include <boost/noncopyable.hpp>
#include <string>
#include <iostream>
#include "enums.hpp"

using namespace std;
using namespace enums;

namespace ct{  
  
  class Cat{
    
    public:
    
      Cat(std::string nombre, enums::caracter_t caracter);
      Cat();
      ~Cat();
      void hola();
      enums::caracter_t getCaracter();
      void setNombre(std::string);
      void setCaracter(caracter_t);
      std::string getNombre();
      friend ostream &operator<<( ostream &output, const Cat &dt );
      
      
    private:
      void imprimirNombre();
      enums::caracter_t caracter_;
      std::string nombre_;
      
  };
}

#endif