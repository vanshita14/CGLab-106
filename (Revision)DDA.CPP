#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   float x1,x2,y1,y2,dx,dy,Xinc,Yinc,steps;
   cout<<"enter values of x1 and y1"<<endl;
   cin>>x1>>y1;
   cout<<"enter values of x2 and y2"<<endl;
   cin>>x2>>y2;
   dx=abs(x2-x1);
   dy=abs(y2-y1);
   if(dx>dy)
      steps=dx;
   else
      steps=dy;
   Xinc=dx/steps;
   Yinc=dy/steps;
   for(int i=0;i<steps;i++)
    {
       putpixel(x1,y1,RED);
       x1=x1+Xinc;
       y1=y1+Yinc;
       delay(100);
    }
}
