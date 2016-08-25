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
    cout << "hola, soy un gato" << endl;
  }
  
  bool Cat::podesPasear()
  {
    true;
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

  void Cat::imprimirNombre(){
    std::cout << "mi nombre es " << getNombre() << std::endl;
  }
}