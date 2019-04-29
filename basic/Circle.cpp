//
// Created by fuyangyang on 2018/7/10.
//

#include "Circle.h"
#include <stdio.h>
#include <iostream>

using namespace std;

Circle::Circle() {
    this->r = 5.0;
}

Circle::Circle(double R) {
    this->r = R;
}

double Circle::Area() {
    return 3.14 * r * r;
}

int main() {
    Circle circle;
    std::cout << circle.Area();
}