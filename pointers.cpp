#include<bits/stdc++.h>
#define area(l,b)(l*b)
using namespace std;
int main() {
    // int a=4; 
    // int *ptr= &a; 

    // cout<< "Adress of a: "<<ptr<<endl;
    // cout<< "Adress of a: "<<&a<<endl;
    // cout<< "Value at a : "<< a << endl;
    // cout<< "Value at a : "<< *ptr << endl;
    // cout<< "Adress of ptr+1: "<< ptr+1 << endl;
    // cout<< "val at *(ptr)+1: "<< *(ptr)+1 <<endl;  
    
    // int arr[]={2,4,5};
    // cout<< *arr +1 <<endl;    // value at index 0 will not increment
    // cout<< (*arr)++ <<endl;  // value at index 0 is printed then incremented by one 
    // cout<< *arr<< endl;      // incremented value of index is printed 

    // cout<< "Element 0 : " << 0[arr] << endl;  // we can also print the element in this way , this is valid
    // cout<< "Element 1 : " << 1[arr] << endl;   
    // cout<< "Element 2 : " << 2[arr] << endl;
    
    // cout<< sizeof(ptr)<<endl;
    // cout<< sizeof(&ptr)<<endl ;
    // cout<< sizeof(&arr)<<endl ;
    // cout<< sizeof(arr)<<endl ; // size of whole array == 4*3 =12 will be printed 

    // NULL POINTER HOW TO CREATE : ==>>
    // int *ptr=nullptr; 
    // int *pt=NULL; 
    // cout<< ptr << endl;  
    // cout<< pt  <<endl;  

    // typecasting pointer 
    int a=3;
    int *p=&a; 
    cout<< p<<endl;
    char *ch = (char*)p; 
    cout<< ch<< " "<< *ch << endl;

    int are=area(3,5);
    cout<< are<<endl;


    
    

    return 0;

}