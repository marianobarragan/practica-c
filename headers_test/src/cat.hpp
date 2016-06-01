#ifndef CAT_H
#define CAT_H

//#include <boost/noncopyable.hpp>
#include <string>
#include <iostream>

using namespace std;

namespace ct{
  
  enum class caracter_t {PACHORRA, ACTIVO};
  
  
  class Cat{
    
    public:
    
      Cat(std::string nombre,ct::caracter_t caracter);
      Cat();
      ~Cat();
      void hola();
      caracter_t getCaracter();
      void setNombre(std::string);
      void setCaracter(ct::caracter_t);
      friend ostream& operator<<(ostream& os, const Cat& dt);
      
      
    private:
      void imprimirNombre();
      caracter_t caracter_;
      std::string nombre_;
      
  };
}

#endif