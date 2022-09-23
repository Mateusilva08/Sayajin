#include <iostream>

using std::cout;

#include "Sayajin.h"
#include "Sayajin.cpp"

int main() {
  cout << "Usando Sayajin no main\n";

  Sayajin goku("Goku", "Normal", 8348, false);
  const Sayajin VEGETA("Vegeta", "Normal", 7924, false);
  Sayajin trunks("Trunks", "Normal", 7249, true);

  /*O atributo GUERREIRO permanece constante, pois todos
  os sayajins são uma raça guerreira*/
  trunks.print();
  trunks.kamehameha();
  trunks.genkidama();
  trunks.printNumSayajin();

  trunks.transform();
  trunks.print();

  trunks.untransform();
  trunks.print();

  goku.insereEsfera("Esfera de 1 estrela");
  goku.insereEsfera("Esfera de 2 estrelas");
  goku.insereEsfera("Esfera de 3 estrelas");
  goku.insereEsfera("Esfera de 4 estrelas");
  goku.insereEsfera("Esfera de 5 estrelas");
  goku.insereEsfera("Esfera de 6 estrelas");
  goku.insereEsfera("Esfera de 7 estrelas");
  goku.insereEsfera("Esfera de 8 estrelas");
  goku.insereEsfera("Esfera de 9 estrelas");
  goku.printEsferas();

  VEGETA.genkidama();
  VEGETA.kamehameha();

  goku.~Sayajin();
  Sayajin::printNumSayajin();


  return 0;
}