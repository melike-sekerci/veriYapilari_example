#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	int sayi[5]={2,4,5,6,10};
	int i,*ptr;
	for(i=0;i<5;i++){
		printf("\n sayi=%d",*ptr);
	    ptr++;
	}
	return 0;
}
