// This file will implement the draw library functions
#include "draw.h"
#include "math.h"

const double STEP_COUNT = 4096.0;

void follow_path(vector2* to_follow, int step, Stepper stepper1, Stepper stepper2) {
  vector2 current = to_follow[step * sizeof(vector2)];
  stepper1.step(current[0]);
  stepper2.step(current[1]);
}

int ang_to_step(double ang) {
  return (int) floor(((double) ang) * (STEP_COUNT / 360.0));
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

vector2 get_pos(vector2 ang, vector2 arm_len){
    double x1 = arm_len1 * cos(ang.x * M_PI / 180);
    double y1 = arm_len1 * sin(ang.x * M_PI / 180);
    double x2 = arm_len2 * cos((ang.x + ang.y) * M_PI / 180);
    double y2 = arm_len2 * sin((ang.x + ang.y) * M_PI / 180);

    vector2 result;
    result.x = x1+x2;
    result.y = y1+y2;
    return result;
}
