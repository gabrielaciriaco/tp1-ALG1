#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

#include "Pessoa.hpp"
#include "Posto.hpp"

using namespace std;

vector<Posto> lerInformacoesPostos(int numeroDePostos) {
  vector<Posto> postos;
  int capacidadeDoPosto;
  int coordenadaX;
  int coordenadaY;
  for (int i = 0; i < numeroDePostos; i++) {
    cin >> capacidadeDoPosto >> coordenadaX >> coordenadaY;
    postos.push_back(Posto(i,capacidadeDoPosto, coordenadaX, coordenadaY));
  }

  return postos;
}

vector<Pessoa> lerInformacoesPessoas(int numeroDePessoas, vector<Posto>postos) {
  vector<Pessoa> pessoas;
  int idade;
  int coordenadaX;
  int coordenadaY;
  for (int i = 0; i < numeroDePessoas; i++) {
    cin >> idade >> coordenadaX >> coordenadaY;
    pessoas.push_back(Pessoa(idade, coordenadaX, coordenadaY,postos));
  }

  return pessoas;
}

int main() {
  int numeroDePostos = 0;
  int numeroDePessoas = 0;
  vector<Posto> postos;
  vector<Pessoa> pessoas;

  cin >> numeroDePostos;
  postos = lerInformacoesPostos(numeroDePostos);

  cin >> numeroDePessoas;
  pessoas = lerInformacoesPessoas(numeroDePessoas,postos);

  for (int i = 0; i < numeroDePostos; i++) {
    postos.at(i).imprimePosto();
  }

  sort(pessoas.begin(), pessoas.end());
  cout<<"Pessoas ordenadas por idade"<<endl;
  for (int i = 0; i < numeroDePessoas; i++) {
    pessoas.at(i).imprimePessoa();
  }
}