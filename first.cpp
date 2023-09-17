#include<iostream>
using namespace std;
int main() {

    // int a = 34;
    // float b=34.34;
    // string c="priyanshu";
    // bool d = true;
    // bool e= false;
    // cout << e <<endl;
    // cout<< d <<endl; 
    // cout << c  <<"\n" ;
    
    // cout << a << endl;

    // float q;
    // cout<< "enter a num: "<<endl;
    // cin>> q;
    // cout<<q;
    

    // int arr[]={2,4,5,4,2};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"The "<<i<<"th element of array is " <<  arr[i] << endl;
    // }
    
    // printing ASCII TABLE USING FOR LOOP 
    // for (int i = 0; i < 128; i++)
    // {
    //     char a= i;
    //     cout << i << "-->" << a <<endl;
    // }

    // Typecasting a charcter into a integer value 
    //  char a = 'c';
    // cout <<  int (a);

    char a ;
    cout<< "Enter a character: ";
    cin>> a;
    if (int (a)>=97 && int (a)<= 122)
    {
        cout<< "this is consonent";
    }
    else if (int (a )>=65 && int(a)<=90)
    {
        cout<<"This is a Alphabet";
    }
    
    
return 0;}
