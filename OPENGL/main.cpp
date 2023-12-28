#include <windows.h>
#include <glut.h>
#include <math.h>

const double pi = 22.0 / 7.0;

GLfloat wolfPositionX = 1.0;  // Initial position of the wolf's face
GLboolean animationEnabled = GL_FALSE;  // Flag to control animation


void nose() {
    // point
    glPointSize(7);
    glColor3f(0, 0, 0);
    glEnable(GL_POINT_SMOOTH);
    glBegin(GL_POINTS);
    glVertex2f(50, 55);
    glEnd();
    glFlush();

    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(45, 54);
    glVertex2f(55,54);
    glVertex2f(54,50);
    glVertex2f(54,48);
    glVertex2f(46,48);
    glVertex2f(46,50);
    glEnd();
    glFlush();

    // right side
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(54, 50);
    glVertex2f(55, 54);
    glVertex2f(57, 52);
    glEnd();
    glFlush();

    glBegin(GL_LINE_LOOP);
    glVertex2f(54, 50);
    glVertex2f(57, 52);
    glVertex2f(56, 50);
    glVertex2f(54, 48);
    glEnd();
    glFlush();

    // left side
    glBegin(GL_LINE_LOOP);
    glVertex2f(43, 52);
    glVertex2f(45, 54);
    glVertex2f(46, 50);
    glEnd();
    glFlush();

    glBegin(GL_LINE_LOOP);
    glVertex2f(43, 52);
    glVertex2f(46, 50);
    glVertex2f(46, 48);
    glVertex2f(44, 50);
    glEnd();
    glFlush();

    // Surround
    glBegin(GL_LINE_STRIP);
    glVertex2f(55, 60);
    glVertex2f(63, 55);
    glVertex2f(63, 47);
    glVertex2f(58, 42);
    glVertex2f(55, 40);
    glVertex2f(45, 40);
    glVertex2f(42, 42);
    glVertex2f(37, 47);
    glVertex2f(37, 55);
    glVertex2f(44, 60);
    glEnd();
    glFlush();

    // bta3a 3la his nose
    glBegin(GL_LINE_STRIP);
    glVertex2f(58, 42);
    glVertex2f(56, 50);
    glVertex2f(54, 50);
    glVertex2f(46, 50);
    glVertex2f(44, 50);
    glVertex2f(42, 42);
    glEnd();
    glFlush();
}

void rightCheek() {
    // p1
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(90, 92);
    glVertex2f(90, 87);
    glVertex2f(81, 76);
    glVertex2f(89, 67);
    glVertex2f(63, 67);
    glEnd();
    glFlush();

    //p2
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(63, 67);
    glVertex2f(89, 67);
    glVertex2f(90, 55);
    glVertex2f(63, 55);
    glVertex2f(55.3, 60);
    glEnd();
    glFlush();

    // p3
    glBegin(GL_POLYGON);
    glVertex2f(63, 55);
    glVertex2f(90, 55);
    glVertex2f(74, 35);
    glVertex2f(63, 47);
    glEnd();
    glFlush();

    // p4
    glBegin(GL_LINE_LOOP);
    glVertex2f(63, 47);
    glVertex2f(74, 35);
    glVertex2f(65, 27);
    glEnd();
    glFlush();

    // p5
    glBegin(GL_POLYGON);
    glVertex2f(63, 47);
    glVertex2f(65, 27);
    glVertex2f(58, 42);
    glEnd();
    glFlush();

    // p6
    glBegin(GL_LINE_LOOP);
    glVertex2f(58, 42);
    glVertex2f(65, 27);
    glVertex2f(58, 10);
    glEnd();
    glFlush();
    
}

