#include<bits/stdc++.h>
using namespace std;
int main() {
    // int *a = new int; 
    // cout<< a<< endl; // a is a pointer that stored the address of a int which is created in the heap memory (dynamically)
    // delete a; 


    // int n ;
    // cout<< "Enter the size of the array,to be made dynamically: ";
    // cin>> n;
    // int *ptr= new int [n]; // array of size n is created dynamically in the heap memory , and the address of its first element is returned to the pointer *ptr

    // // taking input in the array
    // for(int i=0; i< n; i++){
    //     cin>> ptr[i];
    // }

    // // printing the array 
    // for(int i=0; i< n; i++){
    //     cout<<  ptr[i]<<" ";
    // }

    // we have to free the dynamically allocated memory manually in order to prevent the memory leakage : syntax to free memory::-
    // delete []ptr;  // array memory will be freed from the heap


    // Creating 2d dynamic array
    int row,col;
    cout<< "Enter row and coloumn: ";
    cin>> row >> col;
    cout<< "Row and column inputed sucessfully"<<endl;

    cout<< "Now input the elements of 2d array"<<endl;
    int **p = new int* [row];
    for(int i=0; i<row; i++){
        p[i]= new int [col]; 
    }
    
    // taking input to the 2d array
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>> p[i][j]; 
        }
    }

    // printing output of the 2d array
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<  p[i][j] <<" "; 
        }
        cout<< endl;
    }

    // we have to free the dynamically allocated memory manulally after its use . These memory will erased after program termination.
    // Steps to delete(free up ) dynamically allocated 2d array:-
    for(int i=0; i<row; i++){
        delete [] p[i];
    }
    delete [] p;


return 0;
}