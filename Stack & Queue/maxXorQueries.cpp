#Link-https://www.codingninjas.com/codestudio/problems/max-xor-queries_1382020?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &queries){
	//	Write your coode here.
    sort(arr.begin(),arr.end());
    vector<int> ans;
    
    for(int i=0;i<queries.size();i++)
    {
        int x=queries[i][0];
        int a=queries[i][1];
        int maxi=-1;
        for(int j=0;j<arr.size();j++)
        {
            if(arr[j]>a)
                break;
            else
            {
                int k=x^arr[j];
                maxi=max(maxi,k);
            }
        }
        ans.push_back(maxi);
    }
    return ans;
}

