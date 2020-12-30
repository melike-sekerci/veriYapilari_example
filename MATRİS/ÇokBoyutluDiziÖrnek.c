#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,c;
	int mat[3][3][3]={1,45,65,85,64,62,25,2,5,85,6,7,4,8,87,9,5,1,2,4,7,9,24,25,36,78};
	printf("\n");
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			for(c=0;c<3;c++){
				printf("dizi[%d][%d][%d]=>%d  adresi=>[%u] \n",a,b,c,mat[a][b][c],&mat[a][b][c]);
			}
		}
	}
	return 0;
}
