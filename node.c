#include <stdlib.h>
#include "node.h"

node *create_node(Data d){
	node *n = (node*)malloc(sizeof(node));
	n->next = NULL;
	n->data = d;
	return n;
}

void delete_node(node *n){
	free(n);
	n = NULL;
}