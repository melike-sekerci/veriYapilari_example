#include <stdio.h>
#include <stdlib.h>

int main() { 
     int a,b,c;
     int toplam=0;
     int dizi[3][2][5];
     for(a=0;a<3;a++){
     	for(b=0;b<2;b++){
     		for(c=0;c<5;c++){
     			toplam=a+b+c;
     			printf("dizi[%d][%d][%d]=>%d \n",a,b,c,toplam);
			 }
		 }
	 }
     
	return 0;
}
