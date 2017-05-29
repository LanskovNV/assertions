/* leins, 24.05.2017 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "types.h"

//#define _NDEBUG  // uncomment to debug
#include "assertions-system.h"

#define VAL 10

int main(void)
{
  int x = 5, y = 2, res = VAL;

  FatalError(x != 0);
  FatalError(y != 0);

  Assert(x != 5);
  res /= x;
  Assert(y != 2);
  res /= y;

  printf("answer: %i\n", res);

  return 0;
} /* end of main */
