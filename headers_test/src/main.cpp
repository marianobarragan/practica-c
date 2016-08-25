#include "cat.hpp"
#include "enums.hpp"
#include "dog.hpp"
#include "animal.hpp"
#include "repoAnimales.hpp"
#include <iostream>

#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

using namespace ct;

int foo(){
    
    return 0;
}

int main(int argc, char **argv) {
  
  
    auto gato1 = std::make_shared<ct::Cat>("cesar",caracter_t::PACHORRA);
    gato1->hola();
    
    auto perro1 = std::make_shared<Dog>("susar",caracter_t::PACHORRA);
    perro1->hola();
    
    auto repo = std::make_shared<RepositorioAnimales>();
    //repo->addAnimal(&gato1);
    
    
    
    //cout << gato1->getNombre() << endl;
    //std::cout << gato2 << endl;
    //return 0;
}
