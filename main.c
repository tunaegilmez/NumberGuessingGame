#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>


int main() {
	
	int i = 1 , random , x ;
	
	printf("\tSAYI TAHMIN OYUNUNA HOSGELDINIZ\t \n");
	printf("\n");
	srand(time(NULL));
	
	random = 1 + rand() % 100 ;
	
	printf("Lutfen bilgisayarin tuttugu sayiyi tahmin edin...\n \n");
	
	while(1)
	{
		
		printf("%d.Tahmini griniz : ",i);
		scanf("%d",&x);
		i++ ;
		if(x<1 || x>100)
		{
			for(;;)
			{
				printf("Lutfen 1 ile 100 arasinda bir sayi giriniz : ");
				scanf("%d",&x);
				if(x>=1 && x<=100)
				break;
			}
		}
	
		printf("\n");
		
		if(random==x)
		{
			printf("- %d - Sayisi dogru tahmindi. TEBRIKLER \n\n",x);
			break;
		}
		
		else if(random < x)
			printf("IPUCU : AZALT \n");
			
		else 
			printf("IPUCU : YUKSELT\n");
		
	}
	
	printf("\t%d . denemede buldunuz.\t \n \n",i=i-1);
	
	return 0;
}
