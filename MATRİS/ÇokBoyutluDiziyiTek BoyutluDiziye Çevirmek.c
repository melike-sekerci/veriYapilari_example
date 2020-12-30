#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,b,c,d;
	int dizi[2][3][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
	int e[30];
	for(a=0;a<2;a++)
		for(b=0;b<3;b++)
			for(c=0;c<4;c++)
			   e[(a*3*4)+(b*4)+c]=dizi[a][b][c];
			for(d=0;d<a*b*c;d++)
			printf("dizi[%d]=>%d  \n",d,e[d]);
				
			
		
	
	
	return 0;
}
