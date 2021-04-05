#include <math.h>

double GetShortestDistance(double* r1, double* r2, double* p1, double* p2, double* s, double* t)
{
  double p12  = p1[0]*p2[0] + p1[1]*p2[1] + p1[2]*p2[2];
  double r2p2 = r2[0]*p2[0] + r2[1]*p2[1] + r2[2]*p2[2];
  double r1p2 = r1[0]*p2[0] + r1[1]*p2[1] + r1[2]*p2[2];
  double r2p1 = r2[0]*p1[0] + r2[1]*p1[1] + r2[2]*p1[2];
  double r1p1 = r1[0]*p1[0] + r1[1]*p1[1] + r1[2]*p1[2];
  double p1p1 = p1[0]*p1[0] + p1[1]*p1[1] + p1[2]*p1[2];
  double p2p2 = p2[0]*p2[0] + p2[1]*p2[1] + p2[2]*p2[2];

  // Vertex parameter
  s[0] = (  p12 * (r2p2 - r1p2) - p2p2 * ( r2p1 - r1p1 ) ) / ( p12*p12 - p1p1*p2p2 );
  t[0] = ( p1p1 * (r2p2 - r1p2) -  p12 * ( r2p1 - r1p1 ) ) / ( p12*p12 - p1p1*p2p2 );

  // Distance calculator
  double determinant =  ( r2[0] - r1[0] ) * ( p1[1] * p2[2] - p1[2] * p2[1] ) +
                          ( r2[1] - r1[1] ) * ( p1[2] * p2[0] - p2[2] * p1[0] ) +
                          ( r2[2] - r1[2] ) * ( p1[0] * p2[1] - p1[1] * p2[0] );
  determinant = fabs(determinant);
  double denominator =  ( p1[1] * p2[2] - p1[2] * p2[1] ) * ( p1[1] * p2[2] - p1[2] * p2[1] ) +
                          ( p1[2] * p2[0] - p1[0] * p2[2] ) * ( p1[2] * p2[0] - p1[0] * p2[2] ) +
                          ( p1[0] * p2[1] - p1[1] * p2[0] ) * ( p1[0] * p2[1] - p1[1] * p2[0] );
  denominator = sqrt( denominator );
  return determinant/denominator;
}
