#include <iostream>

using std::cout;

#include "Sayajin.h"

Sayajin::Sayajin(string nome, string forma, double ki, int nivel, string GUERREIRO): NORMAL(ki), GUERREIRO(GUERREIRO)
{
  this->setNome(nome);
  this->setForma(forma);
  this->setKi(ki);
  this->setNivel(nivel);
}

Sayajin::Sayajin(): NORMAL(7924), GUERREIRO("Guerreiro")
{
  this->setNome("Vegeta");
  this->setForma("Normal");
  this->setKi(7924);
  this->setNivel(0);
}

Sayajin::Sayajin(const Sayajin& copia): NORMAL(copia.ki), GUERREIRO(copia.GUERREIRO)
{
  this->setNome(copia.nome);
  this->setForma(copia.forma);
  this->setKi(copia.ki);
  this->setNivel(copia.nivel);
}

Sayajin::~Sayajin() {}

string Sayajin::getNome() const
{
  return nome;
}

string Sayajin::getForma() const
{
  return forma;
}

double Sayajin::getKi() const
{
  return ki;
}

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
  cout << "Classe: " << GUERREIRO << '\n';
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
    cout << '\n' << this->nome << " ja atingiu seu nivel maximo" << '\n';
  }

  this->setNivel(this->nivel + 1);
}
void Sayajin::untransform() {
  this->setForma("Normal");
  this->setKi(NORMAL);
  this->setNivel(0);
}

void Sayajin::kamehameha() const{
  cout << '\n' << nome << " esta utilizando o kamehameha\n";
  cout << "    ()>================())))))))\n";
}

void Sayajin::genkidama() const{
  cout << '\n' << nome << " esta utilizando a genkidama\n";
  cout << "     ((((((((((()))))))))))  \n";
}