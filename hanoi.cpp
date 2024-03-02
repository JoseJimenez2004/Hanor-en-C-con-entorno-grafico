#include <stdio.h>
#include <graphics.h>

void Hanoi(int, char,char,char);
void graficos();
void dibujarbase();
void pintardisco();
void ocultardisco();

int cont=0;

int main(){
	int n;
	char A='A',B='B',C='C';
	printf("Ingrese el numero de discos: \n");
	scanf("%d",&n);
	Hanoi(n,A,B,C);
	printf("\n%d\n",cont);
	graficos();
}

void Hanoi(int n, char origen,char auxilar,char destino){
	if(n==1){
		printf("%c ---> %c\n",origen,destino);
		cont++;
	}
	else{
	
		Hanoi(n-1,origen,destino,auxilar);
		printf("%c ---> %c\n",origen,destino);
		cont++;
		Hanoi(n-1,auxilar,origen,destino);
	}
}
void graficos(){
	int mov,dx1,dx2,dx3,dy1,dy2,dy3;
	initwindow(900,700);
	setbkcolor(0);
	setcolor(4);
	
	for(int i=0;i<=7;i++){
	
	mov=i*200;
	dibujarbase();

		switch(i){
		
		case 0:
			dx1=0,dy1=0; 
			dx2=0,dy2=0; 
			dx3=0,dy3=0; 
		break;
		
		case 1:
			dx1=2,dy1=2; 
			dx2=0,dy2=0; 
			dx3=0,dy3=0; 
		break;
		
		case 2:
			dx1=2,dy1=2; 
			dx2=1,dy2=1; 
			dx3=0,dy3=0; 
		break;
		
		case 3:	
			dx1=1,dy1=1; 
			dx2=1,dy2=1; 
			dx3=0,dy3=0; 
		break;
		
		case 4:	
			dx1=1,dy1=1; 
			dx2=1,dy2=1; 
			dx3=2,dy3=0; 	 
		break;
		
		case 5:	
			dx1=0,dy1=2; 
			dx2=1,dy2=1; 
			dx3=2,dy3=0; 	 
		break;
		
		case 6:	
			dx1=0,dy1=2; 
			dx2=2,dy2=0; 
			dx3=2,dy3=0; 	 
		break;
		
		case 7:	
			dx1=2,dy1=0; 
			dx2=2,dy2=0; 
			dx3=2,dy3=0; 	 
		break;	
		}
		
	settextstyle(0,0,2);
	outtextxy(350,200,"TORRES DE HANOI 3 DISCOS ");
	
			setcolor(LIGHTBLUE);
 			setfillstyle(SOLID_FILL,LIGHTBLUE);
			rectangle(170+(dx3*200),530+(dy3*20),310+(dx3*200),550+(dy3*20));
			floodfill(180+(dx3*200),540+(dy3*20),LIGHTBLUE);
	
			setcolor(GREEN);
			setfillstyle(SOLID_FILL,GREEN);
			rectangle(180+(dx2*200),510+(dy2*20),300+(dx2*200),530+(dy2*20));
			floodfill(190+(dx2*200),520+(dy2*20),GREEN);
	
			setcolor(YELLOW);
			setfillstyle(SOLID_FILL,YELLOW);
			rectangle(190+(dx1*200),490+(dy1*20),290+(dx1*200),510+(dy1*20));
			floodfill(200+(dx1*200),500+(dy1*20),YELLOW);
	
		delay(2000);
		cleardevice();
		
		}
		
		dibujarbase();
		
			dx1=2,dy1=0; 
			dx2=2,dy2=0; 
			dx3=2,dy3=0; 
			
			setcolor(LIGHTBLUE);
 			setfillstyle(SOLID_FILL,LIGHTBLUE);
			rectangle(170+(dx3*200),530+(dy3*20),310+(dx3*200),550+(dy3*20));
			floodfill(180+(dx3*200),540+(dy3*20),LIGHTBLUE);
	
			setcolor(GREEN);
			setfillstyle(SOLID_FILL,GREEN);
			rectangle(180+(dx2*200),510+(dy2*20),300+(dx2*200),530+(dy2*20));
			floodfill(190+(dx2*200),520+(dy2*20),GREEN);
	
			setcolor(YELLOW);
			setfillstyle(SOLID_FILL,YELLOW);
			rectangle(190+(dx1*200),490+(dy1*20),290+(dx1*200),510+(dy1*20));
			floodfill(200+(dx1*200),500+(dy1*20),YELLOW);
	system("pause");
}
void dibujarbase(){
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	rectangle(230,300,250,550);
	floodfill(240,310,RED);
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	rectangle(430,300,450,550);
	floodfill(440,310,RED);
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	rectangle(630,300,650,550);
	floodfill(640,310,RED);
	
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,WHITE);
	rectangle(150,550,750,570);
	floodfill(160,560,WHITE);
}
