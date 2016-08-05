#include "cat.hpp"
#include "enums.hpp"
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
  
  std::string Cat::getNombre(){
    return nombre_;
  }
  
  void Cat::setCaracter(enums::caracter_t caracter){
    caracter_ = caracter;
  }
    
    
  const char * getTextForEnum( int enumVal )
    {
      return enums::enumStrings[enumVal];
    }

  std::ostream &operator<<( std::ostream &output, Cat &dt ){
    
      int indice = static_cast<int>(dt.getCaracter());
      output << "nombre: " << dt.getNombre() << ", caracter: " << getTextForEnum( indice);
      return output;
      
  }
/*
  std::ostream &operator<<( std::ostream &output, Cat &dt )
    {
      
      int indice = static_cast<int>(dt.getCaracter());
      output << "nombre: " << dt.getNombre() << ", caracter: " << getTextForEnum( indice);
      return output;
      
    }
 */
  void Cat::imprimirNombre(){
    std::cout << "mi nombre es " << getNombre() << std::endl;
  }
}