#pragma once

#include <stdbool.h>
#include <math.h>

// CSCN71020 - Winter 24 - Group 2

#define RECTANGLESIDES	4
#define RECTANGLEPOINTS	2
#define TOTALCOORDS		4
#define LENGTHS			4
#define DIAGONALS		2

float* getRectangleSides(float rectangleSides[RECTANGLESIDES][RECTANGLEPOINTS]);

void printPoints(float rectangleSides[RECTANGLESIDES][RECTANGLEPOINTS]);

// pythagorean theorem
float pythagoreanTheorem(float a[RECTANGLEPOINTS], float b[RECTANGLEPOINTS]);

bool isQuadrilateralFlat(float quadrilateralPoints[RECTANGLESIDES][RECTANGLEPOINTS]);

bool isRectangleFlat(float quadrilateralPoints[RECTANGLESIDES][RECTANGLEPOINTS]);

float findMinOfArray(float points[TOTALCOORDS]);

float findMaxOfArray(float points[TOTALCOORDS]);

float* findLengths(float quadrilateralPoints[RECTANGLESIDES][RECTANGLEPOINTS]);

float* findDiagonals(float quadrilateralPoints[RECTANGLESIDES][RECTANGLEPOINTS]);

bool isRectangle(float lengths[RECTANGLESIDES], float diagonals[RECTANGLEPOINTS]);

float* sortPoints(float quadrilateralPoints[RECTANGLESIDES][RECTANGLEPOINTS], bool flat);

float calculatePerimeter(float lengths[RECTANGLESIDES]);

float calculateArea(float lengths[RECTANGLESIDES]);

void analyzeQuadrilateral(float quadrilateralPoints[RECTANGLESIDES][RECTANGLEPOINTS]);