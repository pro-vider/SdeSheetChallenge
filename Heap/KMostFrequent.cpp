#Link-https://www.codingninjas.com/codestudio/problems/k-most-frequent-elements_3167808?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    int len = arr.size();
    unordered_map<int , int> mp; 
    vector<vector<int>> freq(len); 
    vector<int>ans;
    for(int x : arr){
           mp[x]++;
    }
     for(pair<int,int> x : mp){
         int first = x.first;
         int second = x.second;
         freq[second].push_back(first);
     }
        int count  = 0;
    for(int i = freq.size()-1; i>=0; i--){
        vector<int>v = freq[i];
        for(int j = 0 ; j < v.size() && count < k ; j++ ){
            ans.push_back(v[j]);
            count++;
        }
    }
    sort(ans.begin() , ans.end());
    return ans;
}
