#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

#include "Pessoa.h"
#include "Posto.h"

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
    pessoas.push_back(Pessoa(i,idade, coordenadaX, coordenadaY,postos));
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

  sort(pessoas.begin(), pessoas.end());
  
  for(Pessoa pessoa:pessoas){
    bool foiAdicionada = false;
    for(tuple<double,int> distancia:pessoa.getDistancias()){
      if(postos.at(get<1>(distancia)).getCapacidadeDoPosto()>0 && !foiAdicionada){
        postos.at(get<1>(distancia)).alocaPessoa(pessoa.getId());
        foiAdicionada=true;
      }
    }
    if(!foiAdicionada){
      break;
    }
  }

  for(int i=0;i<numeroDePostos;i++){
    postos.at(i).imprimeSaida();
  }
}