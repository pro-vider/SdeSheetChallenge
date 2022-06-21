#Link-https://www.codingninjas.com/codestudio/problems/1112628?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

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

Node *firstNode(Node *head)
{
	//    Write your code here.
    if(!head or head->next==NULL)
        return NULL;
    Node *fast=head;
    Node *slow=head;
    while(fast->next!=NULL and fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
            Node* entry=head;
            while(slow!=entry)
            {
                slow=slow->next;
                entry=entry->next;
            }
            return entry;
        }
    }
    return NULL;
}

#Time Complexity-O(N)
#Space Complexity-O(1)
