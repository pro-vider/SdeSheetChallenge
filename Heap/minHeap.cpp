#Link-https://www.codingninjas.com/codestudio/problems/min-heap_4691801?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

//vector<int> h;
void pushHeap(vector<int> &h, int t){
    h.push_back(t);
    int idx = h.size()-1;
    while(idx){
        if(h[idx]<h[(idx-1)/2]){
            t = h[idx];
            h[idx]=h[(idx-1)/2];
            h[(idx-1)/2]=t;
        }
        idx=(idx-1)/2;
    }
}

void removeHeap(vector<int> &h){
    int idx = 0;
    h[0]=INT_MAX;
    while(idx*2+2<h.size()){
        if(h[idx*2+1]<=h[idx*2+2]){
            h[idx]=h[idx*2+1];
            h[idx*2+1]=INT_MAX;
            idx=idx*2+1;
        }else{
            h[idx]=h[idx*2+2];
            h[idx*2+2]=INT_MAX;
            idx=idx*2+2;
        }
    }
}vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
    vector<int> h;
    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        if(q[i][0]==0)
            pushHeap(h,q[i][1]);
        else
        {
            ans.push_back(h[0]);
            removeHeap(h);
        }
    }
    
    return ans;
}


