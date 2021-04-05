#include <stdio.h>
#include "GetShortestDistance.h"

int main(int argc, char* argv[])
{
  // Define two 3-D lines
  // l1 = r1 + s * v1
  // l2 = r2 + t * v2
  double r1[3] = { 0., 0., 0. }; // a position vector of the first line.
  double v1[3] = { 1., 0., 0. }; // a direction vector of the first line.
  double r2[3] = { 1., 1., 1. }; // a position vector of the second line.
  double v2[3] = { 0., 0., 1. }; // a direction vector of the second line.
  double s; // The parameter of the first line.
  double t; // The parameter of the second line.

  printf("Line Information:\n");
  printf("Line 1:\n");
  printf("r1=(%5.3f, %5.3f, %5.3f)\n", r1[0], r1[1], r1[2]);
  printf("v1=(%5.3f, %5.3f, %5.3f)\n", v1[0], v1[1], v1[2]);
  printf("Line 2:\n");
  printf("r2=(%5.3f, %5.3f, %5.3f)\n", r2[0], r2[1], r2[2]);
  printf("v2=(%5.3f, %5.3f, %5.3f)\n", v2[0], v2[1], v2[2]);

  printf("The shortest distance between two lines is: %f.\n",
      GetShortestDistance(r1, r2, v1, v2, &s, &t) );
  printf("The closest approaching point on line 1 is: (%f, %f, %f).\n",
      v1[0]*s + r1[0],
      v1[1]*s + r1[1],
      v1[2]*s + r1[2]);
  printf("The closest approaching point on line 2 is: (%f, %f, %f).\n",
      v2[0]*t + r2[0],
      v2[1]*t + r2[1],
      v2[2]*t + r2[2]);

  return 0;
}
