#include "list.h"
#include "comparators.h"
#include "parser.h"
#include "predicate.h"
#include "gtest.h"

bool isEqual(int lhs, int rhs){
    return (lhs == rhs) ? true : false;
}
bool isGreater(int lhs, int rhs){
    return (lhs > rhs) ? true : false;
}
bool isLess(int lhs, int rhs){
    return (lhs < rhs) ? true : false;
}
