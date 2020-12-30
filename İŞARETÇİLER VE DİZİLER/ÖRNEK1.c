#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() {
	int *p,numara[5]={4,5,6,7,8},j;

	p=numara;
	printf("eleman adresleri");
	for(j=0;j<5;j++){
		printf("\n %d      %u",*(p+j),p+j);
	}
	
	return 0;
}
