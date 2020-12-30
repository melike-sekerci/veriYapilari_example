#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,j;
	int a[2][3]={15,24,12,5,8,7};
	int min=a[0][0];
	
	printf("Matrsiniz:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("matris[%d][%d]==>%d \n",i,j,a[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		 if(min>a[i][j])
		 min=a[i][j];
	printf("\n dizininz en kucugu:%d",min);
		
	
	return 0;
}
