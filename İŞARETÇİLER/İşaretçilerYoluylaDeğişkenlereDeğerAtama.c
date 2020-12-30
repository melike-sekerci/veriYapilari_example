#include <stdio.h>
#include <stdlib.h>


int main() {
	int *ip1,*ip2,id1,id2;
	ip1=&id1;
	ip2=&id2;
	id1=42;
	*ip2=67;
	printf("id1 değisken degeri:%d\n",*ip1);
	printf("id2 değisken degeri:%d\n",*ip2);
	printf("id1 değisken bellek adresi:%p\n",ip1);
	printf("id2 değisken bellek adresi:%p\n",ip2);
	return 0;
}
