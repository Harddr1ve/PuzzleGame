//
// Created by harddrive on 10/18/21.
//

#include "Field.h"

Field::Field(int sizeX, int sizeY, int black_box_count) : size_x(sizeX), size_y(sizeY) {
    this->size_x = sizeX;
    this->size_y = sizeY;
    this->black_box_count = black_box_count;
}

Field::~Field() {
    std::cout << "field has been destructed";
}

