#Link-https://www.codingninjas.com/codestudio/problems/799897?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *newhead=NULL;
    while(head!=NULL)
    {
         LinkedListNode<int> *next=head->next;
        head->next=newhead;
        newhead=head;
        head=next;
    }
    return newhead;
}

#Time Complexity-O(N)
#Space Complexity-O(1)
