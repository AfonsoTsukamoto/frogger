//
//  Size.h
//  ProjCG
//
//  Created by Afonso Tsukamoto on 7/20/14.
//  Copyright (c) 2014 Afonso Tsukamoto. All rights reserved.
//

#ifndef __ProjCG__Size__
#define __ProjCG__Size__

#include <iostream>

typedef struct size{
    float width;
    float height;
    float depth;
}Size;

void makeSize(float width, float height);
void print_size(Size *size);
#endif /* defined(__ProjCG__Size__) */
