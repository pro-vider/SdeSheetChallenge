#Link-https://www.codingninjas.com/codestudio/problems/981260?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
  int iu =0,id=n-1,jl=0,jr=m-1;
    if(id==0 or jr ==0)return ;
    while(jl<jr and iu<id) {
        int temp = mat[iu][iu];
        for(int j = jl+1;j<=jr;j++){
            swap(temp,mat[iu][j]); 
        }
        for(int i=iu+1;i<=id;i++){
            swap(temp,mat[i][jr]);
        }
        for(int j= jr-1;j>=jl;j--){
            swap(temp,mat[id][j]);
        }
        for(int i = id-1;i>=iu;i--){
            swap(temp,mat[i][jl]);
        }

        iu++;id--;
        jl++;jr--;

    }
    return;

}

#Time Complexity-O(N*N)
#Space Complexity-O(1)
