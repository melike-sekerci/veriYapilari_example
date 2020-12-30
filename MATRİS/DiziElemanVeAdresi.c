#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,j;
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	printf("\n Dizi elemanlari ve adresleri");
	printf("\n\t sutun-1 sutun-2 sutun-3");
	printf("\n\t======== ======== ========");
	printf("\n satir0");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("  %d[%u] ",a[i][j],&a[i][j]);
	    printf("\n satir%d ",i+1);
		
	}
	printf("\r");
	
	return 0;
}
