#include "Posto.h"

Posto::Posto(int id, int capacidadeDoPosto, int coordenadaX, int coordenadaY) {
  this->id = id;
  this->capacidadeDoPosto = capacidadeDoPosto;
  this->coordenadaX = coordenadaX;
  this->coordenadaY = coordenadaY;
}

void Posto::imprimeSaida() {
  if (this->pessoasAlocadas.size() != 0) {
    cout << this->id << endl;
    for (int idPessoa : this->pessoasAlocadas) {
      cout << idPessoa << " ";
    }
    cout << endl;
  }
}

int Posto::getCoordenadaX() { return this->coordenadaX; }

int Posto::getCoordenadaY() { return this->coordenadaY; }

int Posto::getId() { return this->id; }

int Posto::getCapacidadeDoPosto() { return this->capacidadeDoPosto; }

void Posto::alocaPessoa(int idPessoa) {
  if (this->capacidadeDoPosto > 0) {
    this->pessoasAlocadas.push_back(idPessoa);
    this->capacidadeDoPosto--;
  }
}