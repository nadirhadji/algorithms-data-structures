#include <iostream>

using namespace std;

void f1(int* tab, int n) {
  int* t = tab, *f = tab + n;
  while (t < f)
    *(t++) *= 2;
}

void f2(int& a, int& b) {
  a += b++;
}

int main() {
  int* t = new int[8];
  for (int i = 0; i < 5; i++)
    t[i] = i;
  f1(t, 4);
  int x = 0;
  for (int i = 0; i < 5; i++)
    f2(x, t[i]);
  for (int i = 0; i < 8; i++)
    cout << " " << t[i];
  cout << " : " << x << endl;
}
