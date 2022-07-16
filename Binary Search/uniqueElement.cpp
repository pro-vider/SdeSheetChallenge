int uniqueElement(vector<int> nums, int n)
{
	// Write your code here
      int low=0;
        int high=n-2;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(mid%2==1)
            {
                if(nums[mid]==nums[mid+1])
                    high=mid-1;
                else
                    low=mid+1;
            }
            else
            {
                if(nums[mid+1]==nums[mid])
                    low=mid+1;
                else
                    high=mid-1;
            }
                
        }
            return nums[low];

}
