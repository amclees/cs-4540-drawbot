#ifndef ARDUINO_DRAW
#define ARDUINO_DRAW

typedef struct {
  double x;
  double y;
} vector2;

vector2 get_target_angles(vector2 target_pos, vector2 start_ang);

vector2* get_interpolated_points(vector2 pos1, vector2 pos2);

vector2 get_pos(vector2 ang, vector2 arm_len);

void follow_path(vector2* path, int step);

vector2* find_path(vector2 start_ang, vector2 target_ang);

#endif
