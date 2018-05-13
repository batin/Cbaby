/*14253506 ÞEREF BATIN ERYILMAZ*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void ekle();
void ara();
void goruntule();
void sil();
void guncelle();
int numKontrol(char tel[12]);

int i=0,aranankayit=0;

struct kisiler{
	   char ad[100];
       char soyad[100];
       char ceptel[12];
       char evtel[12];
       char istel[12];
       char eposta[100];
       char dgunu[100];
       char mah[100];
	   char sokak[100];
	   char il[100];
	   char ilce[100];
}kisi[BUFSIZ]={"","","","","","","","","","",""};



main(){
	system("color cf");// system rengini degistirdik
	FILE *fp = fopen("Rehber.txt", "a+");
	int y=0;
	while(!feof(fp)){	
		fscanf(fp, "%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s", kisi[y].ad, kisi[y].soyad, kisi[y].ceptel, kisi[y].evtel, kisi[y].istel, kisi[y].dgunu, kisi[y].eposta, kisi[y].mah, kisi[y].sokak, kisi[y].il, kisi[y].ilce);
		y++;}//kisi sayisini bulduk
	fclose(fp);
	i=y-1;
    while(1){ //menu tasarimi
		printf("\t\t\t\t\tบบบบบบบบบบบบบบบบบบบบบบบบบ\n");
		printf("\t\t\t\t\tบบบบบบบบบบบบบบบบบบบบบบบบบ\n");
	 	printf("\t\t\t\t\tบบ\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260บบ\n");
        printf("\t\t\t\t\tบบ\260\260\260 1 ฎ Kayit ekle\260\260\260บบ\n");
        printf("\t\t\t\t\tบบ\260\260\260 2 ฎ Goruntule \260\260\260บบ\n");
        printf("\t\t\t\t\tบบ\260\260\260 3 ฎ Guncelle  \260\260\260บบ\n");
        printf("\t\t\t\t\tบบ\260\260\260 4 ฎ Sil       \260\260\260บบ\n");
        printf("\t\t\t\t\tบบ\260\260\260 5 ฎ Arama     \260\260\260บบ\n");
        printf("\t\t\t\t\tบบ\260\260\260 0 ฎ CIKIS     \260\260\260บบ\n");
        printf("\t\t\t\t\tบบ\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260บบ\n");
        printf("\t\t\t\t\tบบบบบบบบบบบบบบบบบบบบบบบบบ\n");
		printf("\t\t\t\t\tบบบบบบบบบบบบบบบบบบบบบบบบบ\n");
		
		int secim=_getch();
        system("cls");//ekran temizleme//ekran temizleme
       if(secim == '1'){
			ekle();}
       else if(secim == '2'){
        	goruntule();}       	  
       else if(secim == '3'){
            guncelle();}   		 
       else if(secim == '4'){
        	sil();
			remove("Rehber1.txt");}
       else if(secim == '5'){
			ara();
			
			if(i!=0){
				if(aranankayit==0)
					printf("\n\n\nKayit bulunamadi\n\n");
			else 
				printf("\n%d Adet kayit bulundu\n\n\n\n", aranankayit);
				printf("Menuye donmek icin bir tusa basiniz...");
				getch();
				system("cls");}
				aranankayit=0;
				}
	   else if(secim == '0'){
		   	printf("\nCikmak istediginize emin misiniz? (E)/(H)\n");
		   int eh=_getch();
		   if(eh=='e' || eh=='E')
				break;
			else
				system("cls");}
		else{
			printf("\nHatali bir giris yaptiniz lutfen tekrar giriniz...\n\n");
			getch();
			system("cls");}
	}
}
void ekle(){
     FILE *fp = fopen("Rehber.txt", "a+");
     int numkntrl=0, pstkntrl=0;
    
     printf("********************************************************************************************************");
	 printf("\n                                    KAYIT EKLEME\n");
	 printf("********************************************************************************************************\n\n");
     
	 printf("%d numarali kayit:\n", i+1);
     printf("***2 adiniz var ise aralarina (/) koyunuz***\n");
     
	 printf("Ad\t\t\t:");
	 scanf("%s", kisi[i].ad);
     
	 printf("Soyad \t\t\t:");
     scanf("%s", kisi[i].soyad);

	 while(numkntrl==0){
	 	printf("Cep numarasi(11)\t:");
     	scanf("%s", kisi[i].ceptel);
 	 	numkntrl=numKontrol(kisi[i].ceptel);
	 }
	 numkntrl=0;
 	while(numkntrl==0){
    	printf("Ev numarasi(11) \t:");
    	scanf("%s", kisi[i].evtel);
    	
		numkntrl=numKontrol(kisi[i].evtel);
	 }
	 numkntrl=0;
	while(numkntrl==0){
     	printf("Is numarasi(11) \t:");
     	scanf("%s", kisi[i].istel);
    	
		numkntrl=numKontrol(kisi[i].istel);
	 } numkntrl=0;
     
	while(pstkntrl==0){
	 	printf("Eposta\t\t\t:");
     	scanf("%s", kisi[i].eposta);
     	
		 for(int z=0;z<strlen(kisi[i].eposta);z++){
     		if(kisi[i].eposta[z]=='@'){
				pstkntrl=1;}
			 	}
	    if(pstkntrl==0)
			printf("Lutfen gecerli bir eposta adresi girniz\n");
	     }
     printf("Dogum tarihi(gun/ay/yil):");
     scanf("%s", kisi[i].dgunu);
     
	 printf("Mahalle ismi\t\t:");
     scanf("%s", kisi[i].mah);
     
	 printf("Sokak ismi\t\t:");
     scanf("%s", kisi[i].sokak);
     
	 printf("Il ismi\t\t\t:");
     scanf("%s", kisi[i].il);
     
	 printf("Ilce ismi\t\t:");
     scanf("%s", kisi[i].ilce);
     
	 system("cls");
     printf("\n\n********************************************************************************************************");
	 printf("\n                                    Kayit basari ile eklendi\n");
 	 printf("********************************************************************************************************\n\n");
   	 
	 fprintf(fp, "%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", kisi[i].ad, kisi[i].soyad, kisi[i].ceptel, kisi[i].evtel, kisi[i].istel, kisi[i].dgunu, kisi[i].eposta, kisi[i].mah, kisi[i].sokak, kisi[i].il, kisi[i].ilce);		     
     printf("Menuye donmek icin bir tusa basiniz...");
	 
	 getch();
	 system("cls");
	 
	 i++;	
	 fclose(fp);
	 }
void goruntule(){
	FILE *fpg;			
	fpg = fopen("Rehber.txt",  "r");
	
	if(i==0){
		printf("\n\nHic kayit bulunamamistir\n\n\nKayit eklemek ister misiniz (E)/(H)\n");
		int t=_getch();
		if(t=='e' || t=='E'){
		system("cls");
		ekle();
		return;}
		else{
		system("cls");
		return;}
	}
	int a, x;
	system("cls");
	
	for(x=0;x<i;x++) {	 	
		printf("%d Numarali kayit:\n", x+1);
		fscanf(fpg, "%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s", kisi[x].ad, kisi[x].soyad, kisi[x].ceptel, kisi[x].evtel, kisi[x].istel, kisi[x].dgunu, kisi[x].eposta, kisi[x].mah, kisi[x].sokak, kisi[x].il, kisi[x].ilce);
		printf("Ad\t\t:%s\nSoyad\t\t:%s \nCeptel\t\t:%s \nEvtel\t\t:%s \nIstel\t\t:%s \nDogumTarihi\t:%s \nEposta\t\t:%s \nMah\t\t:%s \nSokak\t\t:%s\nIl\t\t:%s \nIlce\t\t:%s \n \n", kisi[x].ad, kisi[x].soyad, kisi[x].ceptel, kisi[x].evtel, kisi[x].istel, kisi[x].dgunu, kisi[x].eposta, kisi[x].mah, kisi[x].sokak, kisi[x].il, kisi[x].ilce);
	  } 
	printf("Menuye donmek icin bir tusa basiniz...");
	getch();
	system("cls");
		fclose(fpg);
}
void guncelle(){
	 FILE *eski, *yeni; 
	 eski=fopen("Rehber.txt", "r");
	 yeni=fopen("Rehber1.txt", "w"); 
	 
	 int numkntrl2=0, pstkntrl2=0;
	 if(i==0){
		printf("\n\nHic kayit bulunamamistir\n\n\nKayit eklemek ister misiniz (E)/(H)\n");
		int t=_getch();
		
		if(t=='e' || t=='E'){
			system("cls");
			ekle();
			return;}
		else{
			system("cls");
			return;
			}
	}
	 int q, j;
 	 printf("********************************************************************************************************");
	 printf("\n                                    KAYIT GUNCELLEME\n");
	 printf("********************************************************************************************************\n\n");
	 	int x, gscm;
		
		printf("\n      Mevcut kayitlar\n");
		printf("***************************************\n");
		
		 for(x=0;x<i;x++) {	 	
			printf("%d Numarali kayit:\n", x+1);
		
			fscanf(eski, "%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s", kisi[x].ad, kisi[x].soyad, kisi[x].ceptel, kisi[x].evtel, kisi[x].istel, kisi[x].dgunu, kisi[x].eposta, kisi[x].mah, kisi[x].sokak, kisi[x].il, kisi[x].ilce);
	
			printf("Ad\t\t:%s\nSoyad\t\t:%s\n \n", kisi[x].ad, kisi[x].soyad);//guncelleme kisminda kayitlarin sadece isim ve soyisimleri gozukur
	  } 
	 
	 printf("Guncelleme yapmak istediginiz kayit no giriniz:\n");
	 scanf("%d", &j);
	 	while(j>i){
	if(j>i){
	printf("Hatali giris yaptiniz guncellenecek kayit no? :");
	scanf("%d", &j);
	}else
	break;
	}
	 j--;
	 system("cls");
	 printf("********************************************************************************************************");
	 printf("\n                                    KAYIT GUNCELLEME\n");
	 printf("********************************************************************************************************\n\n");
	 printf("%d Numarali kayit bilgileri:\n", j+1);
	 printf("Ad\t\t:%s\nSoyad\t\t:%s \nCeptel\t\t:%s \nEvtel\t\t:%s \nIstel\t\t:%s \nDogumTarihi\t:%s \nEposta\t\t:%s \nMah\t\t:%s \nSokak\t\t:%s\nIl\t\t:%s \nIlce\t\t:%s \n \n", kisi[j].ad, kisi[j].soyad, kisi[j].ceptel, kisi[j].evtel, kisi[j].istel, kisi[j].dgunu, kisi[j].eposta, kisi[j].mah, kisi[j].sokak, kisi[j].il, kisi[j].ilce);
	 
	 for(q=0;q<=i;q++){
		
		fscanf(eski, "%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s", kisi[q].ad, kisi[q].soyad, kisi[q].ceptel, kisi[q].evtel, kisi[q].istel, kisi[q].dgunu, kisi[q].eposta, kisi[q].mah, kisi[q].sokak, kisi[q].il, kisi[q].ilce);
	 	
		 if(q==j){
			 printf("1  ฎ Ad gunceleme\n");
			 printf("2  ฎ Soyad gunceleme\n");
		     printf("3  ฎ Cep Telefonu gunceleme\n");
		     printf("4  ฎ Ev Telefonu gunceleme\n");
		     printf("5  ฎ Is Telefonu gunceleme\n");
		     printf("6  ฎ Eposta gunceleme\n");
			 printf("7  ฎ Dogum Tarihi gunceleme\n");
		     printf("8  ฎ Mahalle Adi gunceleme\n");
			 printf("9  ฎ Sokak Adi gunceleme\n");
		 	 printf("10 ฎ Il adi gunceleme\n");
			 printf("11 ฎ Ilce adi gunceleme\n");
		     printf("12 ฎ Tamamini gunceleme\n");
			 scanf("%d", &gscm);
		     
			 while(gscm>12){
					if(gscm>12){
						printf("Hatali giris yaptiniz silinecek kayit no? :");
						scanf("%d", &gscm);
					}
					else
						break;																
					}
		     
			 switch(gscm){
			 
			 case 1:
			     
				 printf("Ad giriniz\t\t:");
			     scanf("%s", kisi[j].ad);
			     
				 fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[j].ad, kisi[q].soyad, kisi[q].ceptel, kisi[q].evtel, kisi[q].istel, kisi[q].dgunu, kisi[q].eposta, kisi[q].mah, kisi[q].sokak, kisi[q].il, kisi[q].ilce);
				 break;
			 
			 case 2:
			     
				 printf("Soyad giriniz\t\t:");
			     scanf("%s", kisi[j].soyad);
			     
				 fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[q].ad, kisi[j].soyad, kisi[q].ceptel, kisi[q].evtel, kisi[q].istel, kisi[q].dgunu, kisi[q].eposta, kisi[q].mah, kisi[q].sokak, kisi[q].il, kisi[q].ilce);
			     break;
		     
			 case 3:
				
				while(numkntrl2==0){
				 	printf("Cep numarasini giriniz(11):");
			     	scanf("%s", kisi[j].ceptel);
			 	 	
					numkntrl2=numKontrol(kisi[j].ceptel);
				 }
				 numkntrl2=0;
			     fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[q].ad, kisi[q].soyad, kisi[j].ceptel, kisi[q].evtel, kisi[q].istel, kisi[q].dgunu, kisi[q].eposta, kisi[q].mah, kisi[q].sokak, kisi[q].il, kisi[q].ilce);
			     break;
		     
			 case 4:
			     
				 while(numkntrl2==0){
			    	printf("Ev numarasini giriniz(11):");
			    	scanf("%s", kisi[j].evtel);
			    
					numkntrl2=numKontrol(kisi[j].evtel);
				 }
				 numkntrl2=0;
			     fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[q].ad, kisi[q].soyad, kisi[q].ceptel, kisi[j].evtel, kisi[q].istel, kisi[q].dgunu, kisi[q].eposta, kisi[q].mah, kisi[q].sokak, kisi[q].il, kisi[q].ilce);
			     break;
		     
			 case 5:
				 
				 while(numkntrl2==0){
				     printf("Is numarasini giriniz(11)\t:");
				     scanf("%s", kisi[j].istel);
				    
					numkntrl2=numKontrol(kisi[j].istel);
					 } 
				 numkntrl2=0;
			     fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[q].ad, kisi[q].soyad, kisi[q].ceptel, kisi[q].evtel, kisi[j].istel, kisi[q].dgunu, kisi[q].eposta, kisi[q].mah, kisi[q].sokak, kisi[q].il, kisi[q].ilce);
			     break;
		    
			 case 6:
			     
				 while(pstkntrl2==0){
				 	printf("Eposta\t\t\t:");
			     	scanf("%s", kisi[j].eposta);
			     	
					 for(int z=0;z<strlen(kisi[j].eposta);z++){
				     	if(kisi[j].eposta[z]=='@'){
						 	pstkntrl2=1;}
						 	}
				     	if(pstkntrl2==0)
						 	printf("Lutfen gecerli bir eposta adresi girniz\n");
				     		}
			     
				 fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[q].ad, kisi[q].soyad, kisi[q].ceptel, kisi[q].evtel, kisi[q].istel, kisi[j].dgunu, kisi[q].eposta, kisi[q].mah, kisi[q].sokak, kisi[q].il, kisi[q].ilce);
			     break;
		     
			 case 7:
			     
				 printf("Dogum tarihi giriniz\t:");
			     scanf("%s", kisi[j].dgunu);
			    
				fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[q].ad, kisi[q].soyad, kisi[q].ceptel, kisi[q].evtel, kisi[q].istel, kisi[q].dgunu, kisi[j].eposta, kisi[q].mah, kisi[q].sokak, kisi[q].il, kisi[q].ilce);
			     break;
		     
			 case 8:
			     
				 printf("Mahalle ismi giriniz\t:");
			     scanf("%s", kisi[j].mah);
			     
				 fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[q].ad, kisi[q].soyad, kisi[q].ceptel, kisi[q].evtel, kisi[q].istel, kisi[q].dgunu, kisi[q].eposta, kisi[j].mah, kisi[q].sokak, kisi[q].il, kisi[q].ilce);
				  break;
		     
			 case 9:
			    
				printf("Sokak ismi giriniz\t:");
			     scanf("%s", kisi[j].sokak);
			     
				 fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[q].ad, kisi[q].soyad, kisi[q].ceptel, kisi[q].evtel, kisi[q].istel, kisi[q].dgunu, kisi[q].eposta, kisi[q].mah, kisi[j].sokak, kisi[q].il, kisi[q].ilce);
		    	 break;
		     
			 case 10:
			     
				 printf("Il ismi giriniz\t\t:");
			     scanf("%s", kisi[j].il);
			     
				 fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[q].ad, kisi[q].soyad, kisi[q].ceptel, kisi[q].evtel, kisi[q].istel, kisi[q].dgunu, kisi[q].eposta, kisi[q].mah, kisi[q].sokak, kisi[j].il, kisi[q].ilce);
			     break;
		     
			 case 11:
				 
				 printf("Ilce ismi giriniz\t:");
			     scanf("%s", kisi[j].ilce);
				 
				 fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[q].ad, kisi[q].soyad, kisi[q].ceptel, kisi[q].evtel, kisi[q].istel, kisi[q].dgunu, kisi[q].eposta, kisi[q].mah, kisi[q].sokak, kisi[q].il, kisi[j].ilce);
			     break;
		    
			case 12:
			     
				 printf("%d numarali kayit:\n", j+1);
			     
				 printf("Ad giriniz\t\t:");
			     scanf("%s", kisi[j].ad);
			    
				 printf("Soyad giriniz\t\t:");
			     scanf("%s", kisi[j].soyad);
			     
				 printf("Cep numarasini giriniz\t:");
			     scanf("%s", kisi[j].ceptel);
			     
				 printf("Ev numarasini giriniz\t:");
			     scanf("%s", &kisi[j].evtel);
			     
				 printf("Is numarasini giriniz\t:");
			     scanf("%s", kisi[j].istel);
			     
				 printf("Eposta giriniz\t\t:");
			     scanf("%s", kisi[j].eposta);
			     
				 printf("Dogum tarihi giriniz\t:");
			     scanf("%s", kisi[j].dgunu);
			     
				 printf("Mahalle ismi giriniz\t:");
			     scanf("%s", kisi[j].mah);
			     
				 printf("Sokak ismi giriniz\t:");
			     scanf("%s", kisi[j].sokak);
			     
				 printf("Il ismi giriniz\t\t:");
			     scanf("%s", kisi[j].il);
			     
				 printf("Ilce ismi giriniz\t:");
			     scanf("%s", kisi[j].ilce);
			     
				 fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[j].ad, kisi[j].soyad, kisi[j].ceptel, kisi[j].evtel, kisi[j].istel, kisi[j].dgunu, kisi[j].eposta, kisi[j].mah, kisi[j].sokak, kisi[j].il, kisi[j].ilce);
				 
				 break;
			 }	
	 		 }else
				fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[q].ad, kisi[q].soyad, kisi[q].ceptel, kisi[q].evtel, kisi[q].istel, kisi[q].dgunu, kisi[q].eposta, kisi[q].mah, kisi[q].sokak, kisi[q].il, kisi[q].ilce);				     
	 					}
	system("cls");
   	printf("\n\n\n\n********************************************************************************************************");
	printf("\n                                    Kayit basariyla guncellendi\n");
	printf("********************************************************************************************************\n\n\n\n");
	printf("Menuye donmek icin bir tusa basiniz...");
	
	getch();
	system("cls");

fclose(eski);
fclose(yeni);

remove("Rehber.txt");
rename("Rehber1.txt", "Rehber.txt");
}
void sil(){
	
	FILE *eski, *yeni; 
	int r=0, q;
	printf("********************************************************************************************************");
	printf("\n                                    KAYIT SILME\n");
	printf("********************************************************************************************************\n");
	eski=fopen("Rehber.txt", "r");
	yeni=fopen("Rehber1.txt", "w+"); 
	if(i==0){
		printf("\n\nHic kayit bulunamamistir\n\n\nKayit eklemek ister misiniz (E)/(H)\n");
		int t=_getch();
		if(t=='e' || t=='E'){
		
		system("cls");
		ekle();}
		
		else{
		
		fclose(eski);
		fclose(yeni);
	
		remove("Rehber.txt");
		system("cls");
		return;}
	}
		int x;
		 printf("\n      Mevcut kayitlar\n");
		printf("***************************************\n");
		 for(x=0;x<i;x++) {	 	
			printf("%d Numarali kayit:\n", x+1);
			fscanf(eski, "%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s", kisi[x].ad, kisi[x].soyad, kisi[x].ceptel, kisi[x].evtel, kisi[x].istel, kisi[x].dgunu, kisi[x].eposta, kisi[x].mah, kisi[x].sokak, kisi[x].il, kisi[x].ilce);
			printf("Ad\t\t:%s\nSoyad\t\t:%s\n \n", kisi[x].ad, kisi[x].soyad);//silme kisminda kayitlarin sadece isim ve soyisimleri gozukur
	  } 
	printf("Silinecek kayit no? :");
	scanf("%d", &q);
	while(q>i){
		if(q>i){
			printf("Hatali giris yaptiniz silinecek kayit no? :");
			scanf("%d", &q);
		}else
		break;
		}
	q--;
	printf("%d numarali kayidi silmek istediginize emin misiniz (E)/(H)\n", q+1);				
   	int eh=_getch();
	   if(eh=='h' || eh=='H'){
			system("cls");
			printf("\n\n\n\n********************************************************************************************************");
			printf("\n                                    Kayit silinmedi\n");
			printf("********************************************************************************************************\n\n\n\n");
			printf("Menuye donmek icin bir tusa basiniz...");
			
			getch();
			
			fclose(eski);
			fclose(yeni);
			
			remove("Rehber1.txt");
			system("cls");
			return;	
			}
		else if(eh=='e' || eh=='E' ){
			for(r=0;r<i;r++){
				fscanf(eski, "%s %s %s %s %s %s %s %s %s %s %s", kisi[r].ad, kisi[r].soyad, kisi[r].ceptel, kisi[r].evtel, kisi[r].istel, kisi[r].dgunu, kisi[r].eposta, kisi[r].mah, kisi[r].sokak, kisi[r].il, kisi[r].ilce);
		    	if(r!=q){
					fprintf(yeni, "%s %s %s %s %s %s %s %s %s %s %s\n", kisi[r].ad, kisi[r].soyad, kisi[r].ceptel, kisi[r].evtel, kisi[r].istel, kisi[r].dgunu, kisi[r].eposta, kisi[r].mah, kisi[r].sokak, kisi[r].il, kisi[r].ilce);	
						  }
		   					} 
		   
		   	printf("\n\n\n\n********************************************************************************************************");
			printf("\n                                    Kayit basariyla silindi\n");
			printf("********************************************************************************************************\n\n\n\n");
			
			getch();
			system("cls");
	
		fclose(eski);
		fclose(yeni);
		
		remove("Rehber.txt");
		rename("Rehber1.txt", "Rehber.txt");
		
		
		if(i>0)
		i--;}
		else {
			system("cls");}
		}	
void ara(){
	FILE *fp=fopen("Rehber.txt", "r");
    if(i==0){
		printf("Hic kayit bulunamamistir\n Kayit eklemek ister misiniz (E)/(H)\n");
		int t=_getch();
		if(t=='e' || t=='E'){
		system("cls");	
		ekle();}
		else{
		system("cls");
		return;}
	}
	 printf("********************************************************************************************************");
	 printf("\n                                        KAYIT ARAMA\n");
	 printf("********************************************************************************************************\n\n");
	int scm2, z, b;
    char a[100]={""};
    printf("Arama turunu giriniz\n");
	printf("1  ฎ Ad\n");
	printf("2  ฎ Soyad\n");
    printf("3  ฎ Eposta\n");
	printf("4  ฎ Dogum Tarihi\n");
    printf("5  ฎ Cep Telefonu\n");
    printf("6  ฎ Ev Telefonu\n");
    printf("7  ฎ Is Telefonu\n");
    printf("8  ฎ Mahalle Adi\n");
	printf("9  ฎ Sokak Adi\n");
	printf("10 ฎ Il adi\n");
	printf("11 ฎ Ilce adi\n");
    scanf("%d", &scm2);	
    system("cls");
	switch(scm2){
		 
		 case 1:
		 	
		 printf("Arama sozcugu giriniz:");
		 scanf("%s", &a);
		 for(z=0;z<i;z++){
		 	fscanf(fp, "%s %s %s %s %s %s %s %s %s %s %s", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);
		 	if(strcmp(a, kisi[z].ad)==0){
				printf("Ad:%s \nSoyad:%s \nCeptel:%s \nEvtel:%s \nIstel:%s \nDogumTarihi:%s \nEposta:%s \nMah:%s \nSokak:%s \nIl:%s \nIlce:%s \n \n", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);
			aranankayit++;}
			}
			break;
		 
		 case 2:
		 	
		 printf("Arama sozcugu giriniz:");
		 scanf("%s", &a);
		 for(z=0;z<i;z++){
		 	fscanf(fp, "%s %s %s %s %s %s %s %s %s %s %s", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);
			if(strcmp(a,kisi[z].soyad)==0){
				printf("Ad:%s \nSoyad:%s \nCeptel:%s \nEvtel:%s \nIstel:%s \nDogumTarihi:%s \nEposta:%s \nMah:%s \nSokak:%s \nIl:%s \nIlce:%s \n \n", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);		
			aranankayit++;}
			}
			break;
		 
		 case 3:	
		 
		 printf("Arama sozcugu giriniz:");
		 scanf("%s", &a);
		 for(z=0;z<i;z++){
		 	fscanf(fp, "%s %s %s %s %s %s %s %s %s %s %s", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);
			if(strcmp(a, kisi[z].eposta)==0){
				printf("Ad:%s \nSoyad:%s \nCeptel:%s \nEvtel:%s \nIstel:%s \nDogumTarihi:%s \nEposta:%s \nMah:%s \nSokak:%s \nIl:%s \nIlce:%s \n \n", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);	
			aranankayit++;}
			}
			break;
		 
		 case 4:
		 	
		 printf("Arama sozcugu giriniz:");
		 scanf("%s", &a);
		 for(z=0;z<i;z++){
		 	fscanf(fp, "%s %s %s %s %s %s %s %s %s %s %s", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);
			if(strcmp(a, kisi[z].dgunu)==0){
				printf("Ad:%s \nSoyad:%s \nCeptel:%s \nEvtel:%s \nIstel:%s \nDogumTarihi:%s \nEposta:%s \nMah:%s \nSokak:%s \nIl:%s \nIlce:%s \n \n", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);	
			aranankayit++;}
			}
			break;		     
		 
		 case 5:
		 	
		 printf("Numarayi giriniz:");
		 scanf("%s", &a);
		 for(z=0;z<i;z++){
			fscanf(fp, "%s %s %s %s %s %s %s %s %s %s %s", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);		
			if(strcmp(a,kisi[z].ceptel)==0){
				printf("Ad:%s \nSoyad:%s \nCeptel:%s \nEvtel:%s \nIstel:%s \nDogumTarihi:%s \nEposta:%s \nMah:%s \nSokak:%s \nIl:%s \nIlce:%s \n \n", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);			
			aranankayit++;}
			}
			break;
		 
		 case 6:
		 	
		 printf("Numarayi giriniz:");
		 scanf("%s", &a);
		 for(z=0;z<i;z++){
			fscanf(fp, "%s %s %s %s %s %s %s %s %s %s %s", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);		 	
			if(strcmp(a, kisi[z].evtel)==0){
		 		printf("Ad:%s\nSoyad:%s\nCeptel:%s\nEvtel:%s\nIstel:%s\nDogumTarihi:%s\nEposta:%s\nMah:%s\nSokak:%s\nIl:%s\nIlce:%s\n", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);
			aranankayit++;}
			}
			break;
		 
		 case 7:
		 	
		 printf("Numarayi giriniz:");
		 scanf("%s", &a);
		 for(z=0;z<i;z++){
		fscanf(fp, "%s %s %s %s %s %s %s %s %s %s %s", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);
		 	if(strcmp(a, kisi[z].istel)==0){
				printf("Ad:%s \nSoyad:%s \nCeptel:%s \nEvtel:%s \nIstel:%s \nDogumTarihi:%s \nEposta:%s \nMah:%s \nSokak:%s \nIl:%s \nIlce:%s \n \n", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);			
			aranankayit++;}
			}
			break;
		 
		 case 8:
		 	
		 printf("Arama sozcugu giriniz:");
		 scanf("%s", &a);
		 for(z=0;z<i;z++){
			fscanf(fp, "%s %s %s %s %s %s %s %s %s %s %s", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);		
			if(strcmp(a, kisi[z].mah)==0){
				printf("Ad:%s \nSoyad:%s \nCeptel:%s \nEvtel:%s \nIstel:%s \nDogumTarihi:%s \nEposta:%s \nMah:%s \nSokak:%s \nIl:%s \nIlce:%s \n \n", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);	
			aranankayit++;}
			}
			break;		     
		 
		 case 9:	
		 
		 printf("Arama sozcugu giriniz:");
		 scanf("%s", &a);
		 for(z=0;z<i;z++){
			fscanf(fp, "%s %s %s %s %s %s %s %s %s %s %s", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);
			if(strcmp(a, kisi[z].sokak)==0){
				printf("Ad:%s \nSoyad:%s \nCeptel:%s \nEvtel:%s \nIstel:%s \nDogumTarihi:%s \nEposta:%s \nMah:%s \nSokak:%s \nIl:%s \nIlce:%s \n \n", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);		
			aranankayit++;}
			}
			break;		     
		 
		 case 10:
		 	
		 printf("Arama sozcugu giriniz:");
		 scanf("%s", &a);
		 for(z=0;z<i;z++){
			fscanf(fp, "%s %s %s %s %s %s %s %s %s %s %s", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);		
			if(strcmp(a, kisi[z].il)==0){
				printf("Ad:%s \nSoyad:%s \nCeptel:%s \nEvtel:%s \nIstel:%s \nDogumTarihi:%s \nEposta:%s \nMah:%s \nSokak:%s \nIl:%s \nIlce:%s \n \n", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);	
			aranankayit++;}
			}
			break;		     
		 
		 case 11:
		 	
		 printf("Arama sozcugu giriniz:");
		 scanf("%s", &a);
		 for(z=0;z<i;z++){
			fscanf(fp, "%s %s %s %s %s %s %s %s %s %s %s", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il, kisi[z].ilce);
			if(strcmp(a, kisi[z].ilce)==0){
				printf("Ad:%s \nSoyad:%s \nCeptel:%s \nEvtel:%s \nIstel:%s \nDogumTarihi:%s \nEposta:%s \nMah:%s \nSokak:%s \nIl:%s \nIlce:%s \n \n", kisi[z].ad, kisi[z].soyad, kisi[z].ceptel, kisi[z].evtel, kisi[z].istel, kisi[z].dgunu, kisi[z].eposta, kisi[z].mah, kisi[z].sokak, kisi[z].il,kisi[z].ilce);		
			aranankayit++;}
			}
			break;		     
		 
		 default:
			
			printf("Yanlis giris yaptiniz.\n");
			getch();		 
		 	break;
			}
fclose(fp);
}

int numKontrol(char tel[12])//gelen numaranin rakamlardan olusup olusmadigini ve 11 haneli olup olmadigini kontrol eder
{
	int hata=0;
	if (tel[1]==NULL || tel[2]==NULL || tel[3]==NULL || tel[4]==NULL || tel[5]==NULL || tel[6]==NULL || tel[7]==NULL || tel[8]==NULL || tel[9]==NULL || tel[10]==NULL || tel[11]!=NULL)
	{//kac haneli oldugunu kontrol eden kisim
		printf("Telefon numarasi 11 haneli olmali ve rakam icermelidir\n");
		return 0;
	}
	for (int i = 0; tel[i]!='\0'; i++)
	{
		if (tel[i] != '1' && tel[i] != '2' && tel[i] != '3' && tel[i] != '4' && tel[i] != '5' && tel[i] != '6' && tel[i] != '7' && tel[i] != '8' && tel[i] != '9' && tel[i] != '0')
		{
			hata=1;
		}
		else hata=0;
	}
	if (hata==1)
	{
		printf("0 ile 9 arasinda rakam kullaniniz\n");
		return 0;
	}
	else 
	return 1;
}

