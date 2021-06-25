#ifndef Posto_H
#define Posto_H

#include <iostream>
#include <vector>

using namespace std;

class Posto {
private:
  int id;
  int capacidadeDoPosto;
  int coordenadaX;
  int coordenadaY;
  vector<int> pessoasAlocadas;

public:
  Posto() {};
  Posto(int id,int capacidadeDoPosto, int coordenadaX, int coordenadaY);
  void imprimeSaida();
  int getCoordenadaX();
  int getCoordenadaY();
  int getId();
  int getCapacidadeDoPosto();
  void alocaPessoa(int idPessoa);
};

#endif