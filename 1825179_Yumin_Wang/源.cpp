// File ID: Ass1.cpp
// Title: Working with Graphics Primitives




#define FREEGLUT_STATIC
#include <GL/freeglut.h>
#include "windows.h"
#include<math.h>
#define MAX_CHAR 128
void define_to_OpenGL();

GLdouble x_p = 0; // parameter to define camera position in x-direction
GLdouble z_p = 6;

typedef struct { GLfloat x, y; } point; // define a 2D point
point p0 = { 0,50 }; // set initial co-ordinate values of the point
GLfloat finishx = 300;
///////////////////////////////////


void DrawTree() {
	//draw tree
		int n = 3600;  //Circle drawing times
		float PI = 3.1415926f;
		float R = 40.0f;
		glColor3f(0.13, 0.54, 0.13);
		glBegin(GL_POLYGON);
		for (int i = 100; i < n; i++)
		{
			glVertex2f(R * cos(2 * PI * i / n)+450, R * sin(2 * PI * i / n)+50);   //Define the vertices
								
		}
		glEnd();
		 
								
		glBegin(GL_POLYGON);
		glColor3f(0.55, 0.278, 0.15);
		glVertex2f(440, -50);
		glVertex2f(440, -300);
		glVertex2f(460, -300);
		glVertex2f(460, -50);
		glEnd();
								
		float R0= 40.0f;
		glColor3f(0.13, 0.54, 0.13);
		glBegin(GL_POLYGON);
		for (int i = 100; i < n; i++)
		{
			glVertex2f(1.8 * R0 * cos(2 * PI * i / n)+450,1.2* R0 * sin(2 * PI * i / n));   //Define the vertices
		}
		glEnd();
		 
									
		glBegin(GL_POLYGON);
		float R1 =45.0f;
		glColor3f(0.13, 0.54, 0.13);
		for (int i = 100; i < n; i++)
		{
			glVertex2f(2 * R1* cos(2 * PI * i / n) + 450, 1.2*R1 * sin(2 * PI * i / n)  -50);    
		}
		glEnd();
		 
								
		int i;
		float x, y;
		glColor3f(0.54,0.35,0.168);
		glPointSize(5);
		glBegin(GL_POINTS);
		for (i = 0; i < 150; i = i + 1)
		{
			x = (float)i + 380;
			y = 10* cos(i * (6.284 / 90))-25 ;
			glVertex2f(x, y);
								
		}
		for (i = 0; i < 80; i = i + 1)
		{
			x = (float)i + 415;
			y = 10 * sin(i * (6.284 / 90))+40 ;
			glVertex2f(x, y);
								
		}
		glEnd();

	}

		void DrawKid() {
		int n = 3600;  //Circle drawing times
		float PI = 3.1415926f;
		float R = 50.0f;
		glColor3f(1, 0.8, 0.6);
		glBegin(GL_POLYGON);
		for (int i = 100; i < n; i++)
		{
			glVertex2f(R * cos(2 * PI * i / n) -120, R * sin(2 * PI * i / n)+200);    
		}

		glEnd();
		 
		int i;
		float x, y;
		glColor3f(0.0, 0.0, 0);
		glPointSize(1);
		glBegin(GL_POINTS);
		for (i = 0; i < 33; i = i + 1)
		{
			x = (float)i - 135;
			y = 20 * cos(i * (6.284 / 90.0) + 90) + 190;
			glVertex2f(x, y);
		}
		glEnd();
		glPointSize(5);
		glColor3f(0, 0, 0);
		glBegin(GL_POINTS);
		glVertex2f(-130, 210);
		glVertex2f(-100, 210);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.6, 0.8, 0.8);
		glVertex2f(-160, 150);
		glVertex2f(-180, 30);
		glVertex2f(-50, 30);
		glVertex2f(-70, 150);
		glEnd();

		glLineWidth(1.0);
		glColor3f(0, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(-130, 30);
		glVertex2f(-120, -30);
		glEnd();
		glBegin(GL_LINES);
		glVertex2f(-90, 30);
		glVertex2f(-80, -30);
		glEnd();
		glBegin(GL_LINES);
		glVertex2f(-170, 90);
		glVertex2f(-100, 80);
		glEnd();
		glBegin(GL_LINES);
		glVertex2f(-60, 95);
		glVertex2f(10, 90);
		glEnd();

		}


