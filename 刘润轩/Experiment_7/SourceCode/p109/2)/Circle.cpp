﻿#include "Circle.h"
double Circle::Area()
{
 
	return PI * Radius*Radius;
}
double Circle::Circumference()
{
	return 2 * PI*Radius;
}
 
double Circle::GetRadius()const
{
	double a = Area();
	return Radius;
}
