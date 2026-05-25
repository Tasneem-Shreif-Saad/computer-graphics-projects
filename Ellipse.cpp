#include <GL/glut.h>
#include <math.h>

void drawEllipse() {
    int xc = 0, yc = 0; // مركز القطع الناقص
    int rx = 100;       // نصف المحور الرئيسي (الأفقي)
    int ry = 50;        // نصف المحور الثانوي (الرأسي)
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 0.0, 0.0); // لون أحمر
    
    // بنلف من 0 لـ 360 درجة
    for (float theta = 0; theta <= 360; theta += 1) {
        // تحويل الزاوية من درجات لـ radians
        float rad = theta * 3.14159 / 180.0;
        
        // المعادلات القطبية من الشريحة
        float x = xc + rx * cos(rad);
        float y = yc + ry * sin(rad);
        
        glVertex2f(x, y);
    }
    
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(3.0);
    
    // نظام الإحداثيات
    gluOrtho2D(-150, 150, -150, 150);
    
    drawEllipse();
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Ellipse Drawing");
    
    glClearColor(1.0, 1.0, 1.0, 1.0);
    
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}