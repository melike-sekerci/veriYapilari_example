#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ip1,id1;
	id1=278;
	ip1=&id1;
	printf("id1 degisken değeri:%d \n",id1);
	printf("id1 degisken değeri:%p \n",*ip1);
	printf("id1 degiskeni bellek adresi %p \n",ip1);
	printf("id1 degiskeninin bellek adresi %p",&id1);
	return 0;
}
