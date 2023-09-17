#include<bits/stdc++.h>
using namespace std;
int main() {
    // how to implement binary_search()
    vector <int> a{1,2,3,4,5,6,4,1,6};
    sort(a.begin(), a.end());  // we have to sort the vector before applying binary search 
    bool found= binary_search(a.begin(), a.end(), 7);
    bool found2= binary_search(a.begin(), a.end(), 4);

    cout<< "7 is present or not : " <<found<<endl;
    cout<< "4 is present or not : " <<found2<<endl;

    // reverse() function
    cout<<"Before reversing vector a: "<<endl;
    for(int I: a){
        cout<< I<<" ";
    }
    
    reverse(a.begin(), a.end());
    
    cout<< endl<<"Reversed a: "<<endl;
    for(int i: a){
        cout<< i<<" "; 
    }cout<< endl;


    // find the maximum/minimum  element *max_element(start, last)  *min_element(start, last)
    int maxi= *max_element(a.begin(), a.end());
    int mini= *min_element(a.begin(), a.end());
    cout<< "Max element in vector a: "<< maxi<<endl;
    cout<< "Min element in vector a: "<< mini<<endl;


    // sum of all element of vector
    int sum = accumulate(a.begin(),a.end(),0);
    cout<< "sum : "<< sum<<endl;


    /*count() — To count the occurrences of x in vector.
    Syntax:
        count(first,last,x)
        first — is the index (pointer) of the first element.
        last — is the index (pointer) of the last element.
        x- value to count
    */
    int c= count(a.begin(),a.end(),6);
    cout<< "Occourance of 6 in vector a : "<< c<<endl;


    /* find() — Returns an iterator to the first occurrence of x in the vector and
                if the element is not found it returns iterator to the vector's last address.
    Syntax:
    find(first, last, x)
    Here,
        first - is the index (pointer) of the first element.
        last — is the index (pointer) of the last element.
        X-value to be searched */

    auto q1=find(a.begin(),a.end(),2);
    int posi=q1-a.begin();
    cout<< "position of 2 in vector a: "<< posi<<endl;   

      


return 0;
}