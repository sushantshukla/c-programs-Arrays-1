//Linked List K reverse
#include<bits/stdc++.h>

using namespace std;

//const int n=5;

class node
{
   public:
     int data;
    node *next;
    node (int val)
    {
        data=val;
        next=NULL;
    }
};

 	 void print(node *head)
 	 {
 	 	node* cur=head;
 	 	while(cur!=NULL)
 	 	{
 	 		cout<<cur->data<<" ";
 	 	cur=cur->next;
 	 	}
 	 	cout<<endl;

 	 }
   
   node *reverse (node *head, int k)  
{  
    node* current = head;  
    node* next = NULL;  
    node* prev = NULL;  
    int count = 0;  
    
    while (current != NULL && count < k)  
    {  
        next = current->next;  
        current->next = prev;  
        prev = current;  
        current = next;  
        count++;  
    }  
      
  
    if (next != NULL)  
    head->next = reverse(next, k);  
    return prev;  
}

void insert_at_tail(node *&head,int x)
{
    if(head==NULL)
    {
        head=new node(x);
        return;
    }
    node* cur=head;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    //node* nw=new node(x);
    //cur->next=nw;
    cur->next=new node(x);
    return;
    //return head;
}  
void buildlist(node *&head,int n)
{
int data;
while(n>0)
{
cin>>data;
insert_at_tail(head,data);
n--;
}
}
int main( )
{ 
	//node *head=linlist();
    node *head=NULL;
    int n,k;
    cin>>n>>k;
    buildlist(head,n);
       //  int k;
     //cin>>k;
    head=reverse(head,k);
    print(head);
  


	return 0;
}
//Linked list K append
#include <iostream>
using namespace std;


class node
{
    public:
    int data;
    node *next;

    node(int d)
    {
        data=d;
        next=NULL;
    }

};


void create(node *&head, int x )
{
    node *n=new node(x);

    if(head==NULL)
    {
        head=n;
        n->next=NULL;
    }
    else
    {
        node *temp=head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=n;
        n->next=NULL;
    }
}


node *knode(node *head, int k)
{
    node *fast=head;
    node*slow=head;

    int c=1;

    while(c<k)
    {
        fast=fast->next;
        c++;
    }

node *prev;


    while(fast->next!=NULL)
    {
        prev=slow;
        fast=fast->next;
        slow=slow->next;
        //prev=prev->next;
    }

    fast->next=head;
    head=slow;
    prev->next=NULL;



return head;
}



void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}



int main()
{

    int n1;
    node *head=NULL;

    int i,x,k;

    cin>>n1;
    for(i=0;i<n1;i++)
    {
       cin>>x;
       create(head,x);
    }

    cin>>k;
    k = k%n1;
    if(k==0){
        print(head);
    }else{
    node*final=knode(head,k);

    print(final);
    }

  

    return 0;
}

