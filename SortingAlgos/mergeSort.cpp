#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int s, int e ){
    while (s<=e)
    {
        cout<< arr[s++]<< " ";
    }cout << endl;
    
}
void mergeArr(int arr[], int s, int e){
    //here arr is sorted from the index s to mid and from index mid+1 to e;
    // so we have to merge these two sorted array 
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    
    int first[len1];
    int second[len2];
    
    int mainIndex=s;
    
    for(int i=0; i<len1; i++){
        first[i]=arr[mainIndex++];
    }
    
    for(int i=0; i<len2; i++){
        second[i]=arr[mainIndex++];
    }

    int index1=0;
    int index2=0;
    mainIndex=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainIndex++]=first[index1++];
        }
        else{
            arr[mainIndex++]=second[index2++];
        }
    }

    while(index1<len1){
        arr[mainIndex++]=first[index1++];
    }
    
    while(index2<len2){
        arr[mainIndex++]=second[index2++];
    }
}
void mergeSort(int arr[], int s, int e){
    if (s>=e){
        return ;
    }
    int mid= (s+e)/2; 

    mergeSort(arr,s,mid);
    cout<< "mSort(arr,s,mid)"<<endl<< s<<" "<<e<<endl;
    print(arr,s,e);
    mergeSort(arr,mid+1,e);
    cout<< "mSort(arr,mid+1,e)"<<endl << s<<" "<<e<<endl;
    print(arr,s,e);
    mergeArr(arr,s,e);
    cout<< "mArr(arr,s,e)"<<endl<< s<<" "<<e<<endl;;
    print(arr,s,e);

}
int main() {
    int arr[6]={7,1,6,3,9,2};
    mergeSort(arr,0,5);
    for(int i=0; i<6; i++){
        cout<<arr[i]<< " ";
    }
return 0;
}