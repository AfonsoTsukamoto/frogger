//
//  Drawable.h
//  ProjCG
//
//  Created by Afonso Tsukamoto on 7/20/14.
//  Copyright (c) 2014 Afonso Tsukamoto. All rights reserved.
//

#ifndef __ProjCG__Drawable__
#define __ProjCG__Drawable__

#include <iostream>

#include "Coord.h"
#include "Frame.h"
#include "Size.h"

class Drawable{
    Frame *_frame;
public:
    Drawable(){}
    Drawable(Frame *frame): _frame(frame){}
    
    void print();
    virtual void draw() = 0;
};

#endif /* defined(__ProjCG__Drawable__) */
