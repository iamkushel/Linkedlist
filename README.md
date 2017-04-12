# Linkedlist
Used to insert element into the array

Linked List

Assume you have an array of elements

araay[4] = {1,2,3,4} 

now these are put in the contiguous order in the memory from 200 to 215 and there is some other varaible stored in the memory after that at 216.

But later you decide to add some more elements to the array but there is no place in the memory, and you can't keep it else where because the pointer moves in the contiguous order.

one thing is you need to move the whole new array to a whole new block in the memory. But again you decife to add some more elements to the memory. and again you face the same problem of contiguoys memory allocation.

So what is the solution ??

the Solution is Linked list. How does it work ??


In the linked list data structure if you create an array of elements the first element will be stored in some address and adjoining address to that will store the pointer to next element in the array.
Example: if element 1 is at address location 200, 204 will store the address of pointer to element 2, the same works in a chain linking one list element to the other list element. 

Node : Each element and pointer to next address is called a Node. So in general one node will be pointing to another. Each node is 8 bytes of size for an integer node. The first node is called head node and usually in C the head Node address will aslo be pointed by a pointer at other address.

A node which contains both data and address to next data is wriiten as structure of two different data.

struct Node {

int data;            // the first will be data stored in that structure and the next will be pointer to other structure Node called link
struct Node* link;
}

		_____	     _232_236_	       _245_249_	_320_324__
		|200|------->|4	 |245|-------->|8  |320|------->|6  |0  |
		------	     ---------	       ---------	---------
		
In the above linked list the the address 200 is the node* which will be a pointer to the head node, the head node has data and Node* where data is 4 of type integer at location 232 and Node* which is at 236 is the link to next node, which is pointing to 245. The same continues, when the last element is reached the pointer to next address will be filled with 0.
