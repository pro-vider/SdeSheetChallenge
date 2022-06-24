#Link-https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                ans=max(ans,j);
                j=0;
            }
            else
                j++;
            
        }
        ans=max(j,ans);
        return ans;
    }
};

#Time Complexity-O(N)
#Space Complexity-O(1)
