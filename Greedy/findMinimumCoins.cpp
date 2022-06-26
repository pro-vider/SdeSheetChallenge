#Link-https://www.codingninjas.com/codestudio/problems/975277?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

int findMinimumCoins(int amount) 
{
    // Write your code here
    int ans=0;
    if(amount>=1000)
    {
        int x=amount/1000;
        ans+=x;
         amount%=1000;
    }
    if(amount>=500)
    {
        int x=amount/500;
        ans+=x;
        amount%=500;
    }
    if(amount>=100)
    {
        int x=amount/100;
        ans+=x;
         amount%=100;
    }
    if(amount>=50)
    {
        int x=amount/50;
        ans+=x;
         amount%=50;
    }
    if(amount>=20)
    {
        int x=amount/20;
        ans+=x;
         amount%=20;
    }
    if(amount>=10)
    {
        int x=amount/10;
        ans+=x;
         amount%=10;
    }
    if(amount>=5)
    {
        int x=amount/5;
        ans+=x;
         amount%=5;
    }
    if(amount>=2)
    {
        int x=amount/2;
        ans+=x;
         amount%=2;
    }
    if(amount==1)
        ans++;
    return ans;
}
