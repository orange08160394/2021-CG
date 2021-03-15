#include <GL/glut.h>
#include <stdio.h>
static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{
    if(state==GLUT_DOWN){printf("glVertext3f((%d-150)/150.0,(%d-150)/150.0,0);\n",x,y);}
        //printf("button:%d state:%d x:%d y:%d\n",button,state,x,y);
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160394 teapot");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
}
