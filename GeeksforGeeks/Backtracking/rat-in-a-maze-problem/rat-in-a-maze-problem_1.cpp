class Solution {
  public:
    vector<int> row = {1, 0, 0, -1};
    vector<int> col = {0, -1, 1, 0};
    string dir = "DLRU";
  
    bool valid(int i,int j, int n){
        if(i>=0 && i< n && j>=0 && j<n)
        return 1;
        else
        return 0;
    }
  
    void totalWays(vector<vector<int>>&maze,int i,int j,int n,string &path,vector<string>&ans,vector<vector<bool>>&visited){
        
        //base case
        if(i==n-1 && j==n-1){
            ans.push_back(path);
            return;
        }
        
        //marked visited
        visited[i][j] = 1;
        
        //loop for all direction
        for(int k=0;k<4;k++){
            
            if(valid(i+row[k],j+col[k],n) && maze[i+row[k]][j+col[k]] && !visited[i+row[k]][j+col[k]]){
                path.push_back(dir[k]);
                totalWays(maze,i+row[k],j+col[k],n,path,ans,visited);
                path.pop_back();
            }
            
        }
        
        //marked unvisited
        visited[i][j] = 0;
        
    }
  
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int n=maze.size();
        vector<vector<bool>> visited(n,vector<bool>(n,0));
        vector<string> ans;
        string path;
        
        // edge case
        if(maze[0][0]==0 || maze[n-1][n-1]==0)
        return ans;
        
        totalWays(maze,0,0,n,path,ans,visited);
        
        return ans;
    }
};