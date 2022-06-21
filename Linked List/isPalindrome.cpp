#Link-https://www.codingninjas.com/codestudio/problems/799352?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

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
 LinkedListNode<int>* reverse(LinkedListNode<int>* curr)
    {
        LinkedListNode<int>* pre=NULL;
        while(curr!=NULL)
        {
           LinkedListNode<int>* nxt=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nxt;
        }
        return pre;
    }
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(!head or head->next==NULL)
        return true;
    LinkedListNode<int> *slow=head;
    LinkedListNode<int> *fast=head;
    while(fast->next and fast->next->next)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    slow->next=reverse(slow->next);
    slow=slow->next;
    LinkedListNode<int> *dummy=head;
    while(slow)
    {
        if(slow->data!=dummy->data)
            return false;
        slow=slow->next;
        dummy=dummy->next;
    }
    return true;
}

#Time Complexity-O(N)
#Space Complexity-O(1)
