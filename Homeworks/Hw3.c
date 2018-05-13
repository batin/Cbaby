#include <stdio.h>
#include <math.h>
void giris(int no[], int notu[], int N);
float ortalama(int notu[], int N);
void goruntule(int no[], int notu[],int N);
float otele(int n,float o);
void NotbubbleSort(int dizi[],int no[],int n);
void NobubbleSort(int dizi[],int no[],int n);
float StandartSapma(int dizi[],int n,int ort);
int yildizbosluk(int n,int a);
int harf(int d[],int n);
void yhisto(int N);
void dhisto(int dizi[]);
int HARF[10];
int a1,a2,b1,b2,c1,c2,d1,d2,e,f,max=0;

struct og{
int No[BUFSIZ], BNotu[BUFSIZ];	
}ogr; 


int main()
{ 

int N,b,c=0,i,a,t,v,yatay[10];
int YNotu[BUFSIZ],CNotu[BUFSIZ];
float ort,ort2;
printf("Ogrenci sayisini giriniz: ");
scanf("%d", &N);
giris(ogr.No, ogr.BNotu, N);
goruntule(ogr.No, ogr.BNotu, N);
printf("------------------------------------------\n");
printf("------------------------------------------\n");
ort = ortalama(ogr.BNotu, N);
printf("Not ortalamasi: %5.2f\n", ort);
printf("------------------------------------------\n");
printf("------------------------------------------\n");
for (i=0; i<N; i++){
if(ogr.BNotu[i]>=20) {
CNotu[c]=ogr.BNotu[i];
c++;
}}
ort2 = ortalama(CNotu,c);
for(b=0;b<N;b++){
	if(ort2<50){
		if(ogr.BNotu[b]>=30){
	t=otele(ogr.BNotu[b],ort2);
	YNotu[b]=t;
	}else
	YNotu[b]=ogr.BNotu[b];
	}else
	YNotu[b]=ogr.BNotu[b];
}
for(b=0;b<N;b++)
	ogr.BNotu[b]=YNotu[b];

goruntule(ogr.No, ogr.BNotu, N);
printf("------------------------------------------\n");
printf("------------------------------------------\n");
printf("Notu 20dan buyuk olanlarin not ortalamasi: %f\n", ort2);
printf("------------------------------------------\n");
printf("------------------------------------------\n");
printf("Basari notuna gore siralama : \n");
NotbubbleSort(ogr.BNotu,ogr.No,N);
goruntule(ogr.No,ogr.BNotu,N);
printf("------------------------------------------\n");
printf("------------------------------------------\n");
printf("Ogrenci noya gore siralama : \n");
NobubbleSort(ogr.No,ogr.BNotu,N);
goruntule(ogr.No,ogr.BNotu,N);
printf("------------------------------------------\n");
printf("------------------------------------------\n");
ort = ortalama(ogr.BNotu, N);
printf("Ogrencileri aldigi puanlarin standart sapmasi: %f\n",StandartSapma(ogr.BNotu,N,ort));
printf("------------------------------------------\n");
printf("------------------------------------------\n");
harf(ogr.BNotu,N);
for(b=0;b<N;b++)
	HARF[b]=yatay[b];
yhisto(max);
printf("\n");
printf("------------------------------------------\n");
printf("------------------------------------------\n");
dhisto(yatay);
}


/*bilgi giriþi*/
void giris(int no[], int notu[], int N)
{
int i,b;
for (i=0; i<N; i++)
{ printf("Ogrenci no gir: ");
scanf("%d", &no[i]);
for (b=0; b<i; b++)
if(no[i]==no[b]){
printf("Ogrenci nosu ayni olamaz yeni bir ogrenci no gir:");
scanf("%d", &no[i]);	
}
if(no[i]<0){
printf("Ogrenci nosu 0'dan kucuk olamaz yeni bir ogrenci no gir:");
scanf("%d", &no[i]);	
}
printf("%d numarali ogrencinin basari notunu gir : ", no[i]);
scanf("%d", &notu[i]);
if(notu[i]<0){
printf("Ogrenci notu 0'dan kucuk olamaz yeni bir ogrenci no gir:");
scanf("%d", &notu[i]);	
}}}


