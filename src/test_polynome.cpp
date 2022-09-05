#include <iostream>
#include "polynome.hpp"

int main(){
    std::cout << "Hello World" << std::endl;

    int coeff[] = { 2, -1, 4, 0, 2, 6 }; 
    unsigned degre [] = { 0, 3, 2, 5, 6, 2 };
    Polynome P(coeff , degre , 6);

    for(int i= 0; i < P.size() ; ++i){
        std::cout << P.afficher_monome(i) << " " ;
    }
    std::cout << std::endl;

    std::cout << "simplification de : P" << std::endl;
    P.simplifie();

    for(int i= 0; i < P.size() ; ++i){
        std::cout << P.afficher_monome(i) << " " ;
    }

    return(0);
}