#ifndef SAYAJIN_H
#define SAYAJIN_H

#include <string>

using std::string;

class Sayajin
{
public:
  Sayajin(string, string, double, int = 0, string = "Guerreiro");
  Sayajin();
  Sayajin(const Sayajin&);
  ~Sayajin();

  void print( ) const;
  void transform();
  void untransform();
  void kamehameha() const;
  void genkidama() const;

  void setNome(string);
  void setForma(string);
  void setKi(double);

  string getNome() const;
  string getForma() const;
  double getKi() const;

private:

  void setNivel(int);
  
  double ki;
  string nome;
  string forma;
  int nivel;
  const double NORMAL;
  const string GUERREIRO;

};

#endif // SAYAJIN_H