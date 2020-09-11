#include<graphics.h> 
#include<conio.h>
#include<stdio.h>
int main() 
{ 
    int gd = DETECT, gm, errorcode; 
    initgraph (&gd, &gm, "c:\\turboc3\\bgi"); 
    int A,B,C,D,x,y;
    printf("Enter the coordinate points of rectangle\n");
    scanf("%d%d%d%d",&A,&B,&C,&D);
    setcolor(2);
    rectangle(A,B,C,D);
    printf("Enter the translation points\n");
    scanf("%d%d",&x,&y);
    A=A+x;
    B=B+y;
    C=C+x;
    D=D+y;
    rectangle(A,B,C,D);
    getch();
    return 0; 
}  
