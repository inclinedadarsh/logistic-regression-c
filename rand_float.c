#include "rand_float.h"
#include <stdlib.h>

float rand_float(void) { return (float)rand() / (float)RAND_MAX; }
