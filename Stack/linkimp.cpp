// C++ program to Implement a stack using singly linked list
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* link;
};
struct Node* top=NULL;
//insert at the beginning
void push(int data)
{
	// Create new node temp and allocate memory
	struct Node* temp;
	temp = new Node();
	if (!temp)
	{
		cout << "\n Stack Overflow";
		return;
	}
	temp->data = data;
	temp->link = top;
	top = temp;
}

bool isEmpty()
{
	return top == NULL? true:false;
}
void peek()
{
	
	// Check for empty stack
	if (isEmpty()==false)
		cout<< top->data<<endl;
	else
		cout<<"empty stack \n";
}
void pop()
{
	struct Node* temp;
	// Check for stack underflow
	if (top == NULL)
	{
		cout << "\nStack Underflow" << endl;
		return;
	}
	else
	{
		// Top assign into temp
		temp = top;
		// Assign second node to top
		top = top->link;
		// Destroy connection between
		// first and second
		temp->link = NULL;

		// Release memory of top node
		free(temp);
	}
}

// Function to print all the
// elements of the stack
void display()
{
	struct Node* temp;

	// Check for stack underflow
	if (top == NULL)
	{
		cout << "\nStack Underflow";
		exit(1);
	}
	else
	{
		temp = top;
		while (temp != NULL)
		{

			// Print node data
			cout << temp->data << "-> ";

			// Assign temp link to temp
			temp = temp->link;
		}
	}
    cout<<endl;
}

// Driver Code
int main()
{
	push(11);
	push(22);
	push(33);
	push(44);
    display();
    peek();
    pop();
    pop();
    peek();
    pop();
    pop();
    display();
    peek();
    isEmpty();
	return 0;
}

