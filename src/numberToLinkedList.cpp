/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES:

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *head, *cur, *new_node;
	head = (struct node*)malloc(sizeof(struct node));
	cur = (struct node*)malloc(sizeof(struct node));
	if ((N > -1) && (N < 10)){
		head->num = N;
		head->next = NULL;
		return head;
	}
	else{
		if (N < 0){
			N *= -1;
		}
		head->num = N % 10;
		head->next = NULL;
		cur = head;
		N /= 10;
		while (N>0){
			new_node = (struct node*)malloc(sizeof(struct node));
			new_node->num = N % 10;
			new_node->next = NULL;
			N /= 10;
			cur = new_node;
			cur->next = head;
			head = cur;
		}
		return head;
	}
}