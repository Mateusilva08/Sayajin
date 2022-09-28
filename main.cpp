#include <iostream>

using std::cout;

#include "Sayajin.h"
#include "Sayajin.cpp"

int main() {
  cout << "Usando Sayajin no main\n";

  Sayajin goku("Goku", "Normal", 8348, false);
  const Sayajin VEGETA("Vegeta", "Normal", 7924, false);
  Sayajin trunks("Trunks", "Normal", 7249, true);

  Sayajin *sayajinPtr;
  sayajinPtr = &goku;

  sayajinPtr->genkidama();
  sayajinPtr->transform();

  Sayajin::setEsferaDrag();
  Sayajin::printEsferaDrag();

  trunks.setComida();
  trunks.print();

  sayajinPtr->setComida();
  sayajinPtr->print();

  return 0;
}