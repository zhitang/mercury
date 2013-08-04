/**
   header file for basic math operations.
   declared as inline functions to improve efficiency
   
   @author Zhi Tang
   @version 1.0 8/03/13
 */

#ifndef __MATHBASE_H
#define __MATHBASE_H

#include "global.h"

namespace constants {
  const double PI = 3.141592653589793;
  const double SQRT_PI = 1.772453850905516;
  const double TOL = 1e-8;
}

/**
   some inline function that operates basic stuff
 */
inline float sign(float a) { return a >= 0 ? 1.0 : -1.0; };
inline bool even(int i) { return (i % 2 == 0) ? true : false; };

/**
 */
double Erf(double x);

#endif
