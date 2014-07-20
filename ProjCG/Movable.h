//
//  Movable.h
//  ProjCG
//
//  Created by Afonso Tsukamoto on 7/20/14.
//  Copyright (c) 2014 Afonso Tsukamoto. All rights reserved.
//

#ifndef __ProjCG__Movable__
#define __ProjCG__Movable__

#include <iostream>
#include "Coord.h"
typedef enum _direction{
    MOVABLE_UP = 0,
    MOVABLE_DOWN = 1,
    MOVABLE_LEFT = 2,
    MOVABLE_RIGHT = 3,
    MOVABLE_NONE = -1
}MOVABLE_DIRECTION;

class Movable{
    float _velocity;
    Coord *_position;
    MOVABLE_DIRECTION _direction;
public:
    Movable(): _velocity(0.0), _position(NULL), _direction(MOVABLE_NONE){}
    Movable(float velocity, Coord *position, MOVABLE_DIRECTION direction): _velocity(velocity), _position(position), _direction(direction){}
};
#endif /* defined(__ProjCG__Movable__) */
