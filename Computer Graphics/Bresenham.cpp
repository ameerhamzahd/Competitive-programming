#include<GL/glut.h>
#include<bits/stdc++.h>
using namespace std;

void plot(int xc, int yc, int x, int y) {
    glVertex2i(xc+x, yc+y);
    glVertex2i(xc-x, yc+y);
    glVertex2i(xc+x, yc-y);
    glVertex2i(xc-x, yc-y);
    glVertex2i(xc+y, yc+x);
    glVertex2i(xc-y, yc+x);
    glVertex2i(xc+y, yc-x);
    glVertex2i(xc-y, yc-x);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // int xc = 250, yc = 250, r = 100;
    int xc, yc, r;
    cin >> xc >> yc >> r;
    int x = 0, y = r;
    int d = 3 - 2 * r;

    glBegin(GL_POINTS);

    while(x <= y) {
        plot(xc, yc, x, y);
        if(d < 0) {
            d += 4 * x + 6;
        } else {
            d += 4 * (x - y) + 10;
            y--;
        }
        x++;
    }
    glEnd();
    glFlush();
}

void init() {
    glClearColor(0, 0, 0, 1);
    gluOrtho2D(0, 500, 0, 500);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Bresenham Circle");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
}
