/* leins, 24.05.2017 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "types.h"

#define NDEBUG  // rerease mode
#include "assertions-system.h"

#define VAL 10

int main(void)
{
  int x, res = VAL;

  srand(time(0));
  x = rand() % 2;

  //FatalError(x != 0);
  Assert(x != 0);

  res /= x;
  printf("otvet: %i\n", &x);

  return 0;
} /* end of main */
