#ifndef Posto_H
#define Posto_H

#include <iostream>

using namespace std;

class Posto {
private:
  int id;
  int capacidadeDoPosto;
  int coordenadaX;
  int coordenadaY;

public:
  Posto() {};
  Posto(int id,int capacidadeDoPosto, int coordenadaX, int coordenadaY);
  void imprimePosto();
  int getCoordenadaX();
  int getCoordenadaY();
  int getId();
};

#endif