void goruntule(int no[], int notu[], int N)
{
printf("Ogrenci#\tNotu\n");
for (int i=0; i<N; i++)
printf("%8d\t%3d\n", no[i], notu[i]);
}

/*öteleme*/
float otele(int n,float o){
	return n+(50-o);
	
}

/*ortalama*/
float ortalama(int notu[], int N)
{ float t;
int i;
t = 0;
for (i=0; i<N; i++)
t = t + notu[i];
float ort = t / N;
return ort;
}

/*sýrlama kýsýmý*/
void NotbubbleSort(int dizi[],int no[],int n)
{
  int c,d,t,b;
  for (c=0;c<(n-1);c++)
  {
    for (d=0;d<n-c-1;d++)
    {
      if (dizi[d] > dizi[d+1] )
      { 
	    
        t=dizi[d];
        dizi[d]=dizi[d+1];
        dizi[d+1]=t;
        
		b=no[d];
        no[d]=no[d+1];
        no[d+1]=b;
        
      }
    }
  }
}
void NobubbleSort(int dizi[],int no[],int n)
{
  int c,d,t,b;
  for (c=0;c<(n-1);c++)
  {
    for (d=0;d<n-c-1;d++)
    {
      if (dizi[d]>dizi[d+1])
      { 
	    
        t=dizi[d];
        dizi[d]=dizi[d+1];
        dizi[d+1]=t;
        
		b=no[d];
        no[d]=no[d+1];
        no[d+1]=b;
        
      }
    }
  }
}

float StandartSapma(int dizi[],int n,int ort)
{
	float toplam=0;
	for(int i=0;i<n;i++){
	toplam+=(dizi[i]-ort)*(dizi[i]-ort);
}
	return sqrt(toplam/n);	
}

/*sayýlarý harflere çeviren kýsým*/
int harf(int d[],int n)
{
 for(int i=0;i<n;i++)
{ 
if(d[i]<=39)
f++;
if(d[i]<=49 && d[i]>=40)
e++;
if(d[i]<=54 && d[i]>=50)
d2++;
if(d[i]<=59 && d[i]>=55)
d1;
if(d[i]<=64 && d[i]>=60)
c2++;
if(d[i]<=69 && d[i]>=65)
c1++;
if(d[i]<=74 && d[i]>=70)
b2++;
if(d[i]<=75 && d[i]>=79)
b1++;
if(d[i]<=89 && d[i]>=80)
a2++;
if(d[i]>=90)
a1++;
}
int HARF[10]={a1,a2,b1,b2,c1,c2,d1,d2,e,f};
	for(int j=0;j<10;j++)
		if(max<HARF[j])
		max=HARF[j];


}

/*histogram kýsýmý*/
void yhisto(int N){	
	printf("A1| ");
	yildizbosluk(a1,N);
	printf("A2| ");
	yildizbosluk(a2,N);
	printf("B1| ");
	yildizbosluk(b1,N);
	printf("B2| ");
	yildizbosluk(b2,N);
	printf("C1| ");
	yildizbosluk(c1,N);
	printf("C2| ");
	yildizbosluk(c2,N);
	printf("D1| ");
	yildizbosluk(d1,N);
	printf("D2| ");
	yildizbosluk(d2,N);
	printf("E | ");
	yildizbosluk(e,N);
	printf("F | ");
	yildizbosluk(f,N);
	for(int f=0;f<N;f++)
	printf("------");
	printf("\n");
	printf("  |");
	for(int f=0;f<N;f++)
	printf(" %d",f+1);	
}

int yildizbosluk(int n,int a){
	int c=a-n;
	for(int i=0;i<n;i++)
	printf("* ");
	for(int q=0;q<c;q++)
	printf(" ");
	printf("\n");

}
void dhisto(int dizi[])
	{
  
do	{
		printf(" %2d|",max);
		for(int i=0;i<10;i++)
		{
			if(dizi[i]>=max)  {
				printf(" * |");
			}
			else
			{
				printf("   |");
			}	
		}
		printf("\n");
		max--;
		if(max==0) 
		{
			break;
		}
	}
	while(1);
	printf("---+---+---+---+---+---+---+---+---+---+---+\n");
	printf("   | A1| A2| B1| B2| C1| C2| D1| D2|  E|  F|\n\n");
}
	


