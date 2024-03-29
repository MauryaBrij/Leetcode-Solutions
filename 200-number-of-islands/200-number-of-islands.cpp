class Solution {
public:
    //Helper DFS function
    void DFS(vector<vector<char>> &grid, int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()) return;
        
        if(grid[i][j]=='0' || grid[i][j]=='2') return;
        
        grid[i][j]='2';
        
        DFS(grid,i+1,j);
        DFS(grid,i,j+1);
        DFS(grid,i,j-1);
        DFS(grid,i-1,j);
    }
    //main working function
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    DFS(grid,i,j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};