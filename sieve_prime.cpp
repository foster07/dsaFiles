#include<bits/stdc++.h>
using namespace std;
vector<int> primeList(int n){
    vector<bool> ans(n+1,1);
    ans[0]=0,ans[1]=0;// 0 and 1 are non prime 

    for(int i=2; i*i<=n; i++ ){
        if(ans[i]==1){
            for(int j= i*i; j<=n; j=j+i){
                ans[j]=false;
            }
        }
    }

    vector<int> res;
    for(int i=2; i<=n; i++){
    if(ans[i]==1){
        res.push_back(i);
    }
   }
    return res;
}
int main() {
    
    int a=59;
    vector<int>prime;
    prime=primeList(a);
    for(int i: prime){
        cout<< i<< " ";
    }
return 0;
}