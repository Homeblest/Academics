/*This program to draw points, Lines and polygons*/
#include <GL/gl.h>
#include <GL/glut.h>
void myinit(void)
{
  glClearColor(0.8, 0.8, 0.8, 0.0); /* gray background */
 
  glMatrixMode(GL_PROJECTION);      /* In World coordinates: */
  glLoadIdentity();                 /* position the "clipping rectangle" */
  gluOrtho2D( -750, 750, -750, 750);/* at -B/2, its right edge at +B/2, its bottom */
  glMatrixMode(GL_MODELVIEW);       /* edge at -B/2 and its top edge at +B/2 */
}

void display( void )
{
  glClear(GL_COLOR_BUFFER_BIT);     /*clear the window */
  glMatrixMode(GL_MODELVIEW);       /* The following coordinates are expressed */
  glLoadIdentity();                 /* in terms of World coordinates */
  ********************************************************
	// ADD CODE HERE
  ********************************************************
  glFlush();                       /* send all commands */
}


void main(int argc, char** argv)
{
  glutInit(&argc,argv);                                   /*initialize the toolkit   */
  glutInitWindowSize( 500, 500 );                         /* Set window size */
  glutInitDisplayMode( GLUT_RGB | GLUT_SINGLE);           /* Set the display mode */
  glutInitWindowPosition( 500, 100 );  
  glutCreateWindow("My First Graphics Program in OpenGL");                          /* create window with title */
  
  glutDisplayFunc(display);                               /*tell OpenGL main loop what     */
  myinit();                                                         /* set attributes                 */

  glutMainLoop();                                            /* pass control to the main loop  */
}
