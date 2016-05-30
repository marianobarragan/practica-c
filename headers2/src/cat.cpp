#include "cat.hpp"
#include <iostream>
namespace ct{
  
  Cat::Cat(std::string nombre ,ct::caracter_t caracter): nombre_(nombre), caracter_(caracter)
  {
      imprimirNombre();
      std::cout << "caracter: " << getCaracter() << std::endl;
  }
  
  //Cat::~Cat(){
  //  std::cout << "gato eliminado: " << nombre_ << std::endl;
  //};
  
  
  
  void Cat::hola(){
    std::cout << "hola" << std::endl;
    
  };
  
  void Cat::imprimirNombre(){
    std::cout << "mi nombre es " << this->nombre_ << std::endl;
  };
  
  caracter_t Cat::getCaracter(){
    return this->caracter_;
  };
  
  void Cat::setNombre(std::string nombre){
    this->nombre_ = nombre;
  }
  void Cat::setCaracter(ct::caracter_t caracter){
    this->caracter_ = caracter;
  };
};
