#include <stdio.h>
#include "headers/area.h"
#include "headers/myMath.h"

int main()
{
	double interest;
	interest = getSimpleInterest(10000.0, 12.0, 5.0);
	printf("Interest is: %lf\n", interest);
	
	double t_area = getTriangleArea(5.0, 7.5);
	printf("Area of triangle is: %lf\n", t_area);

	double c_area = getCircleArea(7.5);
	printf("Area of circle is: %lf\n", c_area);

	return 0;
}