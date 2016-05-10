#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"
#include <string>

class Triangle : public Shape{
    std::string shape;
    float base;
    float height;

public:

 Triangle(std::string shape = "Nice Triangle!") : shape(name){};
 Triangle(float base, float height) : base(0), height(0){};
 
 float area(float base, float height);
};
#endif