void DrawCandles() {
	//draw candle
		glColor3f(1, 1, 0);
		glBegin(GL_TRIANGLES);
		glVertex2f(145, 240);
		glVertex2f(150, 230);
		glVertex2f(140, 230);
		glVertex2f(115, 240);
		glVertex2f(110, 230);
		glVertex2f(120, 230);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.4, 0.2);
		glVertex2f(140, 170);
		glVertex2f(140, 220);
		glVertex2f(150, 220);
		glVertex2f(150, 170);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.4, 0.2);
		glVertex2f(120, 170);
		glVertex2f(120, 220);
		glVertex2f(110, 220);
		glVertex2f(110, 170);
		glEnd();

		int n = 3600;
		float PI = 3.1415926f;
		float R = 6.0f;
		glColor3f(1, 0.8, 0);
		glBegin(GL_POLYGON);
		for (int i = 100; i < n; i++)
		{
		glVertex2f(R * cos(2 * PI * i / n)+145, R * sin(2 * PI * i / n) + 225); 
		}

		glEnd();
		 

		glBegin(GL_POLYGON);
		glColor3f(1, 0.8, 0);
		float R2 = 6.0f;
		for (int i = 100; i < n; i++)
		{
		glVertex2f(R2 * cos(2 * PI * i / n) +115, R2 * sin(2 * PI * i / n) + 225);    
		}
		glEnd();
		 
 }
					

void DrawCakeup() {
		glBegin(GL_POLYGON);
		glColor3f(1, 0.55, 0.43);
		glVertex2f(80, 125);
		glVertex2f(80, 175);
		glVertex2f(180, 175);
		glVertex2f(180, 125);
		glEnd();

									
		int n = 3600;  //Circle drawing times
		float PI = 3.1415926f;
									
		glBegin(GL_POLYGON);
		glColor3f(1, 0.55, 0.43);
		float R2 = 25.0f;
		for (int i =100; i < n; i++)
		{
		glVertex2f(2*R2 * cos(2* PI * i / n) +130, R2 * sin(2*PI * i / n) +130);    
		}
		glEnd();
		 
		glBegin(GL_POLYGON);
		glColor3f(1, 0.89, 0.76);
		float R1 = 25.0f;
		for (int i = 100; i < n; i++)
		{
		glVertex2f(2 * R1 * cos(2 * PI * i / n) +130, R1 * sin(2 * PI * i / n)+170 );
		 
		}
		glEnd();
		 
}


void DrawCakedown() {
										
		glBegin(GL_POLYGON);
		glColor3f(1, 0.55, 0.437);
		glVertex2f(40, 130);
		glVertex2f(40, 0);
		glVertex2f(220, 0);
		glVertex2f(220, 130);
		glEnd();
		int n = 3600;  //Circle drawing times
		float PI = 3.1415926f;
		float R = 45.0f;
		glColor3f(1, 0.55, 0.43);
		glBegin(GL_POLYGON);
		for (int i = 100; i < n; i++)
		{
		glVertex2f(2 * R * cos(2 * PI * i / n) +130, R * sin(2 * PI * i / n) +5);    
		}
		glEnd();
		 
		glBegin(GL_POLYGON);
		glColor3f(1, 0.89, 0.76);
		float R2 = 45.0f;
		for (int i = 100; i < n; i++)
		{
		glVertex2f(2 * R2 * cos(2 * PI * i / n) +130, R2 * sin(2 * PI * i / n) +125);    
		}
		glEnd();
		 
}

void DrawSinwave(int i, float j){
		int a;
		float x, y;
		glBegin(GL_LINE_STRIP);
		for (a = 0; a < i; a = a + 5)
		{
		x = ((float)a / j);
		y = 6* sin(a * (6.284 / 360.0));
		glVertex2f(x, y);
		}
		glEnd();
}

