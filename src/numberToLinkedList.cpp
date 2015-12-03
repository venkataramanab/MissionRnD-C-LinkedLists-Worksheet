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
struct node *newnode(int);
struct node * numberToLinkedList(int N) {
	struct node *head, *new_node;
	head = (struct node*)malloc(sizeof(struct node));
	new_node = (struct node*)malloc(sizeof(struct node));
	if (N < 0){
		N *= -1;
	}
	head = newnode(N % 10);
	N /= 10;
	while (N>0){
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node = newnode(N % 10);
		new_node->next = head;
		head = new_node;
		N /= 10;
	}
	return head;
}
struct node * newnode(int in){
	struct node *new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->num = in;
	new_node->next = NULL;
	return new_node;
}