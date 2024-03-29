//{ Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int solve(int d,Node* head1, Node* head2)
{
    Node* temp1=head1;
    Node* temp2=head2;
    for(int i=0;i<d;i++)
    {
        if(temp1==NULL)
            return -1;
        temp1=temp1->next;
    }
    while(temp1 && temp2)
    {
        if(temp1 == temp2)
            return temp1->data;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return -1;
}
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    if(head1==NULL || head2==NULL)
        return -1;
    Node* temp1=head1;
    Node* temp2=head2;
    int c1=0,c2=0;
    while(temp1!=NULL)
    {
        c1+=1;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        c2+=1;
        temp2=temp2->next;
    }
    temp1=head1;
    temp2=head2;
    int d;//as we dont know which of c1 or c2 is larger
    if(c1>=c2)
    {
        d=c1-c2;
        return solve(d,head1,head2);
    }
    else
    {
        d=c2-c1;
        return solve(d,head2,head1);
    }
    return -1;
    
}

