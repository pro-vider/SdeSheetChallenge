#Link-https://www.codingninjas.com/codestudio/problems/795152?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
class Stack {
	// Define the data members.
    queue<int>q;
   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return q.empty();
    }

    void push(int element) {
        // Implement the push() function.
        q.push(element);
        int sz=q.size()-1;
        while(sz--)
        {
            q.push(q.front());
            q.pop();
        }
        
        
    }

    int pop() {
        // Implement the pop() function.
        if(q.empty())
            return -1;
        int ans=q.front();
        q.pop();
        return ans;
    }

    int top() {
        // Implement the top() function.
         if(q.empty())
            return -1;
        return q.front();
    }
};
