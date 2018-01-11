/*
  UQAM / Département d'informatique
  INF3105
  Laboratoire 1
*/

#include <iostream>
#include <limits>

#include "point.h"

using namespace std;

/* 
   Allez-y étape par étape. C'est la seule façon de ne pas introduire de bogue!

   Étape 1 : Compiler ce sans modification.
   Étape 2 : Enlever la fonction main() et renommer main2() ==> main()
   Étape 2 : Enlever la fonction main2() et renommer main3() ==> main()
   ...

 */

/*
int main1(int argc, const char** args)
{
  std::cout << "Bienvenue au cours INF3105 en C++ !" << std::endl;
  return 0;
}

int main2(int argc, const char** args)
{
  Point point(3, 105);
  std::cout << point;
  std::cout << std::endl; // fin de ligne
  return 0;
}

int main3(int argc, const char** args)
{
  Point point(1.2,5.7);
  std::cout << "point.x=" << point.x << "\tpoint.y=" << point.y << std::endl;
  return 0;
}

int main4(int argc, const char** args)
{
  Point point;
  std::cout << "Entrez un point:" << std::endl;
  std::cin >> point;
  std::cout << "Revoici votre point:" << std::endl;
  std::cout << point << std::endl;
  return 0;
}

int main5(int argc, const char** args)
{
  Point a(0,0);
  Point b(4,3);
  double d = a.distance(b);
  std::cout << "Distance("<< a << "," << b << ")=" << d << std::endl;
  return 0;
}
*/

int main(void) {
  int n;
  cin >> n;
  Point tableau[n];
  double min = numeric_limits<double>::infinity();

  for (int i = 0; i < n; i++) {
    cin >> tableau[i];
    for (int j = 0; j < i; j++) {
      //cout << tableau[i] << " " << tableau[j] << " ";
      double distance = tableau[i].distance(tableau[j]);
      //cout << distance << endl;
      if (distance < min) {
        min = distance;
      }
    }
  }

  cout << "distance entre les 2 points les plus proches: " << min << endl;

  return 0;
}
