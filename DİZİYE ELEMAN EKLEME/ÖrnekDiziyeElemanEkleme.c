#include <stdio.h>
#include <stdlib.h>


int main() {
	int dizi[30],ekleneceksayi,elemansayisi,i,lokasyon;
	
	printf("Diziniz kac elemanli olacak?");
	scanf("%d",&elemansayisi);
	
	for(i=0;i<elemansayisi;i++){
		printf("dizinin %d. elemanini giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	printf("\n yeni olusturdugunuz dizi");
	for(i=0;i<elemansayisi;i++){
		printf("\n dizi[%d]==>%d",i,dizi[i]);
		
	}
	
	printf(" \n Diziye  ekleyeceðiniz sayiyi giriniz:");
	scanf("%d",&ekleneceksayi);
	
	printf("\nDizinizi kacinci indekse yerlestirmek istiyorsunuz: ");
	scanf("%d",&lokasyon);
	
	for(i=elemansayisi;i<=lokasyon;i--){
	 	dizi[i]=dizi[i-1];
	 }
	 elemansayisi++;
	 dizi[lokasyon - 1] = ekleneceksayi;
 
     printf("\nguncel diziniz: \n");
	 
	 for(i=0;i<elemansayisi;i++){
	 	if(i==lokasyon-1){
	 		printf("\n dizi[%d]%d==>Bu eleman diziye eklendi",i,dizi[i]);
		}
		else
		printf("\n dizi[%d]%d",i,dizi[i]);
		
	
}
	
	return 0;
}
