#include "../include/activation.h"
#include <math.h>

float sigmoidf(float z) { return 1.f / (1.f + expf(-z)); }
