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

vector2* get_interpolated_points(vector2 pos1, vector2 pos2, int num_points)
{
    vector2* list = malloc(num_points * sizeof(vector2));
    
    double x0 = pos1.x;
	double x1 = pos2.x;
	double y0 = pos1.y;
	double y1 = pos2.y;
	double deltaY = y0 - y1;
	double deltaX = x0 - x1;
	double b = -deltaY;
	double m = b/deltaX;
	double x = 0;
	double y = 0;
	int counter = 0;
	
	if (deltaX > deltaY)	
	{
		interval = deltaX/num_points;

		for (x = x0; x < x1; x + interval)
		{
			y = m * x;
			vector2 pos;
			pos.x = x;
			pos.y = y;
			counter++;
			list[counter] = pos; 
		}
	}
	else
	{
		interval = deltaY/numOfPoints;

		for (y = y0; y < y1; y + interval)
		{
			x = y/m;
			vector2 pos;
			pos.x = x;
			pos.y = y;
			counter++;
			list[counter] = pos; 	
		}
	}

	return list;
}
