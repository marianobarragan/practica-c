#include "dog.hpp"
#include <iostream>

namespace ct{  
  
    
     Dog::Dog(std::string nombre ,caracter_t caracter): nombre_(nombre), caracter_(caracter)
      {
	  imprimirNombre();
	  setEnergia(10);
      }
      
      Dog::Dog(): nombre_("sin nombre"), caracter_(enums::caracter_t::ACTIVO)
      {
	  imprimirNombre();
	  setEnergia(10);
      }
      
      ct::Dog::~Dog(){
	std::cout << "perro eliminado: " << nombre_ << std::endl;
      }
      
     
      void Dog::hola()
      {
	cout << "hola, soy un perro" << endl;
      }
      
     
      enums::caracter_t Dog::getCaracter()
      {
	return caracter_;
      }
      
      void Dog::setNombre(std::string s)
      {
	nombre_ = s;
      }
      
      void Dog::setCaracter(caracter_t c)
      {
	caracter_ = c;
      }
      void Dog::setEnergia(int cantidad) 
      {
	energia_ = cantidad;
      }
      
      int Dog::getEnergia()
      {
	energia_;
      }
      
      std::string Dog::getNombre()
      {
	return nombre_;
      }
      
      bool Dog::podesPasear(){
	getEnergia() > 10;
      };

      
      void Dog::imprimirNombre()
      {
	std::cout << "mi nombre es " << getNombre() << std::endl;
      }
}