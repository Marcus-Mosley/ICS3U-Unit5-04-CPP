// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on October 2020
// This program calculates the volume of a cylinder

#include <iostream>
#include <iomanip>
#include <cmath>

float cylinder_volume(int radius_int, int height_int, float volume) {
    // This functions calculates the volume of a cylinder

    // Process
    volume = M_PI * pow(radius_int, 2) * height_int;

    return volume;
}


main() {
    // This function gets base length and height
    std::string radius_str;
    std::string height_str;
    float radius_int;
    float height_int;
    float volume;

    // Input
    while (true) {
        std::cout << "Enter the radius of the cylinder (cm): ";
        std::cin >> radius_str;

        try {
            radius_int = std::stoi(radius_str);
            if (radius_int <= 0) {
                std::cout << "You have not a valid radius, please input a"
                    " positive number!" << std::endl;
                std::cout << "" << std::endl;
            } else {
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "That is not an integer, please input a number!"
            << std::endl;
            std::cout << "" << std::endl;
        }
    }
    while (true) {
        std::cout << "Enter the height of the cylinder (cm): ";
        std::cin >> height_str;

        try {
            height_int = std::stoi(height_str);
            if (height_int <= 0) {
                std::cout << "You have not a valid height, please input a"
                    " positive number!" << std::endl;
                std::cout << "" << std::endl;
            } else {
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "That is not an integer, please input a number!"
            << std::endl;
            std::cout << "" << std::endl;
        }
    }
    std::cout << "" << std::endl;

    // Call Functions
    volume = cylinder_volume(radius_int, height_int, volume);

    // Output
    std::cout << "The volume of the cylinder is "
    << std::fixed << std::setprecision(2) << std::setfill('0')
    << volume  << "cm^3!" << std::endl;
}
