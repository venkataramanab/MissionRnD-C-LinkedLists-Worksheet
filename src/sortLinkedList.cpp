/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>
void swap(struct node*, struct node*);
struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node *ptr1;
	struct node *ptr2 ;
	if (head == NULL){
		return NULL;
	}
	ptr1 = head;
	while (ptr1->next != NULL){
		ptr2 = head;
		while (ptr2->next != NULL){
			if (ptr2->num > (ptr2->next)->num){
				swap(ptr2, ptr2->next);
			}
			ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
	return head;
}
void swap(struct node *a, struct node *b)
{
	int temp = a->num;
	a->num = b->num;
	b->num = temp;
}