// #include<iostream>
// using namespace std;
// int main() {
//     int n, hun,fif,twn, ten,rem=0;
//     // hun=fif=twn=ten=0;
//     cin>>n;
//     while (n!=0)
//     {
//         hun=n/100;
//         n=n%100;
//         fif=n/50;
//         n=n%50;
//         twn=n/20;
//         n=n%20;
//         ten=n/10;
//         n=n%10;

//     }
//     cout<< "Hundred--> "<< hun<<endl;
//     cout<< "Fifty--> "<<fif<<endl;
//     cout<< "Twenty--> "<< twn<< endl;
//     cout<< "Ten--> "<<ten<< endl;
// return 0;
// }

// #include <iostream>
// using namespace std;
// // int power(int a, int b){
// //     int ans=1;

// //     for (int  i =1 ; i <=b ; i++)
// //     {
// //         ans = ans*a;
// //     }
// //     return ans;

// // }
// int power()
// {
//     int a, b;
//     cout << "Enter base and power" << endl;
//     cin >> a >> b;
//     int ans = 1;
//     for (int i = 0; i < b; i++)
//     {
//         ans = ans * a;
//     }
//     return ans;
// }
// int main()
// {
//     // int s, b;
//     // cin >> s >> b;
//     // int a = power(s, b);
//     // cout << a;

//     int a=power();
//     cout<< a;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int factorial(int a)
// {
//     int fact = 1;
//     for (int i = 1; i <= a; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int ncr(int n, int r)
// {
//     int num = factorial(n);
//     int den = factorial(r) * factorial(n - r);
//     int ans = num / den;
//     return ans;
// }
// int main()
// {
//     int a = factorial(0);
//     int b = factorial(1);
//     int c = factorial(4);
//     cout << a << endl
//          << b << endl
//          << c << endl;
//     int d = ncr(4, 0);
//     int e = ncr(5, 3);
//     int f = ncr(6, 3);
//     cout << d << endl
//          << e << endl
//          << f << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool isPrime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int a;
//     cin >> a;
//     if (isPrime(a))
//         cout << a << " Is a prime num";
//     else
//         cout << a << " is not a prime num " << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool isEven(int n){
//     if (n&1==0)
//     {
//         return 1;
//     }
//     return 0;
// }
// int main() {

//     int a= isEven(45);
//     if (a ) cout<< "even num";
//     else cout<< "odd num";
// return 0;
// }

// #include <iostream>
// using namespace std;
// int Fab(int n)
// {
//     if (n == 1)
//         return 0;
//     if (n == 2)
//         return 1;
//     int a = 0, b = 1, sum = 0;
//     for (int i = 1; i < n-1 ; i++)
//     {
//         sum = a + b;
//         a = b;
//         b = sum;
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cout<< "enter the Nth term: ";
//     cin>>n;
//     int ans=Fab(n);
//     cout<< "ans: "<< ans;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int bit(int a,int b)
// {
//     int count = 0;
//     while (a)
//     {
//         if ((a&1) == 1)
//         {
//             count++;
//         }
//         a = a >> 1;

//     }
//     while (b)
//     {
//         if ((b&1) == 1)
//         {
//             count++;
//         }
//         b = b >> 1;
//     }

//     return count;
// }
// int main()
// {
//     int a= bit(8,7);
//     cout<<a;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void printArray(int arr[]){
//     int len=sizeof(arr)/sizeof(int);
//     cout<<"Printing the array : "<<endl;
//     for (int i = 0; i < len; i++)
//     {
//         cout<< "array["<<i<<"] = "<<arr[i]<<endl;
//     }

// }
// int main() {
//     int array[]={1,2,3,2,1,0};
//     // int length= sizeof(array)/sizeof(int);
//     // cout<<"Printing the array : "<<endl;
//     // for (int i = 0; i < length; i++)
//     // {
//     //     cout<< "array["<<i<<"] = "<<array[i]<<endl;
//     // }

//     printArray(array);

// return 0;
// }

// #include <iostream>
// using namespace std;
// // void reverseArray(int arr[], int a){
// //     int temp;
// //     int c=a;
// //     for (int  i = 0; i < a/2; i++)
// //     {
// //         temp=arr[i];
// //         arr[i]=arr[c-1];
// //         arr[c-1]=temp;
// //         c--;
// //     }
// void revArray(int ar[], int a)
// {
//     int start = 0;
//     int end = a - 1;
//     while (start < end)
//     {
//         swap(ar[start], ar[end]);
//         start++;
//         end--;
//     }
// }

// int main()
// {
//     int ar[] = {1, 3, 4, 6, 7, 8, 90,78};
//     // reverseArray(ar,7);
//     revArray(ar,8);
//     for (int i = 0; i < 8; i++)
//     {
//         cout << ar[i] << " ";
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// void altArr(int ar[],int a){
//     for (int i = 0; i < a; i=i+2)
//     {
//         swap(ar[i],ar[i+1]);
//     }

// }
// int main() {
//     int arr []= {1,2,3,4,5,6};
//     altArr(arr,6);
//     for (int i = 0; i < 6; i++)
//     {
//         cout<< arr[i] <<" ";
//     }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     cout<< sizeof(int)<<endl;
//     cout<< sizeof(float)<<endl;
//     cout<< sizeof(char)<<endl;
//     cout<< sizeof(double)<<endl;
//     cout<< sizeof(string)<<endl;
//     cout<< sizeof( double long);

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     cout<< (50>>1)<<endl;
// // int a= -50;
//     // cout<<a;
//     // cout<< (a<<3);
//     // cout<< (a>>2);
//     int a =1;
//     cout<< ( a<<30);
// return 0;
// }

