#include <stdio.h>
#include <stdlib.h>
struct n{
	int x;
	n * next;
};
typedef n node;

int main(int argc, char *argv[]) {
	node* root;
	root=(node*)malloc(sizeof(node));
	root ->x=10;
	root->next->x=(node*)malloc(sizeof(node));
	root->next->x=20;
	root->next->next->x=(node*)malloc(sizeof(node));
	root->next->next->x=30;
	node *iter;
	iter=root;
	printf("%d",iter->x);
	iter=iter->next;
	printf("%d",iter->x);
	
	return 0;
}
