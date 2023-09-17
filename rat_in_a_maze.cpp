#include <bits/stdc++.h>
using namespace std;

bool isSafe(int x,int y,vector<vector<int>>&m ,int n,vector<vector<int>> visited){
    if((x>=0 && x<n)&&(y>=0 && y<n) && (visited[x][y]==0) && (m[x][y])==1){
        return true;
    }
    return false;
}

void solve(int x,int y,vector<vector<int>>&m ,int n,string path,vector<vector<int>> visited,vector<string>&ans ){
    //base case
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }

    visited[x][y]=1;

    // four option to choose: L R U D
    int newx=x,newy=y-1;
    if(isSafe(newx,newy,m,n,visited)){
        path.push_back('L');
        solve(newx,newy,m,n,path,visited,ans);
        path.pop_back();
    }

    newx=x,newy=y+1;
    if(isSafe(newx,newy,m,n,visited)){
        path.push_back('R');
        solve(newx,newy,m,n,path,visited,ans);
        path.pop_back();
    } 
    
    newx=x+1,newy=y;
    if(isSafe(newx,newy,m,n,visited)){
        path.push_back('D');
        solve(newx,newy,m,n,path,visited,ans);
        path.pop_back();
    } 
    
    newx=x-1,newy=y;
    if(isSafe(newx,newy,m,n,visited)){
        path.push_back('U');
        solve(newx,newy,m,n,path,visited,ans);
        path.pop_back();
    }
    
    visited[x][y]=0;

}

vector<string> allPaths(vector<vector<int>>&m,int n){
    vector<string>ans;
    string path;
    int srcx=0;
    int srcy=0;
    vector<vector<int>> visited(n,vector<int>(n,0));

    solve(srcx,srcy,m,n,path,visited,ans);
    sort(ans.begin(),ans.end());
    return ans;

}
int main(){

    

    return 0;
}