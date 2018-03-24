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
			list[counter] = pos;
			counter++;
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
			list[counter] = pos;
			counter++;
		}
	}

	return list;
}
