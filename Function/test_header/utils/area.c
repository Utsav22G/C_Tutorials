/*
Function to calculate the area of a circle and return the result to the caller.
Receives the radius of the circle as an input parameter.
*/

double getCircleArea(double rad) {
	double area;
	area = 3.1428 * rad;
	return area;
}

/*
Function to calculate the area of a triangle and return the result to the caller.
Receives the base and height of the triangle as the input parameters.
*/

double getTriangleArea(double base, double height) {
	double area;
	area = 0.5 * height * base;
	return area;
}