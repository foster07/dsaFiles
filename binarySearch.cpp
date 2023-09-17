// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int  binarySearch(int arr[],int size , int key ){
//     int start=0;
//     int end = size-1;
//     int mid = (start + end )/2;
//     while (start<=end)
//     {
//         if(key==arr[mid]){
//             return mid;
//         }
//         else if (key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(start+end)/2;
//     }
//     return -1;

// }
// void printArray(int arr[],int s){

//     for(int i=0; i< s; i++){
//         cout<< arr[i]<< " ";
//     }
// }
// int main() {
//     int array[]={2,4,6,8,9};
//     int index= binarySearch(array,5,4);
//     cout<< index;
// return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> searchRange(vector<int> &nums, int target)
// {
//     vector<int> ans, no;
//     no.push_back(-1);
//     no.push_back(-1);

//     int start = 0;
//     int end = nums.size();
//     int mid = (start + end) / 2;
//     while (start <= end)
//     {
//         if (nums[mid] == target)
//         {
//             if (nums[mid + 1] == target)
//             {
//                 ans.push_back(mid);
//                 ans.push_back(mid + 1);
//                 return ans;
//             }
//             else
//             {
//                 ans.push_back(mid);
//                 ans.push_back(mid - 1);
//                 return ans;
//             }
//         }
//         if (nums[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = (start + end) / 2;
//     }
//     return no;
// }
// int main() {

// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int findPivot(int arr[], int n){
//     int start=0, end=n-1;
//     int mid=start+(end-start)/2;
//     while (start<end)
//     {
//         if(arr[mid]>=arr[0]){
//             start=mid+1;
//         }
//         else{
//             end=mid;
//         }
//         mid=start+(end-start)/2;
//     }
//     return start;

// }
// int main() {
//     int arr[]={7,8,1,2,3,4,5,6};
//     int res= findPivot(arr,8);
//     cout<<res;

// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int a;
//     cin>>a;
//     (a>0)?cout<<"Pos": (a==0)?cout<<"zero": cout<<"neg";
// return 0;
// }

// class Solution
// {
// public:
//     int search(vector<int> &nums, int target)
//     {
//         int minIndex = pivotIndex(nums);

//         if (minIndex == 0)
//         {
//             int s = 0, e = nums.size() - 1, mid = (s + e) / 2;
//             while (s <= e)
//             {
//                 if (nums[mid] == target)
//                     return mid;
//                 if (nums[mid] > target)
//                 {
//                     e = mid - 1;
//                 }
//                 if (nums[mid] < target)
//                 {
//                     s = mid + 1;
//                 }
//                 mid = (s + e) / 2;
//             }
//             return -1;
//         }

//         if (nums[0] <= target && target <= nums[minIndex - 1])
//         {
//             int s = 0, e = minIndex - 1, mid = (s + e) / 2;
//             while (s <= e)
//             {
//                 if (nums[mid] == target)
//                     return mid;
//                 if (nums[mid] > target)
//                 {
//                     e = mid - 1;
//                 }
//                 if (nums[mid] < target)
//                 {
//                     s = mid + 1;
//                 }
//                 mid = (s + e) / 2;
//             }
//             return -1;
//         }
//         else
//         {
//             int s = minIndex, e = nums.size() - 1, mid = (s + e) / 2;
//             while (s <= e)
//             {
//                 if (nums[mid] == target)
//                     return mid;
//                 if (nums[mid] > target)
//                 {
//                     e = mid - 1;
//                 }
//                 if (nums[mid] < target)
//                 {
//                     s = mid + 1;
//                 }
//                 mid = (s + e) / 2;
//             }
//             return -1;
//         }

//         return -1;
//     }

//     int pivotIndex(vector<int> &nums)
//     {
//         if (nums.front() <= nums.back())
//             return 0;
//         int s = 0, e = nums.size() - 1, m = (s + e) / 2;
//         while (s < e)
//         {
//             if (nums[m] > nums[0])
//             {
//                 s = m + 1;
//             }
//             else
//             {
//                 e = m;
//             }
//             m = (s + e) / 2;
//         }
//         return m;
//     }
// };
// bool isPossible(vector<int> arr, int k, int mid) {
//   int painterCount = 1;
//   int painted = 0;
//   for (int i = 0; i < arr.size(); i++) {

//     if (painted + arr[i] <= mid) {

//       painted += arr[i];

//     }

//     else {

