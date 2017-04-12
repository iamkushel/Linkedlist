#include <stdio.h>
#include <stdlib.h>

void print();
void insert(int x, int n);
struct Node {
	
	int data;
	struct Node* next;
};
struct Node* Head;
int main(){
	Head = NULL;
		insert(2,1);
		insert(3,2);//to insert the elements
		insert(5,3);
		insert(4,4);
		insert(9,5);
		insert(6,6);
		insert(7,4);
		print(); //to print value of elements in the node
}

void insert(int x, int n){
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1->data = x;
	temp1->next = NULL;
	if(n == 1){
			temp1->next = Head;
			Head = temp1;
			return;
	}
	struct Node* temp2 = Head;
	int i;
	for(i=0;i<n-2;i++){
/*so n-2 because if want to insert element at nth position the temp2 data should be pointed by nth-1 next address
 that is temp2(nth) = temp2.next(n-1)th also as as array starts from 0th position it is n-2*/
		temp2 = temp2->next;
	}
	temp1->next = temp2->next; 
/*remember temp1 will be pointing to the new node not temp2, 
temp2 wil be poiting to either head or temp1.next of previous node where it should attach*/
	temp2->next = temp1;
}
void print(){
	struct  Node* temp = Head;
	while (temp != NULL){
		printf("the list now:%d\n", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
