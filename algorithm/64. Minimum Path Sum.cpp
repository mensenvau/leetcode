class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        int a[n][m];
        
        for(int i=n-1;i>=0;i--)
            for(int j=m-1;j>=0;j--)
            {
                if(i+1<n && j+1<m) a[i][j]=min(a[i][j+1],a[i+1][j]);
                else 
                if(i+1<n) a[i][j] = a[i+1][j];
                else 
                if(j+1<m) a[i][j] = a[i][j+1];
                else 
                a[i][j]=0;
            
                a[i][j]+=grid[i][j];
            }
        
        return a[0][0];
    }
}; 

// minimal yo'l 
// Runtime: 4 ms, faster than 98.60% of C++ online submissions for Minimum Path Sum.
// Memory Usage: 9.8 MB, less than 63.22% of C++ online submissions for Minimum Path Sum.   