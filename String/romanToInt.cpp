int romanToInt(string s) {
    // Write your code here
    int ans=0;
    int n;
    for(int i=s.size()-1;i>=0;i--)
    {
        char ch=s[i];
        switch(ch)
        {
              case 'I': n=1;break;
              case 'V': n=5;break;
              case 'X': n=10;break;
              case 'L': n=50;break;
              case 'C': n=100;break;
              case 'D': n=500; break;
              case 'M': n=1000; break;   
        }
        if(4*n<ans)
            ans-=n;
        else
            ans+=n;
    }
    return ans;
}
