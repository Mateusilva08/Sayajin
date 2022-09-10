#include <iostream>

using std::cout;

#include "Sayajin.h"
#include "Sayajin.cpp"

int main() {
  cout << "Usando Sayajin no main\n";

  Sayajin goku("Goku", "Normal", 8348);
  Sayajin vegeta("vegeta", "Normal", 7924);

  goku.print();
  vegeta.print();

  goku.transform();
  goku.print();

  vegeta.transform();
  vegeta.print();

  goku.transform();
  goku.print();

  goku.transform();
  goku.print();

  goku.untransform();
  goku.print();
  
  vegeta.untransform();
  vegeta.print();
  
  return 0;
}