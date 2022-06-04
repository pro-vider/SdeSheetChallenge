#link- https://leetcode.com/problems/n-queens/

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string>board(n,string(n,'.'));
        solve(board,0,n,ans);
        return ans;
    }
    void solve(vector<string>& board,int col,int n,vector<vector<string>>& ans)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
           if(issafe(board,n,row,col))
            {
                board[row][col]='Q';
                solve(board,col+1,n,ans);
                board[row][col]='.';
            }
        }
    }
    bool issafe(vector<string>& board,int n,int row,int col)
    {
        int duprow=row;
        int dupcol=col;
        while(dupcol>=0)
        {
            if(board[row][dupcol]=='Q')
                return false;
            dupcol--;
        }
        dupcol=col;
        while(duprow>=0 and dupcol>=0)
        {
            if(board[duprow--][dupcol--]=='Q')
                return false;
        }
        duprow=row;
        dupcol=col;
        while(duprow<n and dupcol>=0)
        {
            if(board[duprow++][dupcol--]=='Q')
                return false;
        }
        return true;
    }
};

#Time Complexity-Exponential in nature, since we are trying out all ways. To be precise it goes as O(N! * N) nearly.
#Space Complexity- O(N*N).
