int search(int* nums, int n, int target) {
    // Write your code here.
     int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[low]<=nums[mid])
            {
                if(target>=nums[low] and target<=nums[mid])
                    high=mid-1;
                else
                    low=mid+1;
            }
            else
            {
                if (nums[mid] <= target && target <= nums[high])
                   low = mid+1;
               else
                   high = mid-1;
            }
            
        }
        return -1;
}
