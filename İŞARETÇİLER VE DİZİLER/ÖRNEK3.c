#include <stdio.h>
#include <stdlib.h>


int main() {
	int ch[5];
	int *ptr=ch;
	int i;
	for(i=0;i<5;i++){
		printf("\n sayiyi giriniz:",ptr);
		scanf("%d",&ptr);
		ptr++;
	}
	ptr--;
	for(i=0;i<5;i++){
		printf("\n girilen sayi=%d",*ptr);
		ptr--;
	}
	
	return 0;
}
