#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 1.0f); // Set the color to magenta
    glPointSize(10.0f);          // Set the point size
    glBegin(GL_LINES);
    glVertex2f(-0.5f, 0.0f);
    glVertex2f(0.5f, 0.0f);
    glEnd();
    glFlush();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Red Point");
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set the background color to black
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);     // Set the coordinate system
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}