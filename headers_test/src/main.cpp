#include "cat.hpp"
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
    //if (gato1->getCaracter()== caracter_t::PACHORRA){std::cout << "el caracter es pachorra" << std::endl;};
    //auto gato2 = std::make_shared<ct::Cat>();
    //foo();
    cout << *gato1 << endl;
    //return 0;
}
