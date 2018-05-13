#include <stdio.h>

int bolenlerToplami(int sayi);
void arkadasKontrol(int limit);

int main(){
	arkadasKontrol(1000000);
	return 0;
}

int bolenlerToplami(int sayi){
	int top=0;
	for(int i=1; i<sayi; i++){
		if(sayi%i==0)
			top += i;
	}
	return top;
}

void arkadasKontrol(int limit){
	for(int i=1; i<limit; i++){
		int x = bolenlerToplami(i);
		/*for(int j=1; j<limit; j++){
			if(x == j && bolenlerToplami(j) == i)
				printf("%d-%d Bu sayilar arkadas sayilardir\n", i, j);
		}*/
		if (bolenlerToplami(x)==i)
			if(i>x)	
				printf("%d-%d 	Bu sayilar arkadas sayilardir\n", i, x);
	}
}
