/* leins, 24.05.2017 */
#include <stdio.h>
#include "assertions-system.h"
#include "types.h"

/*void SyatemOpen();
void systemClose();*/

BOOL_t Assert(BOOL_t condition, char *message)
{
  if (!condition)
    {
      printf("0 - skip assert and continue\n"
             "1 - skip all asserts"
             "2 - close program");
      switch (_getch())
      {
      case 0:
        break;
      case 1:
        break;
      case 2:
        return 1;
        break;
      default:
        printf("incorrect choise, pease try again\n");
        break;
      }
    }
} /* end of func */

BOOL_t FatalError(BOOL_t condition, char *message, BOOL_t returnVal)
{
  if (!condition)
  {
    printf("FATAL_ERROR, ...\n");
    return retrunVal;
  }
} /* end of func */
