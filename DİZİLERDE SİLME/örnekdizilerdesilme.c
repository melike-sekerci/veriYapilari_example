#include <stdio.h>
#include <stdlib.h>

int main() {
	int dizi[50],elemansayi,silineceke,i;
	
	printf("Diziniz kac elemanli olsun:");
	scanf("%d",&elemansayi);
	
	for(i=0;i<elemansayi;i++){
		printf("%d. elemani giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	printf("olusturdugunuz diziniz: \n");
	
	
	for(i=0;i<elemansayi;i++){
			
			printf("dizi[%d]==>%d \n",i,dizi[i]);
	}
    
    printf("Dizinin kacinci indisini silmek istiyorsunuz:");
    scanf("%d",&silineceke);
    
    if(elemansayi<silineceke){
		printf("dizide boyle bir indis elemani yoktur.");
	}
    
    else{
	    while(silineceke<elemansayi){
    	  dizi[silineceke-1]=dizi[silineceke];
    	  silineceke++;
	}
	elemansayi--;
    printf("\n guncel diziniz \n");
    
    for(i=0;i<elemansayi;i++){
			
			printf("dizi[%d]==>%d \n",i,dizi[i]);
	}
    	
	}
    
	
	
	return 0;
}
