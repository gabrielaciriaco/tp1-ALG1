#include "Posto.hpp"

Posto::Posto(int id,int capacidadeDoPosto, int coordenadaX, int coordenadaY){
    this->id = id;
    this->capacidadeDoPosto = capacidadeDoPosto;
    this->coordenadaX = coordenadaX;
    this->coordenadaY =  coordenadaY;
}

void Posto::imprimePosto(){
  cout<<this->capacidadeDoPosto<<" "<<this->coordenadaX<<" "<<this->coordenadaY<<endl;
}

int Posto::getCoordenadaX(){
  return this->coordenadaX;
}

int Posto::getCoordenadaY(){
  return this->coordenadaY;
}

int Posto::getId(){
  return this->id;
}