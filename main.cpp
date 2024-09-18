/****************************
 *  Автор:      Вялов Г.В.  *
 *  Дата:       17.09.2024  *
 *  Название:   Лаба №1     *
 ***************************/
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {
  double l = 0.994;
  double g = 9.81;
  double a = 50 * M_PI / 180;
  double t1, t2, t3;

  t1 = 2 * M_PI * sqrt(l / g);
  t2 = 2 * M_PI * sqrt((l / g) * (1. + (1. / 16) * pow(a, 2)));
  t3 = 2 * M_PI * sqrt(l / g * (1. + 1. / 4 * pow(sin(a / 2), 2) + 9. / 64 * pow(sin(a / 2), 4)));

  cout.precision(7);
  cout << t1 << "; " << t2 << "; " << t3;
}