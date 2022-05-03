#pragma once
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>



char * completelyRandom(int nLength);
char * parametrizedRandom(int nLength, int nSpecial, int nNumbers, int nCapital);
void savetoFile(const char * path, const char *);

