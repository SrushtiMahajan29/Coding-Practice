#include  <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;

   float x1, x2, y11, y2;             
   
   void myInit (void) 

{
   glClearColor(7.0, 3.0, 9.0, 0.0);
   glColor3f(1.0,0.0,1.0);
   glPointSize(4.0);
   glLineWidth(4.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(0.0, 640.0, 0.0, 480.0);
 
}
void myDisplay() 
{
 glClear(GL_COLOR_BUFFER_BIT);
 //float x1=100, x2=200, y11=250, y2=300;
 
  float dy, dx, len, x, y, Dx, Dy;
  int i;
  dx = x2 - x1;
  dy = y2 - y11;
  if (dx >= dy) 
  {
    len = dx;
  } 
  else
  {
    len = dy;
  }
  Dx = dx / len;
  Dy = dy / len;
  x = x1;
  y = y11;
 glVertex2i(x, y);
 i=1; 
  while(i<= len) {
    x = x + Dx;
    y = y + Dy;
  i++;
      
      /*  Dotted Line
    if (i%10==0)
    {
    glBegin(GL_POINTS);
    glVertex2i(x, y);

    }
    */
    /*
    Dash line
    if (i%10==0)
    {
    glBegin(GL_LINES);
    glVertex2i(x, y);

    }
    */
   /*   glBegin(GL_POINTS);
     if (i%20==0 && i%4!=0 || i%8!=0)*/
     glBegin(GL_POINTS);
    {
        glBegin(GL_LINES);
    glVertex2i(x, y);

    }
    
  }
    glEnd();
  glFlush();
}


int main(int argc, char ** argv) {
  
  cout<<"Value of x1 : ";
  cin>>x1;
  cout<<"Value of y1 : ";
 cin>>y11;
  cout<<"Value of x2 : ";
  cin>>x2;
  cout<<"Value of y2 : ";
 cin>>y2;
  glutInit( & argc,argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(8000, 1000);
  glutInitWindowPosition(100, 150);
  glutCreateWindow("Simple_DDA");
  myInit ();
  glutDisplayFunc(myDisplay);
  glutMainLoop(); 


  return 0;
}
