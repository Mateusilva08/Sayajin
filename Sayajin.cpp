#include <iostream>

using std::cout;

#include "Sayajin.h"

Sayajin::Sayajin(string nome, string forma, double ki, int nivel) : normal(ki) {
  this->setNome(nome);
  this->setForma(forma);
  this->setKi(ki);
  this->setNivel(nivel);
  // this->normal = ki;
}

Sayajin::~Sayajin() {}

void Sayajin::setNome(string nome) {
  if (nome.length() < 30) {
    this->nome = nome;
  }
}

void Sayajin::setForma(string forma) {
  if (forma.length() < 30) {
    this->forma = forma;
  }
}

void Sayajin::setKi(double ki) {
  if (ki > 0) {
    this->ki = ki;
  }
}

void Sayajin::setNivel(int nivel) { this->nivel = nivel; }

void Sayajin::print() const {
  cout << '\n' << "Nome: " << nome << '\n';
  cout << "Forma: " << forma << '\n';
  cout.precision(10);
  cout << "Poder de luta: " << ki << '\n';
}

void Sayajin::transform() {
  if (this->nivel == 0) {
    this->setForma("Super Sayajin");
    this->setKi(ki * 10);
  }

  if (this->nivel == 1) {
    this->setForma("Super Sayajin 2");
    this->setKi(ki * 30);
  }

  if (this->nivel >= 2) {
    cout << '\n' << this->nome << " já atingiu seu nivel maximo" << '\n';
  }

  this->setNivel(this->nivel + 1);
}
void Sayajin::untransform() {
  this->setForma("Normal");
  this->setKi(normal);
  this->setNivel(0);
}
