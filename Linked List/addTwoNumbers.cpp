#Link-https://www.codingninjas.com/codestudio/problems/add-two-numbers-as-linked-lists_1170520?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
	        Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node *addTwoNumbers(Node *h1, Node *h2)
{
    // Write your code here.
    Node *dummy=new Node(-1);
    Node* temp=dummy;
    int carry=0;
    while(h1!=NULL or h2!=NULL or carry)
    {
        int sum=0;
        if(h1!=NULL)
        {
            sum+=h1->data;
            h1=h1->next;
        }
        if(h2!=NULL)
        {
            sum+=h2->data;
            h2=h2->next;
        }
        sum+=carry;
        carry=sum/10;
        Node* node=new Node(sum%10);
        temp->next=node;
        temp=temp->next;     
        
     }
    return dummy->next;
}

#Time Complexity-O(max(m,n))
#Space Complexity-O(n)
