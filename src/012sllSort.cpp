/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
void sll_012_sort(struct node *head){
	int zero_cnt = 0, one_cnt = 0, two_cnt = 0;
	struct node *cur;
	cur = (struct node*)malloc(sizeof(struct node));
	cur = head;
	while (cur != NULL){
		if (cur->data == 0){
			zero_cnt++;
		}
		else if (cur->data == 1){
			one_cnt++;
		}
		else if (cur->data == 2){
			two_cnt++;
		}
		cur = cur->next;
	}
	cur = head;
	while (zero_cnt > 0){
		cur->data = 0;
		cur = cur->next;
		zero_cnt--;
	}
	while (one_cnt > 0){
		cur->data = 1;
		cur = cur->next;
		one_cnt--;
	}
	while (two_cnt > 0){
		cur->data = 2;
		cur = cur->next;
		two_cnt--;
	}
}
//void sll_012_sort(struct node *head){
//	struct node *zero = NULL, *one = NULL, *two = NULL, *cur,*zero_h, *one_h, *two_h;
//	cur = (struct node*)malloc(sizeof(struct node));
//	cur = head;
//	while (cur != '\0'){
//		if (cur->data == 0){
//			if (zero == NULL){
//				zero = (struct node *)malloc(sizeof(struct node));
//				zero_h = (struct node *)malloc(sizeof(struct node));
//				zero = cur;
//				zero_h = cur;
//			}
//			else{
//				zero->next = cur;
//				zero = cur;
//			}
//			
//		}
//		else if (cur->data == 1){
//			if (one == NULL){
//				one = (struct node*)malloc(sizeof(struct node));
//				one_h = (struct node*)malloc(sizeof(struct node));
//				one = cur;
//				one_h = cur;
//			}
//			else{
//				one->next = cur;
//				one = cur;
//			}
//			
//		}
//		else if (cur->data == 2){
//			if (two == NULL){
//				two = (struct node*)malloc(sizeof(struct node));
//				two_h = (struct node*)malloc(sizeof(struct node));
//				two = cur;
//				two_h = cur;
//			}
//			else{
//				two->next = cur;
//				two = cur;
//			}
//			
//		}
//		cur = cur->next;
//	}
//	zero->next = NULL;
//	two->next = NULL;
//	one->next = NULL;
//	if ((zero != NULL) && (one != NULL) && (two != NULL)) {
//		zero->next = one_h;
//		one->next = two_h;
//		head = zero_h;
//	}
//	else if ((zero != NULL) && (one != NULL)) {
//		zero->next = one_h;
//		head = zero_h;
//	}
//	else if ((zero != NULL) && (two != NULL)){
//		zero->next = two_h;
//		head = zero_h;
//	}
//	else if ((one != NULL) && (two != NULL)) {
//		one->next = two_h;
//		head= one_h;
//	}
//	else if (zero != NULL){
//		head = zero_h;
//	}
//	else if (one != NULL){
//		head = one_h;
//	}
//	else if (two != NULL){
//		head = two_h;
//	}
//}