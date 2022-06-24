#Link-https://www.codingninjas.com/codestudio/problems/920454?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
/********************************

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

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
     if(!head or head->next==NULL or k==0)
           return head;
        Node* temp=head;
        int len=1;
        while(temp->next!=NULL)
        {
            ++len;
            temp=temp->next;
        } 
        k=k%len;
        int x=len-k;
        temp->next=head;
        while(x--)
        {
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
}


#Time Complexity-O(length of list)
#Space Complexity-O(1)
