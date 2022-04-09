#include <string>
#include <iostream>
#include <fstream>

#pragma once


std::string open_get20(std::string path);
//opens a file and gets first twenty characters

std::string combine_strings(int number, ...);
//combines strings into one

void open_saveall(std::string path, std::string words);
//opens a file and saves a string to it