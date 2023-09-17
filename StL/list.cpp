#include<bits/stdc++.h>
using namespace std;
int main() {
    list<int> list_1={1,3,4,5};
    list<int> list_2={7,8,9};

    // cout<< list_1[2]<<endl; // this type of direct access is not possible in list
    
    list_1.merge(list_2);
    list_1.remove(8);  // remove element 8 from the list
    list_1.resize(7);  // resize list_1 with size 7 if resized size is greater than the previous one then it intializes the extra added elements with 0 


    for(int i: list_1){
        cout<<i<<" ";
    }cout<<endl;

    list<int>::iterator itt=list_1.begin();
    
    advance(itt,3); // now iterator will point to element at index 3; itt=itt+3 : this is invalid
    
    list_1.erase(itt); /*after l.erase() function call itt will get destroyed automatically*/

    /* list_1.insert(list_1.begin()+2,34); list_1.begin()+2 is not allowed in list ,
    insted of doing that we initilize a iterator and give the iterator as parameter in list.erase() or list.insert() function */
    
    list<int> ::iterator it=list_1.begin();
    advance(it,5);

    list_1.insert(it,43); // 43 will be inserted at index 5
    list_1.insert(it,43); // 43 will be inserted at index 5
    
    list_1.unique();  // all the duplicate elemnt from the list will be deleted and now list contain only unique elements;
     

    for(int i: list_1){
        cout<<i<<" ";
    }cout<<endl;


    // cout<< "size of list_2: "<<list_2.size()<<endl;


    

    return 0;   
}