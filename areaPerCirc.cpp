// Copyright (c) 2023 Santiago Hewett All right reserved
// .
// Created by: Santiago Hewett
// Date: Sep 24 2023
// This program displays the area and perimeter of a circle.

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    std::cout << "For a circle with a radius of 11.29 cm : " << std::endl;
    std::cout << std::endl;
    double radius = 11.29;
    double area = M_PI * pow(radius, 2);
    double circumference = 2 * M_PI * radius;
    std::cout << "The area is : " << std::fixed << std::setprecision(2) << area
    << " cm ^2 " << std::endl;
    std::cout << "The circumference is : " << std::fixed
<< std::setprecision(2) << circumference << "cm " << std::endl;
    return 0;
}
