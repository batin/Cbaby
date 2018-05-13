/*
14253506
ÞEREF BATIN ERYILMAZ */


#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(){
srand(time(NULL));
int a,b,c,d,e,max,min,ort;
int x;
printf("Oyuna baslamak icin bi tusa basiniz:");
getch();
while(x ='e' || x =='E'){
	a=1+rand()%99;
	b=1+rand()%99;
	c=1+rand()%99;
	printf("\n1. Pul= %d\n",a);
	printf("2. Pul= %d\n",b);
	printf("3. Pul= %d\n",c);
	d=a+b+c;
		if(a>b){
			max=a;
		}else{
			max=b;	
		}if(c>max)
			max=c;	
			if(a<b){
			min=a;
		}else{
			min=b;	
		}if(c<min)
			min=c;	
		if(min==a && max==b || min==b && max==a)
			ort=c;
		if(min==b && max==c || min==c && max==b)
			ort=a;
		if(min==c && max==a || min==a && max==c)
			ort=b;
			if(d<150){
				printf("Tebrikler, kazandiniz.(1.kural)\n");
			}	
			else if(d%2==0 && d%3==0){
			
				printf("Tebrikler, kazandiniz.(2.kural)\n");
				
					}
		
			else if(max-min>ort){
				printf("Tebrikler, kazandiniz.(3.kural)\n");
			}
			else{
				printf("Malesef kaybettiniz...!\n");

				}
	
printf("Devam etmek icin[e/E]");
x =_getche();
	if(x == 'e' || x=='E')
		continue;
	else
		break;
	}
	getch();
}
