#include <GL/glut.h>
#include <math.h>
void display(void)
{
glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
glClear (GL_COLOR_BUFFER_BIT);

glPushMatrix ();
glClearColor(1,1,1,0);
glColor3f(1,1,1); //
glBegin(GL_LINES);
glVertex2f(-0.95,0.25);
glVertex2f(0.25, -0.25);
glEnd ();
glFlush();
}

int main(int argc, char **argv)
{
glViewport(100,100,1,1);
glutInit(&argc, argv);
glutCreateWindow("GARIS");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}