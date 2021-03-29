#include <GL/glut.h>
#include <stdio.h>
float angle=0;
void hand(){
    glPushMatrix();
        glScaled(0.5,0.1,0.1);
        glutSolidCube(1);
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();//左手
        glTranslated(-0.25,0,0);//固定hand位置
        glRotated(angle,0,0,1);//旋轉
        glColor3f(0.2,0.3,1.0);
        glTranslated(-0.25,0,0);//將璇轉軸固定
        hand();
            glPushMatrix();
            glTranslated(-0.25,0,0);//固定hand位置
            glRotated(angle,0,0,1);//旋轉
            glColor3f(0.2,0.3,1.0);
            glTranslated(-0.25,0,0);//將璇轉軸固定
            hand();
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();//右手
        glTranslated(+0.25,0,0);//固定hand位置
        glRotated(-angle,0,0,1);//旋轉
        glColor3f(0.2,0.3,1.0);
        glTranslated(+0.25,0,0);//將璇轉軸固定
        hand();
            glPushMatrix();
            glTranslated(+0.25,0,0);//固定hand位置
            glRotated(-angle,0,0,1);//旋轉
            glColor3f(0.2,0.3,1.0);
            glTranslated(+0.25,0,0);//將璇轉軸固定
            hand();
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
    angle++;
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160394");
    glutDisplayFunc(display);
    glutIdleFunc(display);//一直重複顯示
    glutMainLoop();
}
