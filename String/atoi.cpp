class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        bool x=false;
        int i=0;
        int n=s.size();
        while(i<n and s[i]==' ')
            i++;
        if(s[i]=='+')
            i++;
        else if(s[i]=='-')
        {
            i++;
            x=true;
        }

        while(i<n)
        {
            if(s[i]>='0' and s[i]<='9')
            {
                ans=ans*10+(s[i]-'0');
                if(ans>=INT_MAX)
                    break;
            }
            else
                break;
            i++;
        }
        if(x)
            ans=ans*(-1);
        if(ans>=INT_MAX)  return INT_MAX;
        else if(ans<=INT_MIN)  return INT_MIN;
        else  return ans;
        
    }
};
