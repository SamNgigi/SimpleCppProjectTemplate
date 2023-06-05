#include "example1/my_factorial.hpp"

unsigned int my_factorial(unsigned int number){
    return number >1 ? my_factorial(number - 1)*number : 1;
}