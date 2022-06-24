#Link-https://www.codingninjas.com/codestudio/problems/1102307?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[j])
            arr[++j]=arr[i];
    }
    return j+1;
}

#Time Complexity-O(N)
#Space Complexity-O(1)
