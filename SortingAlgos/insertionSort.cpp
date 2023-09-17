#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr{3,2,6,5,2,9};

    for(int i=1; i<arr.size(); i++){
        int temp=arr[i];
        int j;
        for( j=i-1;j>=0; j-- ){
            if(arr[j]>temp){
                arr[j+1]=arr[j]; // right shft an element
            }
            else{
                break;  // no need to check further, because array is sorted in left
                } 
        }
        arr[j+1]=temp;  // update the j+1 index with temp
    }

    for(int i: arr){
        cout<< i<< " "; 
    }

return 0;
}