#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h> 
#include <math.h>
#include<dos.h>
using namespace std;



int main(){
	int x,y;
	
	int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "");
	rectangle(250,400,450,50);
	setfillstyle(1,5);
	floodfill(300, 350, 15);
		
	circle(140,200,10);
	circle(220,200,10);
	circle(180,200,10);
	setfillstyle(1, 2);
	floodfill(141, 201, 15);  
	floodfill(181, 201, 15);
	floodfill(221, 201, 15);
	circle(220,240,10);
	circle(180,240,10);
	circle(140,240,10);
	setfillstyle(1, 4);
	floodfill(141, 241, 15);   
	floodfill(181, 241, 15);   
	floodfill(221, 241, 15);
	rectangle(252,220,320,200);
	setfillstyle(1,1);
	floodfill(300, 350, 15);
	   
	delay(200);
	for(int i=0;i<130;i++){
		cleardevice();
		rectangle(250,400,450,50);
		setfillstyle(1,5);
		floodfill(300, 350, 15);
				
		circle(140,200,10);
		circle(220,200,10);
		circle(180,200,10);
		setfillstyle(1, 2);
		floodfill(141, 201, 15);  
		floodfill(181, 201, 15);
		floodfill(221, 201, 15);
		circle(267+i,236,10);
		circle(300+i,236,10);
		setfillstyle(1, 4);
		floodfill(268+i, 241, 15);
		floodfill(301+i, 241, 15);
		
		circle(140,240,10);
		setfillstyle(1, 4);
		floodfill(141, 241, 15);   
		
		rectangle(252+i,220,320+i,200);
		setfillstyle(1,1);
		floodfill(300, 350, 15);
		delay(20);
	   
		
	}
		cleardevice();
		rectangle(250,400,450,50);
		setfillstyle(1,5);
		floodfill(300, 350, 15);
				
		circle(140,200,10);
		circle(220,200,10);
		circle(180,200,10);
		setfillstyle(1, 2);
		floodfill(141, 201, 15);  
		floodfill(181, 201, 15);
		floodfill(221, 201, 15);
		circle(480,236,10);
		circle(430,236,10);
		setfillstyle(1, 4);
		floodfill(432, 241, 15);
		floodfill(481, 241, 15);
		
		circle(140,240,10);
		setfillstyle(1, 4);
		floodfill(141, 241, 15);   
		
		rectangle(381,220,450,200);
		setfillstyle(1,1);
		floodfill(300, 350, 15);
		delay(300);
		
		
		
		
		
	   
		for(int i=0;i<130;i++){
		cleardevice();
		rectangle(250,400,450,50);
		setfillstyle(1,5);
		floodfill(300, 350, 15);
				
		circle(140,200,10);
		circle(220,200,10);
		circle(180,200,10);
		setfillstyle(1, 2);
		floodfill(141, 201, 15);  
		floodfill(181, 201, 15);
		floodfill(221, 201, 15);
		circle(480,236,10);
		circle(430-i,236,10);
		setfillstyle(1, 4);
		floodfill(432-i, 241, 15);
		floodfill(481, 241, 15);
		
		circle(140,240,10);
		setfillstyle(1, 4);
		floodfill(141, 241, 15);   
		
		rectangle(380-i,220,450-i,200);
		setfillstyle(1,1);
		floodfill(300, 350, 15);
		delay(20);
	   
		
	}
		for(int i=0;i<130;i++){
		cleardevice();
		rectangle(250,400,450,50);
		setfillstyle(1,5);
		floodfill(300, 350, 15);
				
		circle(140,200,10);
		circle(220,200,10);
		circle(180,200,10);
		setfillstyle(1, 2);
		floodfill(141, 201, 15);  
		floodfill(181, 201, 15);
		floodfill(221, 201, 15);
		circle(480,236,10);
		circle(300+i,236,10);
		setfillstyle(1, 4);
		floodfill(300+i, 241, 15);
		floodfill(481, 241, 15);
		
		circle(268+i,240,10);
		setfillstyle(1, 4);
		floodfill(268+i, 241, 15);   
		
		rectangle(252+i,220,320+i,200);
		setfillstyle(1,1);
		floodfill(300, 350, 15);
		delay(20);
	   
		
	}
		cleardevice();
		rectangle(250,400,450,50);
		setfillstyle(1,5);
		floodfill(300, 350, 15);
				
		circle(140,200,10);
		circle(220,200,10);
		circle(180,200,10);
		setfillstyle(1, 2);
		floodfill(141, 201, 15);  
		floodfill(181, 201, 15);
		floodfill(221, 201, 15);
		circle(480,236,10);
		circle(430,236,10);
		setfillstyle(1, 4);
		floodfill(430, 241, 15);
		floodfill(481, 241, 15);
		
		circle(510,240,10);
		setfillstyle(1, 4);
		floodfill(511, 241, 15);   
		
		rectangle(380,220,450,200);
		setfillstyle(1,1);
		floodfill(300, 350, 15);
		delay(20);
	
	
	
	for(int i=0;i<130;i++){
		cleardevice();
		rectangle(250,400,450,50);
		setfillstyle(1,5);
		floodfill(300, 350, 15);
				
		circle(140,200,10);
		circle(220,200,10);
		circle(180,200,10);
		setfillstyle(1, 2);
		floodfill(141, 201, 15);  
		floodfill(181, 201, 15);
		floodfill(221, 201, 15);
		circle(480,236,10);
		circle(430-i,236,10);
		setfillstyle(1, 4);
		floodfill(432-i, 241, 15);
		floodfill(481, 241, 15);
		
		circle(510,240,10);
		setfillstyle(1, 4);
		floodfill(511, 241, 15);   
		
		rectangle(380-i,220,450-i,200);
		setfillstyle(1,1);
		floodfill(300, 350, 15);
		delay(20);
	   
		
	}
		for(int i=0;i<130;i++){
		cleardevice();
		rectangle(250,400,450,50);
		setfillstyle(1,5);
		floodfill(300, 350, 15);
				
		circle(140,200,10);
		
		setfillstyle(1, 2);
		floodfill(141, 201, 15);  
		
		
		circle(267+i,236,10);
		circle(300+i,236,10);
		setfillstyle(1, 2);
		floodfill(268+i, 241, 15);
		floodfill(301+i, 241, 15);
		circle(480,236,10);
		circle(220,236,10);
		setfillstyle(1, 4);
		floodfill(220, 241, 15);
		floodfill(481, 241, 15);
		
		circle(510,240,10);
		setfillstyle(1, 4);
		floodfill(511, 241, 15);  
		
		rectangle(252+i,220,320+i,200);
		setfillstyle(1,1);
		floodfill(300, 350, 15);
		delay(20);
	   
		
	}

	delay(1000);
	getch();
	closegraph();
	
	}
	
