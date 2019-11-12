#include <iostream>
#include <cstdlib>
#include <cassert>
#include "rational.h"

using namespace std;

int main ()
{
  rational r1(-3, -6);
  assert (r1.get_num() == 1);
  assert (r1.get_denom() == 2);

  rational r2 (0, -5);
  assert (r2.get_num() == 0);
  assert (r2.get_denom() == 1);

  rational r3 (8, -4);
  assert (r3.get_num() == -2);
  assert (r3.get_denom() == 1);

  rational r4 (-3, 8);
  assert (r4.get_num() == -3);
  assert (r4.get_denom() == 8);

  rational r5 = r1 + r4;
  assert (r5.get_num() == 1);
  assert (r5.get_denom() == 8);

  rational r6 = r1 - r4;
  assert (r6.get_num() == 7);
  assert (r6.get_denom() == 8);

  rational r7 = r1 * r4;
  assert (r7.get_num() == -3);
  assert (r7.get_denom() ==16);

  rational r8 = r1 / r4;
  assert (r8.get_num() == -4);
  assert (r8.get_denom() == 3);

  rational r9 (8, 16);
  assert (r1 == r9);
  assert (r4 != r9);
  assert (r8 < r1);
  assert (r9 <= r1);
  assert (r5 > r7);
  assert (r5 >= r7);

  cout << r6 << endl;
  cout << "all tests passed - do endzone celebration dance!" << endl;
  return EXIT_SUCCESS;
}

