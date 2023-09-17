// #include<iostream>
// using namespace std;

// int getSum(int *arr, int size) {
//     //base case
//     if(size == 0) {
//         return 0;
//     }
//     if(size == 1 )
//     {
//         return arr[0];
//     }
//     int remainingPart = getSum(arr+1, size-1);
//     cout<< "Remainig part: "<< remainingPart <<endl;
//     int sum = arr[0] + remainingPart;
//     cout<< "Sum is: "<<sum<<endl<<endl; 
    
//     return sum;
// }

// int main() {

//     int arr[5] = {2,4,9,9,9};
//     int size = 5;
    

//     int sum = getSum(arr, size);

//     cout << "Sum is " << sum << endl;

//     return 0;
// }

//linear search using recursion 
// #include<bits/stdc++.h>
// using namespace std;
// void print(int *arr, int size){
//     for(int i=0; i< size; i++){
//         cout<< arr[i]<<" ";
//     }
// }
// bool linearSearch(int *arr, int size, int key){
//     print(arr,size); // for seeing how array is passed recursively
//     cout<< endl;
//     if(size==0){
//         return false;
//     }

//     if(arr[0]==key){
//         return true;

//     }

//     else{
//         return (linearSearch(arr+1, size-1,key));
//     }
// }
// int main() {
    
//      int arr[]={2,657,675,23,65, 756,87,23};
//      bool a=linearSearch(arr,8, 65);
//      cout<<a<<endl;
// return 0;
// }

// binary Search using reccursion
// #include<bits/stdc++.h>
// using namespace std;
// void print(int *arr, int i, int j){
//     for(; i<=j; i++){
//         cout<< arr[i]<<" ";
//         }
        
// }
// bool binarySerach(int *arr, int i, int j, int key ){
//     print(arr,i,j);
//     cout<<endl;
//     if(i>j){
//         return false;
//     }
//     int mid=(i+j)/2;
//     if(arr[mid]==key){
//         return true;
//     }
//     if(arr[mid]>key){
//         return binarySerach(arr,i,mid-1,key);
//     }
//     else{
//         return binarySerach(arr,mid+1,j, key);
//         }
// }

// int main() {
//     int arr[]={2,65,675,23,65, 756,87,23};
//     sort(arr, arr+8);

//     cout<<endl;
//     bool s=binarySerach(arr,0,7,87);
//     cout<< s;

// return 0;
// }

// reverse string using recursion

// #include<bits/stdc++.h>
// using namespace std;
// void rev(string &s,int i, int j){
//     if(i>j){
//         return;
//     }
//     else{
//         swap(s[i],s[j]);
//         i++, j--;
//         return rev(s,i,j);
//     }
// }
// int main() {
//     string s="Ramesh";
//     rev(s,0,s.size()-1);  
//     cout<< s;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool palindrome(string s, int i, int j){
//     if(i> j){
//         return true;
//     }
//     if(s[i] != s[j]){
//         return false;
//     }
//     else{
//         return palindrome(s, i+1, j-1);
//     }
// }
// int main() {
//         string s="racerdcar";
//         bool a=palindrome(s, 0, s.size()-1);   
//         cout<< a;
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int power(int a, int b) {
    // Base case 1: When the exponent (b) is 0, any number raised to 0 is 1.
    if (b == 0)
        return 1; 

    
    // Recursive step: Calculate the result by dividing the exponent (b) by 2 and making a recursive call.
    int ans = power(a, b / 2);

    // Calculate the square of the result to reduce redundant calculations.
    int ansSquared = ans * ans;
    
    // Check if the exponent (b) is even.
    if (b % 2 == 0)
        // If the exponent is even, the result is simply the square of the recursive result.
        return ansSquared;
    else
        // If the exponent is odd, multiply the base (a) with the square of the recursive result.
        return a * ansSquared;
}
int main() {
    int a= power(2.1,3);
    cout<< a; 
return 0;
}

