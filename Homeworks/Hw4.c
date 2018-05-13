#include<stdio.h>
#include<math.h>
#include<string.h>
float StandartSapma(float dizi[],float ort);
float bNot(float x,float y,float z);
int hrf(float d[]);

struct ogrTip  { 
unsigned long ogrNo;  
char ad[15];  
char soyad[15];  
unsigned vize;  
unsigned final;  
unsigned proje;  
unsigned short devam;  
float bNotu;  
char harf[2]; 
}ogr[BUFSIZ] ={0,"","",0,0,0,0,0,""};	
int a1,a2,b1,b2,c1,c2,d1,d2,e,f1,f2,N=0;
	
int main(){
	int i;
	float toplam=0;
	
	FILE *fp;

	fp=fopen("CENG101_IN.txt","r");
	if(fp==NULL)
	printf("Dosya bulunamadi");
	else
	while(!feof(fp)){
		fscanf(fp,"%u	%s	%s	%u	%u	%u	%d",&ogr[i].ogrNo,ogr[i].ad,ogr[i].soyad,&ogr[i].vize,&ogr[i].final,&ogr[i].proje,&ogr[i].devam);
		i++;	
	}
	N=i;
	float ssdizisi[N];
	fclose(fp);
	printf("OGRENCI#	AD	SOYAD		VIZE	FINAL	PROJE	B.NOTU	HARF\n");
	printf("============================================================================\n");
	for(i=0;i<N;i++){
	ogr[i].bNotu=bNot(ogr[i].vize,ogr[i].final,ogr[i].proje);
	toplam+=ogr[i].bNotu;
	ssdizisi[i]=ogr[i].bNotu;
	}
	hrf(ssdizisi);
	for(i=0;i<N;i++){
			printf("%u	%s	%s		%u	%u	%u	%3.0f	%s \n",ogr[i].ogrNo,ogr[i].ad,ogr[i].soyad,ogr[i].vize,ogr[i].final,ogr[i].proje,ogr[i].bNotu,ogr[i].harf);
		}
	float ort=toplam/N;
	printf("Ogrenci sayisi:%d\n",N);
	printf("Basari notlari ortalamasi: %.2f \n",(ort));
	printf("Basari notlari standart sapmasi: %.2f \n",StandartSapma(ssdizisi,ort));	
	printf("A1: %d \n",a1);
	printf("A2: %d \n",a2);
	printf("B1: %d \n",b1);
	printf("B2: %d \n",b2);
	printf("C1: %d \n",c1);
	printf("C2: %d \n",c2);
	printf("D1: %d \n",d1);
	printf("D2: %d \n",d2);
	printf("E : %d \n",e);
	printf("F1: %d \n",f1);
	printf("F2: %d \n",f2);
	FILE *dd;
	dd=fopen("CENG101_OUT.txt","w");
	fprintf(dd,"OGRENCI#	AD	SOYAD		VIZE	FINAL	PROJE	B.NOTU	HARF\n");
	fprintf(dd,"============================================================================\n");
for(i=0;i<N;i++){
			fprintf(dd,"%u	%s	%s		%u	%u	%u	%3.0f	%s \n",ogr[i].ogrNo,ogr[i].ad,ogr[i].soyad,ogr[i].vize,ogr[i].final,ogr[i].proje,ogr[i].bNotu,ogr[i].harf);
		}
	fprintf(dd,"Ogrenci sayisi:33\n");
	fprintf(dd,"Basari notlari ortalamasi: %.2f \n",(ort));
	fprintf(dd,"Basari notlari standart sapmasi: %.2f \n",StandartSapma(ssdizisi,ort));	
	fprintf(dd,"A1: %d \n",a1);
	fprintf(dd,"A2: %d \n",a2);
	fprintf(dd,"B1: %d \n",b1);
	fprintf(dd,"B2: %d \n",b2);
	fprintf(dd,"C1: %d \n",c1);
	fprintf(dd,"C2: %d \n",c2);
	fprintf(dd,"D1: %d \n",d1);
	fprintf(dd,"D2: %d \n",d2);
	fprintf(dd,"E : %d \n",e);
	fprintf(dd,"F1: %d \n",f1);
	fprintf(dd,"F2: %d \n",f2);
		
	fclose(dd);
}


float bNot(float x,float y,float z){
return (((x*3)/10)+((y*4)/10)+((z*3)/10));

}
float StandartSapma(float dizi[],float ort)
{
	int i;
	float toplam=0;
	for(i=0;i<N;i++){
	toplam += pow(dizi[i]-ort, 2);
}
	return sqrt(toplam/(N-1));;	
}


int hrf(float d[])
{int i;
 for(i=0;i<N;i++)
{ 
if(ogr[i].devam==0){
	f2++;
	strcpy( ogr[i].harf, "F2" );}
	else{
if(d[i]<39.50){
f1++;
strcpy( ogr[i].harf, "F1" );}
if(d[i]<49.50 && d[i]>=39.50){
e++;
strcpy( ogr[i].harf, "E" );}
if(d[i]<54.50 && d[i]>=49.50){
d2++;
strcpy( ogr[i].harf, "D2" );}
if(d[i]<59.50 && d[i]>=54.50){
d1++;
strcpy( ogr[i].harf, "D1" );}
if(d[i]<64.50 && d[i]>=59.50){
c2++;
strcpy( ogr[i].harf, "C2" );}
if(d[i]<69.50 && d[i]>=64.50){
c1++;
strcpy( ogr[i].harf, "C1" );}
if(d[i]<74.50 && d[i]>=69.50){
b2++;
strcpy( ogr[i].harf, "B2" );}
if(d[i]<79.50 && d[i]>=74.50){
b1++;
strcpy( ogr[i].harf, "B1" );}
if(d[i]<89.50 && d[i]>=79.50){
a2++;
strcpy( ogr[i].harf, "A2" );}
if(d[i]>=89.50){
a1++;
strcpy( ogr[i].harf, "A1" );}

}}}
