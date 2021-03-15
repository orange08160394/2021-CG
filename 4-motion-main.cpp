#include <GL/glut.h>
#include <stdio.h>
float teapotX=0,teapotY=0;
static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();//矩陣備份
        glTranslatef(teapotX,teapotY,0);//照座標移動
        glutSolidTeapot(0.3);
    glPopMatrix();//陣列還原
    glEnd();
    glutSwapBuffers();
}
void motion(int x,int y)
{
    teapotX=(x-150)/150.0;
    teapotY=-(y-150)/150.0;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160394 teapot");
    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();
}
