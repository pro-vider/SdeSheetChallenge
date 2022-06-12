#link-https://www.codingninjas.com/codestudio/problems/980531?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int l=0;
    int r=m*n-1;
    while(l<=r)
    {
        int mid=(l+(r-l)/2);
        if(target==mat[mid/n][mid%n])
            return true;
        else if(target>mat[mid/n][mid%n])
            l=mid+1;
        else
            r=mid-1;
        
    }   
        return false;
    }

#Time Complexity-O(log(m*n))
#Space Complexity-O(1)