// #include <iostream>
// #include <vector>
// #include <array>
// using namespace std;

// int main()
// {
    // array<int, 5> a;
    // for (int i = 0; i < 5; i++)
    // {
    //     a[i] = i;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a.at(i) << " ";
    // }
    // cout << endl;
    // cout << a.front() << " ";
    // cout << a.back() << endl;

    // vector<int> v;
    // cout << " capacity: " << v.capacity() << endl;
    // v.push_back(1);
    // cout << " capacity: " << v.capacity() << endl;
    // v.push_back(2);
    // cout << " capacity: " << v.capacity() << endl;
    // v[2] = 3;
    // cout << " capacity: " << v.capacity() << endl;
    // cout << " size: " << v.size();
    // v.pop_back();
    // cout << endl;
    // cout << " capacity: " << v.capacity() << endl;
    // cout << "size: " << v.size()<<endl;
    // for(int i: v){
    //     cout<<i<<" ";
    // }

    // vector<int> a(5,1);
    // for (int i : a)
    // {
    //     cout<<i<<" ";

    // }
    // cout<<endl;
    // vector<int> b(a);
    // for (int i : b)
    // {
    //     cout<<i<<" ";

    // }
//     cout<<a.size();
//     for (int i = 0; i < 5; i++)
//     {
//         a[i]=i;
//     }
//     for (int i = 0; i < 5; i++)
//     {
//      cout<<    a[i]<< " ";
//     }
//     a[5]=9;
//     cout<< a[5]<<endl;
//     cout<< a.size()<< endl;
//     cout<< a.capacity()<< endl;
//    for (int i = 0; i < 6; i++)
//     {
//      cout<<    a[i]<< " ";
//     }
    
//     return 0;
// }

// #include<iostream>
// #include<deque>
// using namespace std;
// int main() {
//     deque <int> a;
//     cout<< " size: "<< a.size()<<endl;
//     a.push_back(4);
//     a.push_front(3);
//     a.push_back(5);
//     a.push_front(2);
//     a.pop_back();
//     for (int i : a){
//         cout<< i<< " ";
//     }cout<< endl;

//     a.erase(a.begin(),a.begin()+2);
//     for (int i : a){
//         cout<< i<< " ";
//     }cout<< endl;
    
    

// return 0;
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main() {
//     stack<string> s;
//     s.push("ram");
//     s.push("ji");
//     s.push("bhagwan");
//     cout<<s.top();
// return 0;
// }

// #include<iostream>
// #include<queue>
// using namespace std;
// int main() {
//     // queue <int> q;
//     // q.push(1);
//     // q.push(3);
//     // q.push(5);
//     // int a=q.size();
//     // for (int i = 0; i < a; i++)
//     // {
//     //     cout<< q.front()<<" ";
//     //     q.pop();
//     // }
    
//     priority_queue <int> max;
//     max.push(3);
//     max.push(5);
//     max.push(1);
//     cout<<max.top();
//     priority_queue<int,vector<int>,greater<int>> min;

// return 0;
// }

// #include<iostream>
// #include<list>
// #include<set>
// using namespace std;
// int main() {
    // list<int> n;
    // for (int i : n)
    // {
    //     cout<<i<<" ";
    // }
    // n.push_front(1);
    // n.push_back(4);
        
//     set<int> s;
//     s.insert(4);
//     s.insert(3);
//     s.insert(2);
//     s.insert(2);
//     s.insert(1);
//     for (int i :s)
//     {
//         cout<< i<< " ";
//     }cout<<endl;
//     cout<< "no of 2: "<< s.count(2)<<endl;

    
// return 0;
// }

// #include<iostream>
// #include<map>
// #include<algorithm>
// using namespace std;
// int main() {
//     map < int , string> m;
//     m[1]="ram ji";
//     m[3]="hanuman";
//     m[2]="ramayana";
//     for (auto i : m)
//     {
//         cout << i.first<<" = "<<i.second<< endl;
//     }
//     string s= "Ram";
//     reverse(s.begin(),s.end());
//     cout<< s<<endl;
    
    
// return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     string s,rev;
//     cin>>s;
//     // cout<<s<<endl;
//     // fflush(stdin);
//     // getline(cin,a);
//     // cout<<a;
//     for (int i=s.size()-1; i>=0 ; i--)
//     {
//         rev.push_back(s[i]);
//     }
//       cout<< rev;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main() {
//     // int a;
//     // a++;
//     // cout<< a; 
//     string s;
//     s.push_back('r');
//     // s.push_back("[]");
//     cout<< s;

//     return 0;
// // }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string addBinary(string a, string b) {
//         string s;
//         int c= stoi(a);
//         int d= stoi(b);
//         int sum = c+d;
//         while(sum!=0){
//             int bit=sum&1;
//             if (bit) {s.push_back('1');}
//             else {s.push_back('0');}
           
//             sum=(sum>>1);
//         }
//         reverse(s.begin(),s.end());
//         return s;
//     }
// int main() {
//     // string s; 
//     // char a= (char)1;
//     // s.push_back(a);
//     // char s= 3+2;
//     // cout<<s;

//     string ans= addBinary("11","1");
//     cout<< ans;

// return 0;
// }



