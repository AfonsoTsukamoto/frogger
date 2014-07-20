//
//  Position.h
//  ProjCG
//
//  Created by Afonso Tsukamoto on 7/19/14.
//  Copyright (c) 2014 Afonso Tsukamoto. All rights reserved.
//

#ifndef __ProjCG__Coord__
#define __ProjCG__Coord__

#include <iostream>

class Coord{
    int _x, _y, _z;
    float _xf, _yf, _zf;
    bool _isInt;

public:
    Coord(): _x(0), _y(0), _z(0), _xf(0.0), _yf(0.0), _zf(0.0){}
    Coord(int x, int y, int z = 0): _isInt(true), _x(x), _y(y), _z(z){}
    Coord(float x, float y, float z = 0): _isInt(false), _xf(x), _yf(y), _zf(z){}
    ~Coord(){}
    
    bool isInt();
    void print();
    
    int x();
    int y();
    int z();
    
    void x(int x);
    void y(int y);
    void z(int z);
    
    float xf();
    float yf();
    float zf();
    
    void xf(float x);
    void yf(float y);
    void zf(float z);
    
    void incrX(int val);
    void incrY(int val);
    void incrZ(int val);
    
    void decrX(int val);
    void decrY(int val);
    void decrZ(int val);

    void incrX(float val);
    void incrY(float val);
    void incrZ(float val);
    
    void decrX(float val);
    void decrY(float val);
    void decrZ(float val);
    
    void sum(Coord &coord);
    void sub(Coord &coord);
    void multBy(int val);
    void multBy(float val);
};

#endif /* defined(__ProjCG__Position__) */
