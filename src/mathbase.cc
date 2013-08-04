#include "mathbase.h"

/**
 */
double Erf(double x) {
  if (x > 3.0) return 1.0;
  else if (x < -3.0) return -1.0;
  int terms = 35;
  double nx, re, nd;
  re = 0;
  nx = x;
  re += nx;
  for (int n = 1 ; n < terms; n++) {
    nd = (double) n;
    nx *= -1.0 * x * x * (nd - 0.5) / nd /(nd + 0.5);
    re += nx;
  }
  return 2.0 * re / constants::SQRT_PI;
}
