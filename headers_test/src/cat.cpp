#include "cat.hpp"
#include <iostream>
#include <map>

namespace ct{
  
  
  Cat::Cat(std::string nombre ,caracter_t caracter): nombre_(nombre), caracter_(caracter)
  {
      imprimirNombre();
  }
  
  Cat::Cat(): nombre_("sin nombre"), caracter_(enums::caracter_t::ACTIVO)
  {
      imprimirNombre();
  }
  
  
  Cat::~Cat(){
    std::cout << "gato eliminado: " << nombre_ << std::endl;
  }
  
  
  void Cat::hola(){
    std::cout << "hola" << std::endl;
    
  }
  
  enums::caracter_t Cat::getCaracter(){
    return caracter_;
  }
  
  void Cat::setNombre(std::string nombre){
    nombre_ = nombre;
  }
  void Cat::setCaracter(enums::caracter_t caracter){
    caracter_ = caracter;
  }
  
  static const char * enumStrings[] = { "PACHORRA", "ACTIVA" };
    
  const char * getTextForEnum( int enumVal )
    {
      return enumStrings[enumVal];
    }
  
  ostream &operator<<( ostream &output, const Cat &dt )
    {
      
      int numero = static_cast<int>(dt.getCaracter());
      output << "nombre: " << dt.nombre_ << ", caracter: " << getTextForEnum( numero);
      return output;
      
    }
  
  void Cat::imprimirNombre(){
    std::cout << "mi nombre es " << nombre_ << std::endl;
  }
}