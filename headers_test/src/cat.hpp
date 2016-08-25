#ifndef CAT_H
#define CAT_H

//#include <boost/noncopyable.hpp>
#include <string>
#include <iostream>
#include "enums.hpp"
#include "animal.hpp"

using namespace std;
using namespace enums;

namespace ct{  
  
  class Cat : public Animal {
    
    public:
    
      Cat(std::string nombre, enums::caracter_t caracter);
      Cat();
      ~Cat();
      void hola();
      enums::caracter_t getCaracter();
      void setNombre(std::string);
      void setCaracter(caracter_t);
      std::string getNombre();
      bool podesPasear();
      //friend ostream &operator<<( ostream &output, const Cat &dt );
      
      /*std::ostream &operator<<( std::ostream &output, Cat &dt )
  {
    
    return output;
   
      int indice = static_cast<int>(dt.getCaracter());
      output << "nombre: " << dt.getNombre() << ", caracter: " << getTextForEnum( indice);
      return output;
      
  }*/
      
    private:
      void imprimirNombre();
      enums::caracter_t caracter_;
      std::string nombre_;
      
  };
}

#endif