#ifndef RUNSCRIPT_Process
#define RUNSCRIPT_Process

#include "Action.h"


typedef struct Node_ {
   char* line;
   struct Node_* next;
} Node;


void RunScript(State*);

#endif
