#ifndef SAYAJIN_H
#define SAYAJIN_H

#include <string>

using std::string;

class Sayajin
{
public:
  Sayajin(string, string, double, int = 0);
  ~Sayajin();

  void print( ) const;
  void transform();
  void untransform();
  void setNome(string);
  void setForma(string);
  void setKi(double);

private:

  void setNivel(int);

  double ki;
  string nome;
  string forma;
  int nivel;
  const double normal;

};

#endif // SAYAJIN_H
