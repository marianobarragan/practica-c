#include "cat.hpp"
#include <iostream>

//#include <boost/shared_ptr.hpp>

void fuu(){
  ct::caracter_t caracter = ct::PACHORRA;
  ct::Cat * gato1 = new ct::Cat("gatito",caracter);//("gatito",caracter);
};

int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    fuu();
    return 0;
}