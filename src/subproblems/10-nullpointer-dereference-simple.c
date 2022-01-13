#include <stdio.h>
#include "10-nullpointer-dereference-simple.h"

int nullpointer(){    
    int *pi;     // a pointer to an integer
    int *t;
    int a = *t; // WARN
    pi = NULL; 
    int c = *pi; // WARN
    return 1;
}