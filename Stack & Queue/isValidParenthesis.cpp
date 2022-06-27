#Link-https://www.codingninjas.com/codestudio/problems/795104?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
bool isValidParenthesis(string e)
{
    // Write your code here.
    stack<char> st;
    for(int i=0;i<e.size();i++)
    {
        if(e[i]=='(' or e[i]=='{' or e[i]=='[')
            st.push(e[i]);
        else
        {
            if(e[i]==')')
            {
                if(st.empty() or st.top()!='(')
                    return false;
                else
                    st.pop();
            }
            else if(e[i]=='}')
            {
                if(st.empty() or st.top()!='{')
                    return false;
                else
                    st.pop();
            }
            else
            {
                if(st.empty() or st.top()!='[')
                    return false;
                else
                    st.pop();
            }
        }
    }
    return st.empty();
}
#Time Complexity-O(N)
#Space Complexity-O(N)
