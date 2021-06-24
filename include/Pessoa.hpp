#ifndef Pessoa_H
#define Pessoa_H

#include <iostream>
#include <tuple>
#include <vector>
#include "Posto.hpp"

using namespace std;

class Pessoa {
private:
  int idade;
  int coordenadaX;
  int coordenadaY;
  vector<tuple<double,int>> distancias;

  vector<tuple<double,int>> calculaDistanciasPostos(vector<Posto> postos);
public:
  Pessoa() {};
  Pessoa(int idade, int coordenadaX, int coordenadaY, vector<Posto> postos);
  void imprimePessoa();
  friend bool operator< (const Pessoa &p1,const Pessoa &p2);
};

#endif