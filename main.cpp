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
  cout << "Criando um objeto e colocando o endereco no ponteiro\n";
  sayajinPtr = new Sayajin("Raditz", "Normal", 1200, false);

  sayajinPtr->setComida();
  sayajinPtr->print();

  cout << "\nDeletando o sayajin "<< sayajinPtr->getNome() << ".\n";
  delete sayajinPtr;
  sayajinPtr = 0;
  cout << "\n\n";

  return 0;
}