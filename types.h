#ifndef TYPES_H
#define TYPES_H
/* useful types */
typedef enum {
  FALSE,
  TRUE
}BOOL_t;

typedef struct {
  char *message;
  int fileName;
  int line;
  int func;
}INFO_t;

#endif // TYPES_H
