	#include<stdio.h>
	
	main()
	{
		int n,satir,yildiz,bosluk;
		printf("kac:");
		scanf("%d",&n);
		
		for(satir=0;satir<n+1;satir++){
			for(yildiz=0;yildiz<n-satir;yildiz++)
				printf(" ");
					for(bosluk=0;bosluk<satir-1;bosluk++)
						printf("*");
							for(bosluk=0;bosluk<satir;bosluk++)
								printf("*");
									for(yildiz=0;yildiz<n-satir;yildiz++)
										printf(" ");
		
			
		
			
		printf("\n");
			
	}
		for(satir=0;satir<n;satir++){
			for(bosluk=0;bosluk<satir;bosluk++)
				printf(" ");
					for(yildiz=0;yildiz<n-satir;yildiz++)
						printf("*");
						for(yildiz=0;yildiz<n-satir-1;yildiz++)
							printf("*");
								for(bosluk=0;bosluk<satir;bosluk++)
										printf(" ");
			
			
			
		printf("\n");	
		}
	}
