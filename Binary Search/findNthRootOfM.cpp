double multiply(double base,int power)
{
    double x=1.0;
    for(int i=0;i<power;i++)
    {
        x=x*base;
    }
    return x;
}
double findNthRootOfM(int n, long long m) {
    double low=0,high=m,esp=1e-9;
    
    while((high -low)>esp){
        double mid=(low+high)/2.00000000;
    
        if(multiply(mid,n) < m){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    return low;
}