void leftCheek() {
    // p1
    glBegin(GL_POLYGON);
    glVertex2f(10, 92);
    glVertex2f(10, 87);
    glVertex2f(19, 76);
    glVertex2f(9, 67);
    glVertex2f(37, 67);
    glEnd();
    glFlush();

    // p2
    glBegin(GL_LINE_LOOP);
    glVertex2f(37, 67);
    glVertex2f(9, 67);
    glVertex2f(8, 55);
    glVertex2f(37, 55);
    glVertex2f(44, 60);
    glEnd();
    glFlush();

    //p3
    glBegin(GL_POLYGON);
    glVertex2f(37, 55);
    glVertex2f(8, 55);
    glVertex2f(24, 35);
    glVertex2f(37, 47);
    glEnd();
    glFlush();

    //p4
    glBegin(GL_LINE_LOOP);
    glVertex2f(37, 47);
    glVertex2f(24, 35);
    glVertex2f(33, 27);
    glEnd();
    glFlush();

    //p5
    glBegin(GL_POLYGON);
    glVertex2f(37, 47);
    glVertex2f(33, 27);
    glVertex2f(42, 42);
    glEnd();
    glFlush();
    
    //p6
    glBegin(GL_LINE_LOOP);
    glVertex2f(42, 42);
    glVertex2f(33, 27);
    glVertex2f(40, 10);
    glEnd();
    glFlush();
}

void chin() {
    glColor3f(0, 0, 0);
    // right

    glBegin(GL_LINE_LOOP);
    glVertex2f(57, 13);
    glVertex2f(58, 10);
    glVertex2f(52, 6);
    glVertex2f(52, 9);
    glEnd();
    glFlush();

    // middle
    glBegin(GL_LINE_LOOP);
    glVertex2f(52, 9);
    glVertex2f(52, 6);
    glVertex2f(46, 6);
    glVertex2f(46, 9);
    glEnd();
    glFlush();

    // left
    glBegin(GL_LINE_LOOP);
    glVertex2f(46, 9);
    glVertex2f(46, 6);
    glVertex2f(40, 10);
    glVertex2f(40, 13);
    glEnd();
    glFlush();
}

void forehead() {
    // the left side of forehead
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(50, 55);
    glVertex2f(90, 92);
    glVertex2f(65, 92);
    glEnd();
    glFlush();

    // left center of forehead 
    glBegin(GL_POLYGON);
    glVertex2f(50, 55);
    glVertex2f(65, 92);
    glVertex2f(60, 95);
    glVertex2f(50, 95);
    glEnd();
    glFlush();

    // right center of forehead 
    glBegin(GL_POLYGON);
    glVertex2f(50, 55);
    glVertex2f(50, 95);
    glVertex2f(40, 95);
    glVertex2f(35, 92);
    glEnd();
    glFlush();

    // the right side of forehead
    glBegin(GL_LINE_LOOP);
    glVertex2f(50, 55);
    glVertex2f(35, 92);
    glVertex2f(10, 92);
    glEnd();
    glFlush();

}

void eyes() {
    glColor3f(0, 0, 0);

    // right
    // sm
    glBegin(GL_POLYGON);
    glVertex2f(63, 67);
    glVertex2f(66, 67);
    glVertex2f(65, 64);
    glVertex2f(60, 64);
    glEnd();
    glFlush();
    //lg
    glBegin(GL_LINE_STRIP);
    glVertex2f(66, 67);
    glVertex2f(69, 67);
    glVertex2f(65, 60);
    glVertex2f(55.3, 60);
    glEnd();
    glFlush();

    // left
    //sm
    glBegin(GL_POLYGON);
    glVertex2f(37, 67);
    glVertex2f(34, 67);
    glVertex2f(35, 64);
    glVertex2f(40, 64);
    glEnd();
    glFlush();
    //lg
    glBegin(GL_LINE_STRIP);
    glVertex2f(34, 67);
    glVertex2f(31, 67);
    glVertex2f(35, 60);
    glVertex2f(44, 60);
    glEnd();
    glFlush();
}

void gums() {
    glColor3f(0, 0, 0);
    // drawing upper gums
    glBegin(GL_LINE_LOOP);
    glVertex2f(45, 40);
    glVertex2f(55, 40);
    glVertex2f(54, 39);
    glVertex2f(46, 39);
    glEnd();
    glFlush();

    // drawing lower gums
    glBegin(GL_LINE_LOOP);
    glVertex2f(40, 13);
    glVertex2f(46, 9);
    glVertex2f(52, 9);
    glVertex2f(57, 13);
    glVertex2f(52, 12);
    glVertex2f(46, 12);
    glEnd();
    glFlush();
}

