#include <GL/glut.h>
#include <math.h>


void drawCircle(float centerX, float centerY, float radius) {
    glBegin(GL_LINE_LOOP); 
    
    for (int i = 0; i <= 360; i++) {
        float angle = i * 3.14159 / 180.0; 
        
        float x = centerX + radius * cos(angle);
        float y = centerY + radius * sin(angle);
        
        glVertex2f(x, y);
    }
    
    glEnd();
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT); 
    
    glColor3f(1.0, 0.0, 0.0);  
    glLineWidth(2.0); 
    
    
    drawCircle(0.0, 0.0, 0.5);
    
    glutSwapBuffers(); 
}


void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);  
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);  
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Circle Drawing with OpenGL");
    
    init();
    glutDisplayFunc(display);
    
    glutMainLoop();  \
    
    return 0;
}