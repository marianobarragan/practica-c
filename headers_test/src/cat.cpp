#include "cat.hpp"
#include <iostream>
#include <map>

namespace ct{
  
  Cat::Cat(std::string nombre ,caracter_t caracter): nombre_(nombre), caracter_(caracter)
  {
      imprimirNombre();
  }
  
  Cat::Cat(): nombre_("sin nombre"), caracter_(caracter_t::ACTIVO)
  {
      imprimirNombre();
  }
  
  
  Cat::~Cat(){
    std::cout << "gato eliminado: " << nombre_ << std::endl;
  }
  
  
  void Cat::hola(){
    std::cout << "hola" << std::endl;
    
  }
  
  std::ostream& operator<<(ostream& os, const Cat& cat)
    {

      os << cat.nombre_ << " ACA va el caracter "; //caracter_t.PACHORRA ;
      return os;
    }
 
  
  caracter_t Cat::getCaracter(){
    return caracter_;
  }
  
  void Cat::setNombre(std::string nombre){
    nombre_ = nombre;
  }
  void Cat::setCaracter(ct::caracter_t caracter){
    caracter_ = caracter;
  }
  
  void Cat::imprimirNombre(){
    std::cout << "mi nombre es " << nombre_ << std::endl;
  }
}