

#include <windows.h>
#include <iostream>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
#include <cstdlib>
//draw display
void display(){

    glClearColor(1,1,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
                                    //Translation
                                // (x,y,z)
                                // glTranslatef(0.9,0.8f,0.7f);
                                // glTranslatef(0.9, -0.8f, 0.7f);
    //glTranslatef(-0.9, -0.8f, 0.7f);
                                //glTranslatef(0.9, 0.8f, -0.7f);
                                //end

                                //Rotasi
                                // (angel,x,y,z);
    //glRotatef(90,0.0f,0.0f,0.1f);
                                //glRotatef(70,0.0f,0.0f,0.1f);
                                //end
                                //Scalling
                                //(x,y,z)
                                //(1.0,1.0,1.0) << Normal

    glScalef(0.5f,0.5f,0.5f);
                                //glScalef(2.0f,2.0f,2.0f);
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0);
    glVertex2f(-0.9,-0.2);
    glVertex2f(0.6,-0.2);
    glVertex2f(0.6,0.8);
    glVertex2f(-0.9,0.8);
    glEnd();
    glFlush();


}


int main (int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(640,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Pratikum 2");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;


}
