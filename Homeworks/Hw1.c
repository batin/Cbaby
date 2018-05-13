//14253506
//Þeref Batýn Eryýlmaz

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int Jsayi,i,k,hzn,hzn1,hzn2,hzn3,hzn4,hzn5,hzn6,hzn7,hzn8,hzn9,hzn10,satir,t,sol;
		printf("Kac adet jeton atmak istersiniz? ");
		scanf("%d",&Jsayi);
		hzn1=hzn2=hzn3=hzn4=hzn5=hzn6=hzn7=hzn8=hzn9=hzn10=0;
		srand(time(NULL));
		

	for(k=0;k<=Jsayi-1;k++){
		printf("%2d . jetonu atmak icin bir tusa basiniz ==> ",k+1);

	  sol=0;
	
	for(i=0;i<10;i++)
	{
//1 ise sola 0 ise saða düþer
		if(rand()%2==1)
		sol++;
	}
//	getch();
if(sol==9){
	hzn1++;
	printf("1. hazneye dustu. \n");
//	getch();
}
else if(sol==8)
{
	hzn2++;
	printf("2. hazneye dustu. \n");
//	getch();
}
else if(sol==7)
{
	hzn3++;
	printf("3. hazneye dustu. \n");
//	getch();
}
else if(sol==6)
{
	hzn4++;
	printf("4. hazneye dustu. \n");
//	getch();
}
else if(sol==5)
{
	hzn5++;
	printf("5. hazneye dustu. \n");
//	getch();
}
else if(sol==4)
{
	hzn6++;
	printf("6. hazneye dustu. \n");
//	getch();
}
else if(sol==3)
{
	hzn7++;
	printf("7. hazneye dustu. \n");
//	getch();
}
else if(sol==2)
{
	hzn8++;
	printf("8. hazneye dustu. \n");
//	getch();
}
else if(sol==1)
{
	hzn9++;
	printf("9. hazneye dustu. \n");
//	getch();
}
else if(sol==0)
{
	hzn10++;
	printf("10. hazneye dustu. \n");
//	getch();
}		
}
	printf(" \n 1.haznedeki jeton sayisi: %d \n",hzn1);
	printf(" 2.haznedeki jeton sayisi: %d \n",hzn2);
	printf(" 3.haznedeki jeton sayisi: %d \n",hzn3);
	printf(" 4.haznedeki jeton sayisi: %d \n",hzn4);
	printf(" 5.haznedeki jeton sayisi: %d \n",hzn5);
	printf(" 6.haznedeki jeton sayisi: %d \n",hzn6);
	printf(" 7.haznedeki jeton sayisi: %d \n",hzn7);
	printf(" 8.haznedeki jeton sayisi: %d \n",hzn8);
	printf(" 9.haznedeki jeton sayisi: %d \n",hzn9);
	printf("10.haznedeki jeton sayisi: %d \n",hzn10);
	printf("Jetonlarin histogram seklinde dagilimlari\n");

	t=Jsayi;
for(satir=Jsayi;satir>=1;satir--){
	printf("\n");
	printf("%2d|",satir);
			
		t--;					
		if(t<=hzn1 && t>0)
			printf(" o ");
			else
			printf("   ");
		printf("|");
		if(t<=hzn2 && t>0)
			printf(" o ");
			else
			printf("   ");
		printf("|");
		if(t<=hzn3 && t>0)
			printf(" o ");
			else
			printf("   ");
		printf("|");
		if(t<=hzn4 && t>0)
			printf(" o ");
			else
			printf("   ");
		printf("|");
		if(t<=hzn5 && t>0)
			printf(" o ");
			else
			printf("   ");
		printf("|");
		if(t<=hzn6 && t>0)
			printf(" o ");
			else
			printf("   ");
		printf("|");
		if(t<=hzn7 && t>0)
			printf(" o ");
			else
			printf("   ");
		printf("|");
		if(t<=hzn8 && t>0)
			printf(" o ");
			else
			printf("   ");
		printf("|");
		if(t<=hzn9 && t>0)
			printf(" o ");
			else
			printf("   ");
		printf("|");
		if(t<=hzn10 && t>0)
			printf(" o ");
			else
			printf("   ");
		printf("|");
		
		
		}	
printf("\n");		
printf("---------------------------------------------");	
printf("\n  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|  \n");
	

printf("-------------------------------------------------\n");
printf("SEREF BATIN ERYILMAZ TARAFINDAN HAZIRLANMISTIR");
	
	
	
}


