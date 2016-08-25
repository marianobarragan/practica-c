#ifndef REPOANIMALES_H
#define REPOANIMALES_H

#include "animal.hpp"
#include <vector>

using namespace std;

namespace ct{  
  
  class RepositorioAnimales{
    
    public:
      void addAnimal(Animal * animal);
      void removeAnimal(Animal * animal);
      
    private:
      int getPosicion(Animal * animal);
      std::vector <Animal> animales;
      //std::vector<int> m_VectorOfInts;
      
  };
}

#endif