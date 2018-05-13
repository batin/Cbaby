
#include<stdio.h>

main()
{
int Sayi, i, i2, M;
        printf (" Bir sayi giriniz : ");
        scanf  ("%d",&Sayi);
        for(i=2;i<=Sayi;i++){
            M=1;
            for(i2=2;i2<i;i2++){
                if(i%i2==0) {
                M=0;
                break;
            }}
            if(M==1) printf("%d\n",i);
       }
}