//       painterCount++;

//       if (painterCount > k || arr[i] > mid) {

//         return false;
//       }

//       painted = arr[i];
//     }
//   }
//   return true;
// }

// int findLargestMinDistance(vector<int> &boards, int k) {
//   int s=0, e= 0;
//   for (int i : boards) {
//       s=max(s,i);
//       e += i;
//   }
//   int ans = -1;
//   int  mid = s + (e - s) / 2;
//   while (s <= e) {
//     if (isPossible(boards, k, mid)) {
//       ans = mid;
//       e = mid - 1;
//     } else {
//       s = mid + 1;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return ans;
// }

// bool isPossible(vector<int> arr, int k, int mid)
// {
//     int painterCount = 1;
//     int painted = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {

//         if (painted + arr[i] <= mid)
//         {

//             painted += arr[i];
//         }

//         else
//         {

//             painterCount++;

//             if (painterCount > k || arr[i] > mid)
//             {

//                 return false;
//             }

//             painted = arr[i];
//         }
//     }
//     return true;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int s = 0, e = 0;
//     for (int i : boards)
//     {
//         s = max(s, i);
//         e += i;
//     }
//     int ans = -1;
//     int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (isPossible(boards, k, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// bool search(vector<int>& nums, int target) {
//     int left = 0;
//     int right = nums.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (nums[mid] == target) {
//             return true;
//         }

//         // Check if left half is sorted and target is within the sorted range
//         if (nums[left] < nums[mid]) {
//             if (nums[left] <= target && target < nums[mid]) {
//                 right = mid - 1;
//             } else {
//                 left = mid + 1;
//             }
//         }
//         // Check if right half is sorted and target is within the sorted range
//         else if (nums[mid] < nums[right]) {
//             if (nums[mid] < target && target <= nums[right]) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }
//         // In case of duplicates, move the left pointer to skip the duplicate
//         else {
//             if (nums[left] == nums[mid]) {
//                 left++;
//             }
//             if (nums[right] == nums[mid]) {
//                 right--;
//             }
//         }
//     }

//     return false;
// }

// int main() {
//     // Example usage
//     vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1, 1, 13, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
//     int target = 13;
//     bool result = search(nums, target);
//     cout << (result ? "true" : "false") << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<int> a;
//     a.push_back(2);
//     a.push_back(3);
//     a.push_back(4);
//     a.push_back(5);
//     a.push_back(6);
//     a.erase(a.begin()+1,a.begin()+3);
//     for(int i: a){
//         cout<< i << " ";
//     }
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     priority_queue<int> maxi;
//     maxi.push(2);

//     maxi.push(3);

//     maxi.push(8);
//     int j=maxi.size();
//     for(int i=0; i<j; i++){
//         cout<< maxi.top() << " ";
//         maxi.pop();
//     }
// cout<< endl<<maxi.size();
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
//  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int> temp;
//         int i=0,j=0, index=0;

//         while(i<m && j<n){
//             if(nums1[i]<=nums2[j]){
//                 temp[index]=nums1[i];
//                 i++;
//                 index++;
//             }
//             else{
//                 temp[index]=nums2[j];
//                 j++;
//                 index++;
//             }
//         }

//         while(i<m){
//             temp[index]=nums1[i];
//                 i++;
//                 index++;

//         }
//         while(j<n){
//              temp[index]=nums2[j];
//              j++;
//              index++;
//         }
//         nums1=temp;

//     }

// int main() {
//    vector<int> nums1={1,2,3,0,0,0};
//    vector<int> nums2 = {2,5,6};
//    merge(nums1,3,nums2,3);
//    for(int i: nums1){
//     cout<< i << " ";
//    }
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// int i=0;
// i--;
// cout<< i;
// vector<int> a={1,2,3};
// a[3]=4;
// a[5]=5;
// for(int i: a){
//     cout<< i<< " ";
// }
//     const int a=4;
//     float b= ++a;
//     cout<<b;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     // char  ch= 'z';
//     int a= '1'-'0';
//     // ch= ch+'z';
//     // cout<< int (ch);
//     cout<<a;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     string s= "Thisis the main string";
//     string sub= s.substr(0, 6);
//     cout<< sub <<endl;

//     int i=s.find('i');
//     cout<< i<<endl;

//     s.erase(0,4);
//     cout<< s << endl;
//     string aa="";
//     int find= aa.find("he");
//     cout<< find;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// string s="";
// cout<< s.length()<<endl;

