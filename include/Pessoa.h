#ifndef Pessoa_H
#define Pessoa_H

#include <iostream>
#include <tuple>
#include <vector>
#include "Posto.h"

using namespace std;

class Pessoa {
private:
  int id;
  int idade;
  int coordenadaX;
  int coordenadaY;
  vector<tuple<double,int>> distancias;

  vector<tuple<double,int>> calculaDistanciasPostos(vector<Posto> postos);
public:
  Pessoa() {};
  Pessoa(int id,int idade, int coordenadaX, int coordenadaY, vector<Posto> postos);
  void imprimePessoa();
  friend bool operator< (const Pessoa &p1,const Pessoa &p2);
  vector<tuple<double,int>> getDistancias();
  int getId();
};

#endif