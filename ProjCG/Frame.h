//
//  Frame.h
//  ProjCG
//
//  Created by Afonso Tsukamoto on 7/20/14.
//  Copyright (c) 2014 Afonso Tsukamoto. All rights reserved.
//

#ifndef __ProjCG__Frame__
#define __ProjCG__Frame__

#include <iostream>

#include "Coord.h"
#include "Size.h"

class Frame{
    Coord *_origin;
    Size *_size;
public:
    Frame(): _origin(NULL), _size(NULL){}
    Frame(Coord *origin): _origin(origin), _size(NULL){}
    Frame(Size *size): _origin(NULL), _size(size){}
    ~Frame(){}
    
    Coord *origin();
    Size *size();
    bool colidesWith(Frame *frame);
};

#endif /* defined(__ProjCG__Frame__) */
