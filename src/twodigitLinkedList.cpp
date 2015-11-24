/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};

int convert_sll_2digit_to_int(struct node *head){
	int sum = 0;
	struct node *cur;
	cur = (struct node*)malloc(sizeof(struct node));
	cur = head;
	while (cur != NULL){
		sum = sum * 100 + (cur->digit1) * 10 + (cur->digit2);
		cur = cur->next;
	}
	return sum;
}
