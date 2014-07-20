//
//  Position.cpp
//  ProjCG
//
//  Created by Afonso Tsukamoto on 7/19/14.
//  Copyright (c) 2014 Afonso Tsukamoto. All rights reserved.
//

#include "Coord.h"


bool Coord::isInt(){ return _isInt; }

void Coord::print(){
    isInt() ?
        (std::cout << _x << ':' << _y << ':' << _z << std::endl) :
        (std::cout << _xf << ':' << _yf << ':' << _zf << std::endl);
}

int Coord::x(){ return _x; }

int Coord::y(){ return _y; }

int Coord::z(){ return _z; }

void Coord::x(int x){ _isInt = true; _x = x; }

void Coord::y(int y){ _isInt = true; _y = y; }

void Coord::z(int z){ _isInt = true; _z = z; }

float Coord::xf(){ return _xf; }

float Coord::yf(){ return _yf; }

float Coord::zf(){ return _zf; }

void Coord::xf(float x){ _isInt = false; _xf = x; }

void Coord::yf(float y){ _isInt = false; _yf = y; }

void Coord::zf(float z){ _isInt = false; _zf = z; }

void Coord::incrX(int val){ _isInt ? (_x += val) : _xf +=(float)val; }

void Coord::incrY(int val){ _isInt ? (_y += val) : _yf +=(float)val; }

void Coord::incrZ(int val){ _isInt ? (_z += val) : _zf +=(float)val; }

void Coord::decrX(int val){ _isInt ? (_x -= val) : _xf -=(float)val; }

void Coord::decrY(int val){ _isInt ? (_y -= val) : _yf -=(float)val; }

void Coord::decrZ(int val){ _isInt ? (_z -= val) : _zf -=(float)val; }

void Coord::incrX(float val){ _xf += val; }

void Coord::incrY(float val){ _yf += val; }

void Coord::incrZ(float val){ _zf += val; }

void Coord::decrX(float val){ _xf -= val; }

void Coord::decrY(float val){ _yf -= val; }

void Coord::decrZ(float val){ _zf -= val; }

void Coord::sum(Coord &coord){
    if(coord.isInt() && isInt()){
        _x += coord.x();
        _y += coord.y();
        _z += coord.z();
        return;
    }
    if(!coord.isInt() && !isInt()){
        _xf += coord.xf();
        _yf += coord.yf();
        _zf += coord.zf();
        return;
    }
    throw "Different types for coords sum";
}

void Coord::sub(Coord &coord){
    if(coord.isInt() && isInt()){
        _x -= coord.x();
        _y -= coord.y();
        _z -= coord.z();
        return;
    }
    if(!coord.isInt() && isInt()){
        _xf -= coord.xf();
        _yf -= coord.yf();
        _zf -= coord.zf();
        return;
    }
    throw "Different types for coords sub";
}

void Coord::multBy(int val){
    if(isInt()){
        _x *= val;
        _y *= val;
        _z *= val;
    }else{
        _xf *= val;
        _yf *= val;
        _zf *= val;
    }
}

void Coord::multBy(float val){
    if(isInt()){
        _x *= val;
        _y *= val;
        _z *= val;
    }else{
        _xf *= val;
        _yf *= val;
        _zf *= val;
    }
}
