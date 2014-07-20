//
//  GameController.h
//  ProjCG
//
//  Created by Afonso Tsukamoto on 7/19/14.
//  Copyright (c) 2014 Afonso Tsukamoto. All rights reserved.
//

#ifndef __ProjCG__GameController__
#define __ProjCG__GameController__

//#if defined(__APPLE__) || defined(MACOSX)
#include <GLUT/glut.h>
//#else
//#include <GL/glut.h>
//#endif

#include <cstdlib>
#include <vector>
#include <iostream>

#define BIGGER(A,B) ((A>B)?(A):(B))
#define SMALLER(A,B) ((A<B)?(A):(B))

class GameController{
    GLsizei _width;
    GLsizei _height;
    
};


#endif /* defined(__ProjCG__GameController__) */
