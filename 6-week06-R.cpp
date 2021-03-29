#include <GL/glut.h>
#include <stdlib.h>
float X[2000],Y[2000];
int P;
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotated(angle,0,0,1);
        glScaled(0.5,0.1,0.1);
        glColor3f(0.3,0.3,1.0);
        glutSolidCube(1);
    glPopMatrix();
    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{
    angle++;
    display();
}
void keyboard(unsigned char key ,int x,int y){
    angle++;
    display();
}
void motion(int x,int y)
{
    X[P]=(x-150)/150.0;
    Y[P]=-(y-150)/150.0;
    P++;
    display();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160394 week05");
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();
}
