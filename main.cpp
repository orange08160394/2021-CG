#include "glm.h"
#include <stdio.h>
float angle=30;
GLMmodel* pmodel = NULL;
GLMmodel* pmodel1 = NULL;
GLMmodel* pmodel2 = NULL;
GLMmodel* pmodel3= NULL;
GLMmodel* pmodel4= NULL;
GLMmodel* pmodel5= NULL;
void
drawmodel(void)
{
    if (!pmodel) {
	pmodel = glmReadOBJ("data/head.obj");
	if (!pmodel) exit(0);
	glmUnitize(pmodel);
	glmFacetNormals(pmodel);
	glmVertexNormals(pmodel, 90.0);
    }

    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);
}

void
drawmodel1(void)
{
    if (!pmodel1) {
	pmodel1 = glmReadOBJ("data/hand.obj");
	if (!pmodel1) exit(0);
	glmUnitize(pmodel1);
	glmFacetNormals(pmodel1);
	glmVertexNormals(pmodel1, 90.0);
    }
    glmDraw(pmodel1, GLM_SMOOTH | GLM_MATERIAL);
}
void
drawmodel2(void)
{
    if (!pmodel2) {
	pmodel2 = glmReadOBJ("data/hand.obj");
	if (!pmodel2) exit(0);
	glmUnitize(pmodel2);
	glmFacetNormals(pmodel2);
	glmVertexNormals(pmodel2, 90.0);
    }
    glmDraw(pmodel2, GLM_SMOOTH | GLM_MATERIAL);
}
void
drawmodel3(void)
{
    if (!pmodel3) {
	pmodel3 = glmReadOBJ("data/body.obj");
	if (!pmodel3) exit(0);
	glmUnitize(pmodel3);
	glmFacetNormals(pmodel3);
	glmVertexNormals(pmodel3, 90.0);
    }
    glmDraw(pmodel3, GLM_SMOOTH | GLM_MATERIAL);
}
void
drawmodel4(void)
{
    if (!pmodel4) {
	pmodel4 = glmReadOBJ("data/hand.obj");
	if (!pmodel4) exit(0);
	glmUnitize(pmodel4);
	glmFacetNormals(pmodel4);
	glmVertexNormals(pmodel4, 90.0);
    }
    glmDraw(pmodel4, GLM_SMOOTH | GLM_MATERIAL);
}
void
drawmodel5(void)
{
    if (!pmodel5) {
	pmodel5 = glmReadOBJ("data/hand.obj");
	if (!pmodel5) exit(0);
	glmUnitize(pmodel5);
	glmFacetNormals(pmodel5);
	glmVertexNormals(pmodel5, 90.0);
    }
    glmDraw(pmodel5, GLM_SMOOTH | GLM_MATERIAL);
}
void hand(){
    glPushMatrix();
    glTranslatef(-0.2,0,0);
    glScalef(0.2,0.2,0.2);
    glRotated(-30,0,0,1);
    glTranslated(-0.2,-0.1,0);
    drawmodel1();
    glPopMatrix();
}
void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(0,0.5,0);
    glScalef(0.3,0.3,0.3);
    glRotatef(180,0,1,0);
    drawmodel();
    glPopMatrix();//head

     glPushMatrix();
    glTranslatef(0,-0.1,0);
    glScalef(0.3,0.3,0.3);
    glRotatef(180,0,1,0);
    glTranslated(0,0,0);
    drawmodel3();//body
    glPopMatrix();

    glPushMatrix();//¥k¤â
        glTranslated(-0.2,0,0);
        glRotated(-angle,0,0,1);
        glTranslated(+0.1,0,0);
        hand();
            glPushMatrix();
            glTranslated(-0.25,-0.3,0);
            glRotated(0,0,0,1);
            glTranslated(+0.1,0,0);
            hand();
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();//¥ª¤â
        glTranslated(0.2,0,0);
        glRotated(-angle,0,0,1);
        glTranslated(-0.1,0,0);
        hand();
            glPushMatrix();
            glTranslated(+0.25,-0.3,0);
            glRotated(0,0,0,1);
            glTranslated(-0.1,0,0);
            hand();
        glPopMatrix();
    glPopMatrix();


   /* glPushMatrix();
    glTranslatef(-0.2,0,0);
    glScalef(0.2,0.2,0.2);
    glRotated(-30,0,0,1);
    glTranslated(-0.2,-0.1,0);
    drawmodel1();//h1
    glPopMatrix();
            glPushMatrix();
            glTranslated(-0.2,-0.1,0);
            glScalef(0.2,0.2,0.2);
            glRotated(-angle,0,0,1);
            drawmodel4();//h4
        glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2,0,0);
    glScalef(0.2,0.2,0.2);
    glRotatef(-30,0,1,0);
    glTranslated(-0.2,-0.1,0);
    drawmodel2();//h2
    glPopMatrix();
         glPushMatrix();
         glTranslated(-0.2,-0.1,0);
        glScalef(0.2,0.2,0.2);
        glRotated(-angle,0,0,1);
        drawmodel5();//h5
        glPopMatrix();

*/
    glPushMatrix();
    glTranslatef(0.1,-0.5,0);
    glScalef(0.2,0.2,0.2);
    glRotatef(180,0,1,0);
    drawmodel4();//leg2
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.1,-0.5,0);
    glScalef(0.2,0.2,0.2);
    glRotatef(180,0,1,0);
    drawmodel5();//leg1
    glPopMatrix();
    glutSwapBuffers();
    angle+=15;
}
    const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
    const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
    const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    const GLfloat light_position[] = { 2.0f, 5.0f, -5.0f, 0.0f };
    const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
    const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
    const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
    const GLfloat high_shininess[] = { 100.0f };


int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE| GLUT_DEPTH);

    glutCreateWindow("08160394");

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    glutDisplayFunc(display);
    glutMainLoop();

}
