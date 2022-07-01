string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
        
    string str1=arr[0];
    for(int i=1;i<n;i++)
    {
        string str2=arr[i];
        int ind=0;
        while(str1[ind]==str2[ind]) ind++;
        str1=str1.substr(0,ind);
    }
    return str1;
}


