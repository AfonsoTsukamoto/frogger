//
//  Size.cpp
//  ProjCG
//
//  Created by Afonso Tsukamoto on 7/20/14.
//  Copyright (c) 2014 Afonso Tsukamoto. All rights reserved.
//

#include "Size.h"

void makeSize(float width, float height){
    Size *size = (Size*)malloc(sizeof(Size));
    if(size != NULL){
        size->width = width;
        size->height = height;
    }
    return size;
}

void print_size(Size *size){
    std::cout << size->width << ':' << size->height << ':' << size->depth;
}