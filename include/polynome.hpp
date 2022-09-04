#ifndef _POLYNOME_HPP_
#define _POLYNOME_HPP_

#include <vector> 
#include <string>
#include "monome.hpp"


typedef std::vector <Monome> MonoVec; // on voit le polynôme comme un vecteur de monôme
typedef std::vector <Monome>::iterator MonoVec_It;
typedef std::vector <Monome>::const_iterator MonoVec_CIt;

class Polynome{
    public:
        Polynome(int coeff = 0, unsigned degre = 0); // constructeur de base
        Polynome(int coeff[], unsigned degre[], int n); 
        Polynome(const MonoVec &data0); 
    private:
        MonoVec data;

};

#endif