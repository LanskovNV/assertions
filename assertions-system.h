#ifndef ASSERTIONSSYSTEM_H
#define ASSERTIONSSYSTEM_H
#include "types.h"

#define NUM_OF_ASSERTS 2
#define ASSERT_MESSAGE "Assert was detected, what go you want to do?\n"

/* to switch off debug mode */
#ifdef NDEBUG
#define Assert(ignore)((void) 0)
#endif

/* functions */
void SystemOpen();
void systemClose();
void Assert();
void FatalError();
#endif // ASSERTIONSSYSTEM_H
