#include <vector> 
#include <string>
#include <algorithm>
#include "monome.hpp"
#include "polynome.hpp"

Polynome::Polynome(int coeff, unsigned degre)
    :data(1)
    {
        data[0] = Monome(coeff,degre);
    }

Polynome::Polynome(int coeff[], unsigned degre[], int n)
    :data(n)
    {
        for(int i=0; i < n ; ++i){
            data[i] = Monome(coeff[i], degre[i]);
        }
    }

Polynome::Polynome(const MonoVec &data0)
    :data{data0}
    {}