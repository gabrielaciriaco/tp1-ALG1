#include <iostream>
#include <cmath>
#include <algorithm>
#include "Pessoa.hpp"


Pessoa::Pessoa(int idade, int coordenadaX, int coordenadaY, vector<Posto> postos){
    this->idade = idade;
    this->coordenadaX = coordenadaX;
    this->coordenadaY =  coordenadaY;
    this->distancias = calculaDistanciasPostos(postos);
}

bool operator< (const Pessoa &p1,const Pessoa &p2)
{
  return p1.idade > p2.idade;
}

vector<tuple<double,int>> Pessoa::calculaDistanciasPostos(vector<Posto> postos){
  vector<tuple<double,int>> distancias;
  for(Posto posto: postos){
    double distancia = sqrt(
      (pow(this->coordenadaX-posto.getCoordenadaX(),2))
      +
      (pow(this->coordenadaY-posto.getCoordenadaY(),2))
      );
    distancias.push_back({distancia,posto.getId()});
  } 
  sort(distancias.begin(),distancias.end());
  return distancias;
}

void Pessoa::imprimePessoa(){
  cout<<this->idade<<" "<<this->coordenadaX<<" "<<this->coordenadaY<<endl;
  for(tuple<double,int> distancia: this->distancias){
    cout<<get<0>(distancia)<< " ";
    cout<<get<1>(distancia)<<endl;
  }
}
