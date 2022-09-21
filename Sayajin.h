#ifndef SAYAJIN_H
#define SAYAJIN_H

#include <string>
using std::string;

#include <vector>
using std::vector;

class Sayajin
{
public:
  Sayajin(string, string, double, bool, int = 0);
  //Não estou utilizando esses construtores
  //Sayajin();
  //Sayajin(const Sayajin&);
  ~Sayajin();

  void print( ) const;
  void transform();
  void untransform();
  void kamehameha() const;
  void genkidama() const;
  void printNumSayajin() const;
  void insereEsfera(const string &);
  void printEsferas() const;

  void setNome(string);
  void setForma(string);
  void setKi(double);
  void setEspada(bool);

  string getNome() const;
  string getForma() const;
  double getKi() const;
  bool getEspada() const {return espada;}
  static int getNumSayajin() {return numSayajin;}

private:

  void setNivel(int);
  
  double ki;
  string nome;
  string forma;
  int nivel;
  const double NORMAL;
  static const string GUERREIRO;
  static int numSayajin;
  bool espada;

  vector< string * > esferasDoDragao;

};

#endif // SAYAJIN_H