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
        std::sort(data.begin(),data.end());
    }

Polynome::Polynome(const MonoVec &data0)
    :data{data0}
    {}

int Polynome::size() const{
    return(data.size());
}

Monome Polynome::afficher_monome(int i) const{
    return(data[i]);
}

void Polynome::simplifie(){
    for(MonoVec_It it = data.begin(); it != data.end() ; ++it){
        // on enlève les monomes de coeff 0
        if(it->get_coeff() == 0){
            it = data.erase(it);
        }
        // on regarde s'il y'a deux monomes de même degrés et dans ce cas-là, on les recrée en un seul
        if( (it+1) != data.end() and (it->get_degre() == (it+1)->get_degre()) ){
            *it = (*it) + (*(it+1));
            it = data.erase((it+1));
        }
    }
}