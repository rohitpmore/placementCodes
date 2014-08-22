#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
struct Node
{
	int data;
	Node* next;
	Node* prev;
};
/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
  
  cout << "Entered inside..";
  Node *p,*q,*r;

  p=head;

  cout << "Head is" << head->data << "\n";
  
  if(p==NULL)
    return p;
  
  q=p->next;
  
  while(q != NULL)
    {
      cout << p->data << endl;
      cout << q->data << endl;
      cout << r->data << endl;

    r=q->next;
    q=p->next;
    p->next=p->prev;
    q->next=p;
    p->prev =q;
    p=q;
    q=r;
    
  }
  
  return p;
  
}

Node* Insert(Node *head, int data)
{
	Node *temp = new Node();
	temp->data = data; temp->prev = NULL; temp->next = NULL;
	if(head == NULL) return temp;
	head->prev = temp;
	temp->next = head;
	return temp;
}
void Print(Node *head) {
	if(head == NULL) return;
	while(head->next != NULL){ cout<<head->data<<" "; head = head->next;}
	cout<<head->data<<" ";
	while(head->prev != NULL) { cout<<head->data<<" "; head = head->prev; }
	cout<<head->data<<"\n";
}
int main()
{
	int t; cin>>t;
	Node *head = NULL;
	while(t--) {
	   int n; cin>>n;
           head = NULL;
	   for(int i = 0;i<n;i++) {
		   int x; cin>>x;
		   head = Insert(head,x);
	   }
     cout <<"\n";
     Print(head);
     cout << "Entering";
	   //head = Reverse(head);
	   Print(head);
	}
}