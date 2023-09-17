#include<bits/stdc++.h>
using namespace std;

// this is iterative approach to find the subsets 
 vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});

        for(int i: nums){
            int n=ans.size();
            for(int j=0; j<n ; j++){
                vector<int> temp;
                temp=ans[j];
                temp.push_back(i);
                ans.push_back(temp);

            }
        }
        return ans;
    }


// optimised approach using the recursion / backtracking


int main() {
    
return 0;
}