#include <GL/glut.h>

void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0f,0.0f,0.0f);
glPointSize(20.0f);

glBegin(GL_POINTS);
glVertex2f(-0.5f,-0.5f);
glEnd();
glFlush();

}

int main(int argc , char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(400, 400);
    glutCreateWindow("Red Point");
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}