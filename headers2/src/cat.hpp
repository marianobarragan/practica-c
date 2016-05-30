#ifndef CAT_H
#define CAT_H

//#include <boost/noncopyable.hpp>
#include <string>

namespace ct{
  
  enum caracter_t {PACHORRA, ACTIVO};
  
  class Cat{
    
    public:
    
      Cat(std::string nombre,ct::caracter_t caracter);
      ~Cat();
      void hola();
      void imprimirNombre();
      caracter_t getCaracter();
      void setNombre(std::string);
      void setCaracter(ct::caracter_t);
    
      
    private:
      caracter_t caracter_;
      std::string nombre_;
    
  };
}

#endif