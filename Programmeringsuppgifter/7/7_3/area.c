#include <stdio.h>
#include "area.h"

double cirkel(double r)
{
	double area = r * r * PI;
	return area;
}

double rektangel(double b, double h)
{
	double area = b * h;
	return area;
}

double triangel(double b, double h)
{
	double area = (b*h)/2;
	return area;
}