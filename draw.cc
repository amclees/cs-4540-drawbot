// This file will implement the draw library functions
#include "draw.h"
#include "math.h"

vector2 get_pos(vector2 ang, vector2 arm_len){
    double x1 = arm_len1*cos(ang.x*M_PI/180);
    double y1 = arm_len1*sin(ang.x*M_PI/180);
    double x2 = arm_len2*cos((ang.x+ang.y)*M_PI/180);
    double y2 = arm_len2*sin((ang.x+ang.y)*M_PI/180);
    
    vector2 result;
    result.x = x1+x2;
    result.y = y1+y2;
    return result;
}
