// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Dahrio Francois
// Created on: May 2022
// This program uses a nested loop

#include <iostream>

int main() {
    // this function uses a nested loop
    int counter1;
    int counter2;
    int counter3;

    // process & output
    for (counter1 = 0; counter1 < 255; counter1++) {
        for (counter2 = 0; counter2 < 255; counter2++) {
            for (counter3 = 0; counter3 < 255; counter3++) {
            std::cout << "RGB Values: " << counter1 << " " << counter2 << " "
            << counter3 << std::endl;
        }
    }
}
}
