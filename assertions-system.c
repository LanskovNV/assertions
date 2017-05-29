/* leins, 24.05.2017 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assertions-system.h"
#include "types.h"
INFO_t InfoInit(int file, int line, char *message)
{
  INFO_t info;

  info.message = malloc(strlen(message));
  info.fileName = file;
  info.line = line;
  strcpy(info.message, message); // ???

  return info;
} /* end of function */

void AssertFunc(BOOL_t condition, INFO_t info)
{
  static BOOL_t flag = TRUE;

  if (flag)
  {
    if (!condition)
      {
        printf("%s: %i, %i\n", info.message, info.fileName, info.line);
        printf("0 - skip assert and continue\n"
               "1 - skip all this asserts\n"
               "2 - close program\n");
        switch (getchar())
        {
        case '0':
          getchar();
          break;
        case '1':
          flag = FALSE;
          break;
        case '2':
          abort();
          break;
        }
      }
  }
  free (info.message);
} /* end of func */

void FatalErrorFunc(BOOL_t condition, INFO_t info)
{
  if (!condition)
  {
    printf("%s: %i, %i\n", info.message, info.fileName, info.line);
    free(info.message);
    abort();
  }
} /* end of func */
