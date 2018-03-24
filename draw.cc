// This file will implement the draw library functions
#include "draw.h"

void follow_path(vector2* path, int step, Stepper stepper1, Stepper stepper2) {
  vector2 current = path[step * sizeof(vector2)];
  stepper1.step(current[0]);
  stepper2.step(current[1]);
}

