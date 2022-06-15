#Link-https://www.codingninjas.com/codestudio/problems/count-inversions_615?topList=striver-sde-sheet-problems

#include <bits/stdc++.h> 
long long countinv(long long *arr,int low,int mid,int high)
{
    int l=low;
    int r=mid+1;
    long long count=0;
    while(l<=mid and r<=high)
    {
        if(arr[l]>arr[r])
        {
            count+=(mid-l+1);
            r++;
        }
        else
            l++;
    }
    vector<long long> temp;
    l=low;
    r=mid+1;
    while(l<=mid and r<=high)
    {
        if(arr[l]>=arr[r])
        {
            temp.push_back(arr[r]);
            r++;
        }
        else
        {
            temp.push_back(arr[l]);
            l++;
        }
    }
    while(l<=mid)
    {
        temp.push_back(arr[l]);
        l++;
    }
    while(r<=high)
    {
        temp.push_back(arr[r]);
        r++;
    }
    for(auto i:temp) arr[low++]=i;
    return count;
}
long long merge(long long *arr,int low,int high)
{
    if(low==high)
        return 0;
    int mid=(high+low)>>1;
    long long count=0;
    count+=merge(arr,low,mid);
    count+=merge(arr,mid+1,high);
    count+=countinv(arr,low,mid,high);
    return count;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    return merge(arr,0,n-1);
}

#Time Complexity-o(nlogn)+o(n)+o(n);
#Space Complexity-o(n)