void fangs() {
    glColor3f(0, 0, 0);
    // left upper fang
    glBegin(GL_LINE_LOOP);
    glVertex2f(42, 42);
    glVertex2f(45, 40);
    glVertex2f(46, 39);
    glVertex2f(44, 32);
    glEnd();
    glFlush();

    // right upper fang
    glBegin(GL_LINE_LOOP);
    glVertex2f(58, 42);
    glVertex2f(55, 40);
    glVertex2f(54, 39);
    glVertex2f(56, 32);
    glEnd();
    glFlush();

    // left lower fang
    glBegin(GL_LINE_LOOP);
    glVertex2f(40, 13);
    glVertex2f(44, 18);
    glVertex2f(46, 12);
    glEnd();
    glFlush();

    // right lower fang
    glBegin(GL_LINE_LOOP);
    glVertex2f(52, 12);
    glVertex2f(54, 18);
    glVertex2f(57, 13);
    glEnd();
    glFlush();
}

void teeth() {
    glColor3f(0, 0, 0);

    // drawing lower teeth
    int lowerX = 46;
    while (lowerX < 52) {
        glBegin(GL_LINE_LOOP);

        for (int i = 0; i < 3; i++) {
            if (i == 1)
                glVertex2f(lowerX + i, 14);
            else
            glVertex2f(lowerX + i, 12);
        }
        lowerX += 2;
        glEnd();
        glFlush();
    }

    // drawing upper teeth
    int upperX = 46;
    while (upperX < 54) {
        glBegin(GL_LINE_LOOP);

        for (int i = 0; i < 3; i++) {
            if (i == 1)
                glVertex2f(upperX + i, 37);
            else
                glVertex2f(upperX + i, 39);
        }
        upperX += 2;
        glEnd();
        glFlush();
    }
}

//void wolf() {
//    glClearColor(1, 1, 1, 0); // background color
//    glClear(GL_COLOR_BUFFER_BIT); // clear any 
//    
//    forehead();
//    nose();
//    rightCheek();
//    leftCheek();
//    chin();
//    eyes();
//    gums();
//    fangs();
//    teeth();
//}
//
//int main(int argc , char **argV) {
//    glutInit(&argc, argV);
//
//    glutInitWindowPosition(100, 50); // init window position
//    glutInitWindowSize(500, 500); // init window size
//    glutCreateWindow("WOLF"); // then create window with its name
//    gluOrtho2D(0, 100, 0, 100); // where drawing starts
//
//    glutDisplayFunc(wolf);
//
//    glutMainLoop(); // keep window on the screen
//    return 0;
//}

void wolf() {
    glClearColor(1, 1, 1, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Translate the wolf's face horizontally based on the current position
    glPushMatrix();
    glTranslatef(wolfPositionX, 0.0, 0.0);
    // Draw the wolf's face at the translated position
    // (you may need to adjust the drawing functions accordingly)
    nose();
    rightCheek();
    leftCheek();
    chin();
    eyes();
    gums();
    fangs();
    teeth();
    glPopMatrix();

    glutSwapBuffers();

    // Update the wolf's position for the next frame if animation is enabled
    if (animationEnabled) {
        wolfPositionX += 1.0;  // Adjust the speed as needed
    }
}

// Timer callback function
void timerFunc(int value) {
    glutPostRedisplay();  // Trigger a redraw
    glutTimerFunc(190, timerFunc, 0);  // Set a slower time interval (50 milliseconds)
}

// Keyboard callback function
// Toggling the animation
void keyboardFunc(unsigned char key, int x, int y) {
    if (key == 'V' || key == 'v') {
        animationEnabled = !animationEnabled;
        if (animationEnabled) {
            wolfPositionX = 5.0;
        }
    }
}

int main(int argc, char** argV) {
    glutInit(&argc, argV);

    glutInitWindowPosition(100, 50);
    glutInitWindowSize(500, 500);
    glutCreateWindow("WOLF");
    gluOrtho2D(0, 100, 0, 100);

    // Set up the timer function to control the animation
    glutTimerFunc(0, timerFunc, 0);

    // Register the keyboard callback function
    glutKeyboardFunc(keyboardFunc);

    glutDisplayFunc(wolf);

    glutMainLoop();
    return 0;
}