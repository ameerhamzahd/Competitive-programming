#include <GL/glut.h>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // float x1 = 50, y1 = 50, x2 = 300, y2 = 200;
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    float dx = x2 - x1;
    float dy = y2 - y1;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xInc = dx / steps;
    float yInc = dy / steps;

    float x = x1, y = y1;

    glBegin(GL_POINTS);
    for (int i = 0; i <= steps; i++)
    {
        glVertex2i(round(x), round(y));
        x += xInc;
        y += yInc;
    }
    glEnd();

    glFlush();
}

void init()
{
    glClearColor(0, 0, 0, 1);
    gluOrtho2D(0, 500, 0, 500);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("DDA LINE");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
}