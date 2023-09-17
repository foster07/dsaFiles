/*deques are not stored in contiguous memory location like vector/array.
But direct access and iteration to each element is possible.
we can insert a element to a desired position , but it is not much effecient like in case of list or forward_list;  
adding/removing  element at beginning and last is very effecient in deques. 
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    deque<int> d;
    d.push_front(4);
    d.push_back(3);
    d.push_back(5);
    d.push_back(6);
    
    for(int i: d){
        cout<< i<< " ";
    }cout<<endl;
    
    d.insert(d.begin()+1,34);  // 34 will be inserted at index 1
    for(int i=0; i<d.size();  i++){
        cout<<d[i]<<" ";
    }cout<<endl;

    vector<int> v= {2,3,4,5,6,7};
    vector<int> :: iterator it;
    it=v.begin();

    d.insert(d.begin()+2,5,4); // 4 will be inserted 5 times at index 2
    for(int i: d){
        cout<< i<< " ";
    }cout<<endl;

    d.insert(d.begin()+1,v.begin(),v.end()); // all vector elements will be inserted at index 1
    for(int i: d){
        cout<< i<< " ";
    }cout<<endl;


    d.erase(d.begin(),d.begin()+3);    // elemnets at index 0,1,2 will be deleted ; Note:- elements at index 3 will not be erased
    for(auto iter= d.begin(); iter!= d.end(); iter++){
            cout<< *iter<< " ";  
    }cout<<endl;
    
    /* d.end() points to a pseudo location after the last element present in the deque .
    so to iterate till last element, loop only go to i<d.end() or i != d.end() */
return 0;
}


