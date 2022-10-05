#ifndef SAYAJIN_H
#define SAYAJIN_H

#include <string>
using std::string;

#include <vector>
using std::vector;

class Sayajin
{
public:
  Sayajin(const string &, const string &, double, bool, int = 0);
  //Não estou utilizando esses construtores
  //Sayajin();
  //Sayajin(const Sayajin&);
  ~Sayajin();

  void print( ) const;
  void transform();
  void untransform();
  void kamehameha() const;
  void genkidama() const;
  static void printNumSayajin();
  //void insereEsfera(const string &);
  //void printEsferas() const;
  static void printEsferaDrag();

  void setNome(string);
  void setForma(string);
  void setKi(double);
  void setEspada(bool);
  static void setEsferaDrag();
  void setComida();

  string getNome() const;
  string getForma() const;
  double getKi() const;
  bool getEspada() const {return espada;}
  static int getNumSayajin() {return numSayajin;}
  string getComida() {return comida;}

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
  static string esferaDrag[];
  string comida;

  //const static string COMIDAFAV[];

  //vector< string * > esferasDoDragao;

  //const static string esferaDrag[7];
  

};

#endif // SAYAJIN_H