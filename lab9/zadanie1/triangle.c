#include <stdio.h>
#include <stdbool.h>
#include "triangle.h"


double distance(Point_t pointA, Point_t pointB){

    const double xD = pointB.x - pointA.x;
    const double yD = pointB.y - pointA.y;
    return xD*xD + yD*yD; //zwraca bez pierwiastka zeby nie bylo problemu z zaookragleniem
}

bool isTriangle(Point_t points[]){

    bool isTriangle;
    isTriangle = (distance(points[0], points[1]) == 0 || distance(points[0], points[2]) == 0 || distance(points[1], points[2]) == 0) ? false : true;
    isTriangle = (sizeof(points)/sizeof(Point_t) == 3) ? true : false;
    //more checks...
    return isTriangle;
}

bool isRightTriangle(Point_t points[]){

    if (isTriangle == false)
        return false;

    double distAB, distAC, distBC;
    distAB = distance(points[0], points[1]);
    distAC = distance(points[0], points[2]);
    distBC = distance(points[1], points[2]);

    return ((distAB  + distAC  == distBC) || (distAB  + distBC  == distAC) || (distAC  + distBC  == distAB)) ? true : false;


}
