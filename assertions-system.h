#ifndef ASSERTIONSSYSTEM_H
#define ASSERTIONSSYSTEM_H
#include "types.h"

#define NUM_OF_ASSERTS 2
#define ASSERT_MESSAGE "Assert was detected, what go you want to do?\n"
#define ERROR_MESSAGE "Error detected, program will be closed\n"

/* functions */
INFO_t InfoInit(int file, int line, char *message);
void AssertFunc(BOOL_t condition, INFO_t info, BOOL_t assertFlag);
void FatalErrorFunc(BOOL_t condition, INFO_t info);

/* to switch off debug mode */
#define FatalError(x) \
  FatalErrorFunc(x, InfoInit(__FILE__, __LINE__, ERROR_MESSAGE));
#ifdef _NDEBUG
#define Assert(x)
#else
#define Assert(x) \
   {              \
     static BOOL_t assertFlag = TRUE; \
     AssertFunc(x, InfoInit(__FILE__, __LINE__, ASSERT_MESSAGE), assertFlag); \
   }
#endif

#endif // ASSERTIONSSYSTEM_H
