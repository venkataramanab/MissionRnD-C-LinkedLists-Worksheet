/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if ((head == NULL) || (K == 1)){
		return NULL;
	}
	struct node *cur;
	int num = K;
	cur = (struct node*)malloc(sizeof(struct node));
	cur = head;
	while ((cur != NULL)){
		if ((num == 2) && (cur->next != NULL)){
			if ((cur->next)->next == NULL){
				cur->next = NULL;
			}
			else{
				cur->next = (cur->next)->next;
			}
			num = K + 1;
		}
		cur = cur->next;
		num--;
	}
	if ((K > 0) && (cur == NULL)){
		return head;
	}
	else{
		return NULL;
	}
}