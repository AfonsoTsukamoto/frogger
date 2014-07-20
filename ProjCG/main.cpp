//
//  main.cpp
//  ProjCG
//
//  Created by Afonso Tsukamoto on 7/19/14.
//  Copyright (c) 2014 Afonso Tsukamoto. All rights reserved.
//
//#define DEBUG

//#if defined(__APPLE__) || defined(MACOSX)
#include <iostream>
#include <GLUT/glut.h>

//#else
//#include <GL/glut.h>
//#endif
void display(){
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-1.0f, 1.0f, 0.0f);
    glEnd(); 
    glFlush();
}

void reshape(GLsizei w, GLsizei h){
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.0f, 2.0f, -2.0f, 2.0f, -2.0f, 2.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char * argv[])
{

    
	/*Initialization*/
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize (600, 600);
	glutInitWindowPosition (-1, -1);
	glutCreateWindow("DO THE ALLIEN SHAKE");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
	glutMainLoop();
    

    return 0;
}