void DrawRope(int size){
		int i;
		float x, y;
		glPointSize(1);
		glBegin(GL_POINTS);
		for (i = size; i < 361; i = i++)
		{
		x = (float)i;
		y = 100.0 * sin(i * (6.284 / 360.0));
		glVertex2f(x, y);
		}
		glEnd();
}


								
void DrawEllipse(float a, float b) {
		int n = 3600;  //Circle drawing times
		float PI = 3.1415926f;
		glBegin(GL_POLYGON);
		for (int i = 100; i < n; i++)
		{
		glVertex2f(a * cos(2 * PI * i / n), b * sin(2 * PI * i / n));    
		}
		glEnd();
}

void DrawCircle(float R) {
		int n = 3600;  //Circle drawing times
		float PI = 3.1415926f;

										

		glBegin(GL_POLYGON);
		for (int i = 0; i < n; i++)
		{
		glVertex2f(R * cos(2 * PI * i / n), R * sin(2 * PI * i / n));    
		}
		glEnd();

}
void DrawHalfCircle(float R){
		int n = 3600;
		float PI = 3.1415926f;
		glBegin(GL_POLYGON);
		for (int i = 0; i < n; i++)
		{
		glVertex2f(R * cos(1.5*PI * i / n), R * sin(1.5*PI * i / n));
		}
		glEnd();
		 
	}



void DrawBallon()
{

		DrawEllipse(20, 30);
		glColor3f(0.4, 0.4, 0.4);
		glPushMatrix();
		glRotatef(90, 0, 0, 1);
		glScalef(0.2, 0.05, 0);
		glTranslatef(-500, 50, 0);
		DrawRope(0);

		glPopMatrix();
	
		}
void DrawBallons1(){

		glColor3f(1, 0.7, 0.28);
		glPushMatrix();
		glScalef(1.2, 1.2, 0);
		glTranslatef(0, 310, 0);
		DrawBallon();
		glPopMatrix();
		glColor3f(1, 0.6, 0.6);
		glPushMatrix();
		glTranslatef(100, 450, 0);
		DrawBallon();
		glPopMatrix();
}
void DrawBallons2(){
		glColor3f(0.38, 0.9, 0.40);
		glPushMatrix();
		glScalef(2, 2, 0);
		glTranslatef(p0.x, p0.y-20 ,0);
		DrawBallon();
		glPopMatrix();
		glColor3f(0.42, 0.77, 0.9);
		glPushMatrix();
		glScalef(1.4, 1.4, 0);
		glTranslatef(p0.x -50, p0.y-10 , 0);
		DrawBallon();
		glPopMatrix();
	
	}
			GLfloat step = 1; // declare step
			int time_interval = 16; // declare refresh interval in ms

void when_in_DrawBallon() { // idle callback function
     glutPostRedisplay(); // force OpenGL to redraw the current window
}
void OnTimer(int value) {
		p0.x += step;
		if (p0.x >= 600)
		p0.x = 0;
		else if (p0.x <= 0)
		p0.x = 599;
		// when_in_mainloop();
		glutTimerFunc(time_interval, OnTimer, 1);
}
void keyboard_input(unsigned char key, int x, int y) {// keyboard interaction
		if (key == 'q' || key == 'Q') //quit
		exit(0);
		else if (key == 'a' || key == 'A')// stop
		step = 0;
		else if(key=='s' || key=='S') //move right
		step=5;
		else if (key == 'd' || key == 'D') //move left
		step = -5;
	
}
void mouse_input(int button, int state, int x, int y) { // mouse interaction
		if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && step >= -20)
		step -= 1; // decrement step
		else if (state == GLUT_DOWN && button == GLUT_RIGHT_BUTTON && step <= 20)
		step += 1; // increment step
}


