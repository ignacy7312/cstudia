#pragma once

// Declaration of boolean type
#include <stdbool.h>

typedef struct Point {
	double x, y;
} Point_t;

bool isRightTriangle(Point_t points[]);
bool isTriangle(Point_t points[]);
double distance(Point_t pointA, Point_t pointB);