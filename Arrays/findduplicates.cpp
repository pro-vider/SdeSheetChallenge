#link-https://www.codingninjas.com/codestudio/problems/1112602?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 
int findDuplicate(vector<int> &nums, int n){
	// Write your code here.
     int slow=nums[0];
        int fast=nums[0];
        do
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
            
        }while(slow!=fast);
        fast=nums[0];
        while(fast!=slow)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
}

#Time Complexity-O(N)
#Space Complexity-O(1)