//  vector<vector<int>> v;
//  v.push_back({1,2,3});
//  v.push_back({4,5,6,7});

//  cout<< v.size()<< endl;
//  cout<< v[0].size()<<endl;
//  cout<< v[1].size()<<endl;

// if(0<0) cout<< " hei";
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> spiralOrder(vector<vector<int> >& matrix) {

//         vector<int> ans;
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int count = 0;
//         int total = row*col;

//         //index initialisation
//         int startingRow = 0;
//         int startingCol = 0;
//         int endingRow = row-1;
//         int endingCol = col-1;

//         while(count < total) {

//             //print starting row
//             for(int index = startingCol; count < total && index<=endingCol; index++) {
//                 ans.push_back(matrix[startingRow][index]);
//                 count++;
//             }
//             startingRow++;

//             //print ending column
//             for(int index = startingRow; count < total && index<=endingRow; index++) {
//                 ans.push_back(matrix[index][endingCol]);
//                 count++;
//             }
//             endingCol--;

//             //print ending row
//             for(int index = endingCol; count < total && index>=startingCol; index--) {
//                 ans.push_back(matrix[endingRow][index]);
//                 count++;
//             }
//             endingRow--;

//             //print starting column
//             for(int index = endingRow; count < total && index>=startingRow; index--) {
//                 ans.push_back(matrix[index][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         }
//         return ans;
//     }

// int main() {

// return 0;
// }











// #include<bits/stdc++.h>

// using namespace std;
// int main() {
    // vector<bool> a(0,0);
    // a[0]=1;
    // a[1]=1;
    // int xx=power(3,5);
    // cout<<xx;

// long long q=LONG_LONG_MAX;
// long long w=LONG_LONG_MIN;
// cout<< "long long min to max: "<<w<<" "<<q<<endl;
// long a=LONG_MAX;
// long b=LONG_MIN;
// cout<<"long min to max: "<<b<<" "<<a<<endl;
// int e=INT32_MAX;
// int r=INT32_MIN;
// cout<< "int min to max: "<< r<<" "<< e<<endl;

// // vector<string> s;
// s.push_back("ram");
// s.push_back("shyamm");
// int a=s.size();
// int b=s[0].size();
// int c=s[1].size();
// cout<<a<<" "<<b<<" "<<c<< " "<<s[0][2] <<"   "    <<(int)'a' ;
    // string ss="vmvvvvvzrvvpvdvvvvyfvdvvvvpkvvbvvkvvfkvvvkvbvvnvvomvzvvvdvvvkvvvvvvvvvlvcvilaqvvhoevvlmvhvkvtgwfvvzy";
    // float cou=0;
    // for(int i=0 ; i <ss.length(); i++){
    //         if(ss[i]=='v') cou++;
    // }
    // float ans = (cou /ss.length())*100;
    // cout<<ans<<endl;
    // // int a=ans;
    // cout<<int(ans);
// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int> ans;
//         vector<int> left(nums.size());
//         vector<int> right(nums.size());
//         int product=1;
        
//         for(int i=0 ; i<nums.size(); i++){
//             product = product*nums[i];
//             left[i]=product; 
//         }

//          product=1;
        
//         for(int j= nums.size()-1; j>=0; j-- ){
//             product= product * nums[j];
//             right[j]=product;
//         }

//         int s=nums.size()-1;
        
//         for(int k=0; k<nums.size(); k++){
//                 if(k==0){
//                     ans[k]=right[k+1];
//                 }
//                 else if(k==s){
//                     ans[k]=left[k-1];
//                 }
//                 else{
//                     ans[k]=left[k-1]* right[k+1];
//                 }
//         }
//         return ans;

//     }
// int main() {
//     vector<char> a(4);
//     int aq=4;
//     char c= '0'+4;
//     a[0]=c;
//     cout<< a[0]; 
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main() {
    int a =-5;
    cout<< (a<<4)<<endl;
    // __int8 b= 127; 
    // cout<< (int)b<<endl;

    int maxi=INT_MAX;
    cout<< (maxi<<1)<<endl;


    int mini =INT_MIN;
    cout<< INT_MIN<<" Right shift of min by2: " << (mini>> 2)<<endl;
    cout<< INT_MIN<<" Left shift of min by2: " << (mini<< 2)<<endl;

int tt=-15; 
cout<< (tt>>2);
return 0;
}