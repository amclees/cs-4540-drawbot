#ifndef ARDUINO_DRAW
#define ARDUINO_DRAW

struct vector2 {
  double x;
  double y;
};

struct vector2 get_target_angles(struct vector2 target_pos, struct vector2 start_ang);

struct vector2* get_interpolated_points(struct vector2 pos1, struct vector2 pos2);

struct vector2 get_pos(struct vector2 ang, struct vector2 arm_len);

void follow_path(struct vector2* path, int step);

struct vector2* find_path(struct vector2 start_ang, struct vector2 target_ang);

#endif
