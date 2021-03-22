#include <GL/glut.h>
#include <stdlib.h>
float X[2000],Y[2000];
int P;//¦³P­Ó³»ÂI
static void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<P;i++){
        glVertex2f(X[i],Y[i]);
    }
    glEnd();
    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{

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
    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();
}