void DrawFlower()
{
		glColor3f(0.8, 0.6, 0.95);
		DrawCircle(18);
		glColor3f(1, 1, 0);

		for (int i = 0; i < 361; i = i + 40) {
		glPushMatrix();
		glRotatef(i, 0, 0, 1);
		glTranslatef(27, 0, 0);

		DrawHalfCircle(12);
		glPopMatrix();
		}

		glLineWidth(1.0);
		glColor3f(0.6,0.8,0.2 );
		glBegin(GL_LINES);
		glVertex2f(0, -30); 
		glVertex2f(0, -150);
		glEnd();

	
		glColor3f(0.63, 0.8, 0.36);
		glPushMatrix();
		glRotatef(45, 0, 0, 1);
		glScalef(0.7, 0.5, 0);
		glTranslatef(-55, -50, 0);
		DrawEllipse(10, 20); 
		glPopMatrix();
		glColor3f(0.63, 0.8, 0.36);
		glPushMatrix();
		glRotatef(-45, 0, 0, 1);
		glScalef(0.7, 0.5, 0);
		glTranslatef(75, -75, 0);
		DrawEllipse(10, 20);
		glPopMatrix();
	

	}


		void drawString(const char* str) { // Use font bit maps to draw strings
		static int isFirstCall = 1;
		static GLuint lists;
		if (isFirstCall) {
		isFirstCall = 0;
		lists = glGenLists(MAX_CHAR);
		wglUseFontBitmaps(wglGetCurrentDC(), 0, MAX_CHAR, lists);
		}
		for (; *str != '\0'; ++str) {
		glCallList(lists + *str);
        }
    }
void selectFont(int size, int charset, const char* face) {
		HFONT
		hFont = CreateFontA(size, 0, 0, 0, FW_MEDIUM, 0, 0, 0, charset, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS
		, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, face);
		HFONT hOldFont = (HFONT)SelectObject(wglGetCurrentDC(), hFont);
		DeleteObject(hOldFont);
}

void define_to_OpenGL(){
	//Initialize
		glClearColor(0.88, 0.98, 0.96, 0.76);
		glClear(GL_COLOR_BUFFER_BIT);

		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(-300,600,-200,500);

	    //text
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1, 0.75, 0.67);
		glFrustum(0.2, 0.5, 0.5, 0.8, 0.9, 10.0);
		gluLookAt(x_p, 0, z_p, 0, 0, 0, 0,1 , 0);
		selectFont(50, ANSI_CHARSET, "Comic Sans MS");
		glRasterPos2f(250, 200);
		drawString("Happy birthday");
		 



		DrawBallons1();
		glPopMatrix();
		glPushMatrix();
		glScalef(0.7, 0.7, 0);
		glTranslatef(550, 600, 0);
		DrawBallons2();
		glPopMatrix();
		for (int i = -50; i < 250; i = i + 50) {
		glPushMatrix();
		glTranslated(2.0*i-100, -80, 0);
		glScalef(1, 1, 0);
		DrawFlower();
		glPopMatrix();
		}



		DrawCakedown();
		DrawCakeup();
		DrawCandles();
		DrawTree();
		DrawKid();

		//draw cream
		for (int a = 0; a < 10; a++) {
		glPushMatrix();
		glTranslatef(81, a +118, 0);
		glColor3f(1.0, 0.75, 0.79);
		DrawSinwave(882, 9);
		glPopMatrix();
		}
		glColor3f(0.5, 0.7, 0.4);
		for (int a = 0; a < 10; a++) {
		glPushMatrix();
		glTranslatef(81, a + 133, 0);
		glColor3f(1.0, 0.84, 0.54);
		DrawSinwave(882, 9);
		glPopMatrix();
		}
		for (int a = 0; a < 10; a++) {
		glPushMatrix();
		glTranslatef(40, a + 10, 0);
		glColor3f(1.0, 0.75, 0.79);
		DrawSinwave(1300, 7.2);
		glPopMatrix();
		}
		for (int a = 0; a < 10; a++) {
		glPushMatrix();
		glTranslatef(40, a + 45, 0);
		glColor3f(1.0, 0.84, 0.54);
		DrawSinwave(1300, 7.2);
		glPopMatrix();
		}

		 
 		glutSwapBuffers();
   }

int main(int argc, char** argv)
{
		glutInit(&argc, argv);
		glutInitWindowSize(700, 600);
		glutInitWindowPosition(50, 50);
		glutCreateWindow("Birthday Card");
		glutDisplayFunc(define_to_OpenGL);
		glutIdleFunc(when_in_DrawBallon);
		glutTimerFunc(time_interval, OnTimer, 1);

		glutKeyboardFunc(keyboard_input);
		glutMouseFunc(mouse_input);
		glutMainLoop();
		}