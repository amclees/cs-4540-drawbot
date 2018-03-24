// This file will implement the draw library functions
#include "draw.h"
#include "math.h"

void follow_path(vector2* to_follow, int step, Stepper stepper1, Stepper stepper2) {
  vector2 current = to_follow[step * sizeof(vector2)];
  stepper1.step(current[0]);
  stepper2.step(current[1]);
}

int ang_to_step(double ang) {
  return (int) floor(((double) ang) * (4096.0 / 360.0));
}

path find_path(vector2 start_ang, vector2 target_ang) {
  vector2 total_steps;
  total_steps.x = ang_to_step(target_ang.x) - ang_to_step(start_ang.x);
  total_steps.y = ang_to_step(target_ang.y) - ang_to_step(start_ang.y);

  path found_path;
  found_path.points = &total_steps;
  found_path.length = 1;
  return found_path;
}

