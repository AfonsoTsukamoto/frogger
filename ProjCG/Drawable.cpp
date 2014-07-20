//
//  Drawable.cpp
//  ProjCG
//
//  Created by Afonso Tsukamoto on 7/20/14.
//  Copyright (c) 2014 Afonso Tsukamoto. All rights reserved.
//

#include "Drawable.h"


void Drawable::print(){
    std::cout << "Drawable with origin: ";
    _frame->origin()->print();
    std::cout << "and size: ";
    print_size(_frame->size());
}