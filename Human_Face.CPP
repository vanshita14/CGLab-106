#include <conio.h> 
#include <dos.h> 
#include <graphics.h> 
#include <stdio.h> 
int main() 
{ 
    int gr = DETECT, gm; 
    initgraph(&gr, &gm, "C:\\Turboc3\\BGI"); 
    setcolor(YELLOW); 
    circle(300, 100, 40); 
    setfillstyle(SOLID_FILL, YELLOW); 
    floodfill(300, 100, YELLOW); 
  
    
    setcolor(BLACK); 
    setfillstyle(SOLID_FILL, BLACK); 
  
    // Use fill ellipse for creating eyes 
    fillellipse(310, 85, 2, 6); 
    fillellipse(290, 85, 2, 6); 
  
    // Use ellipse for creating mouth 
    ellipse(300, 100, 205, 335, 20, 9); 
    ellipse(300, 100, 205, 335, 20, 10); 
    ellipse(300, 100, 205, 335, 20, 11); 
  
    getch(); 
    closegraph(); 
    return 0; 
} 
