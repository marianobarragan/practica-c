#include "repoAnimales.hpp"

#include <vector>
#include <iostream>
#include <algorithm>

#include "cat.hpp"
#include <boost/shared_ptr.hpp>

namespace ct{
  
    
      void RepositorioAnimales::addAnimal(Animal * animal)
      {
	auto gato1 = make_shared<Cat>();
	animales.insert(0,&gato1);
      }
      /*
      void RepositorioAnimales::removeAnimal(Animal * animal)
      {
	animales.erase(getPosicion(animal));
      }
      
      int RepositorioAnimales::getPosicion(Animal * animal)
      {
	return std.find(animales.begin(),animales.size,animal);
      }
      */
      
}