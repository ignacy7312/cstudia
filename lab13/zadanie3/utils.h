#pragma once
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "time.h"
#include "sort.h"

bool isLess(double, double);
bool isGreater(double, double);

double * generateRandomizedArray(int size, bool decider);

double calculateDurationBubble(double * array, unsigned int n, sorting::Comparator comparator);
double calculateDurationQs(double * array, int lo, int hi, sorting::Comparator comparator);
double calculateDurationMer(double * array, int lo, int hi, sorting::Comparator comparator);

