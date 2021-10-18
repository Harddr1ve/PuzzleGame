//
// Created by harddrive on 10/18/21.
//

#ifndef PUZZLEGAME_FIELD_H
#define PUZZLEGAME_FIELD_H

#include <iostream>

class Field {

public:
    Field(int sizeX, int sizeY, int black_box_count);
    ~Field();


private:
    int black_box_count;

protected:
    int size_x;
    int size_y;

};


#endif //PUZZLEGAME_FIELD_H
