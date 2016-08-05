#include "cat.hpp"
#include "enums.hpp"
#include <iostream>

#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
using namespace ct;

int foo(){
    ct::Cat gato3{"Tom",caracter_t::ACTIVO};   
    //std::cout << gato3 << std::endl;
    return 0;
}

int main(int argc, char **argv) {
  
    auto gato1 = std::make_shared<ct::Cat>("cesar",caracter_t::PACHORRA);
    gato1->hola();
    
    cout << gato1->getNombre() << endl;
    cout << gato1 << endl;
    //return 0;
}
