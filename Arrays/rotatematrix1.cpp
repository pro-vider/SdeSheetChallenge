#Link-https://leetcode.com/problems/rotate-image/

void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(i>j)
                    swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            int j=0,k=matrix[0].size()-1;
            while(j<k)
            {
                swap(matrix[i][j++],matrix[i][k--]);
            }
        }
        return;
    }

#Time Complexity-O(N^N)+O(N^N)
#Space Complexity-O(1)
