// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     // string s;
//     // getline(cin,s);
//     // cout << s<<endl;

//   //    int p,t;
//   //  float rate,ans;
//   //  cin>>p>>rate>>t;
//   //  ans=(p*rate*t)/100;
//   //  cout<<ans;

//   int a=2;
//   switch (a)
//   {
//   case 1:
//     cout<<"one";

//   case 2:
//     cout<<"two";

//   case 3:
//     cout<<"three";

//   default:
//     cout<< "default";
//     break;
//   }
// return 0;
// }

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main() {
//     int basic;
//     char grade;
//     cin>> basic;
//     cin>> grade;

//     int hra,da,allow,pf;

//     hra= 0.2*basic;
//     da = 0.5*basic;

//     switch(grade){
//         case 'A':
//             allow=1700;
//             break;
//         case 'B':
//             allow=1500;
//             break;
//         case 'C':
//             allow=1300;
//             break;
//         default:
//             allow=1300;
//             break;
//     }
//     pf=11.0/100*basic;
//     float total= basic+hra+da+allow -pf;

//     cout<<total;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> Rotate(vector<int>&v, int k ){
//     for(int i=0; i<v.size(); i++){
//         int temp=
//     }
// }
// int main() {
//     int a=5;
//     int b=0;
//     cout<< (a&b)<<endl;
//     cout<< -5%5 <<endl;

// return 0;
// }

// #include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>

// using namespace std;

// void kthSmallestLargest(int arr[], int n, int k) {
//     sort(arr,arr+n);
//     vector<int>temp;
//     for(int i=0; i<n ;i++){
//         temp.push_back(arr[i]);
//     }
//     for(int i=0; i<temp.size()-1; i++){
//         if(temp[i]==temp[i+1]){
//             temp.erase(temp.begin()+i);
//             i--;
//         }
//     }
//     int large=-1;
//     int small=-1;
//     for(int i=0; i<temp.size(); i++){
//         if(i+1==k){
//             small=temp[i+1];
//         }
//         if(temp.size()-k==i+1){
//             large = temp[i+1];
//         }
//     }
//     cout<<large<< " "<<small;

// }

// int main() {

//     int t;
//     cin >> t;

//     while (t > 0) {
//         int n, k;
//         cin >> n >> k;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         kthSmallestLargest(arr, n, k);
//         t--;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int searchInsert(vector<int>& arr, int m)
// {
// 	int s=0, e=arr.size()-1, mid=s+(e-s)/2;

// 	while(s<=e){
// 		if(arr[mid]==m){
// 			return mid;
// 		}
// 		else if(arr[mid]> m){
// 			e=mid-1;

// 		}
// 		else if(arr[mid]<m){
// 			s=mid+1;
// 		}
// 		mid=s+(e-s)/2;
// 	}
// 	return  s;
// }
// int main() {
// string s='d';
// s.push_back('a');
// // cout<<strlen(s);
// cout<<s;

// char a='Z'+32;
// cout<< (char)a;

// string s="hello";
// string a="ollo";
// int ind=s.find(a);
// if(ind == string:: npos)
//     cout<< ind;

// vector<vector<int> > ans;
// ans.push_back({2,3});
// ans.push_back({4,5,6,7});
// vector<int> r= ans[1];
// sort(r.begin(),r.end(),greater<int>());
// for(int i: r){
//     cout<< i<< " ";
// }

// int arr[1];
// int s=0;
// s+= arr[0];
// cout<< s;

// vector<int> a{2,3};
// vector<int> r;
// r = a;
// for(int i: r){
//     cout<< i<< " ";
// }

// vector<int> a{1,2,4,7};
// int c=searchInsert(a,9);
// cout<< c;
// int low=0,mid=0, high=a.size()-1;
// while (mid<=high)
// {
//     if(a[mid]==0){
//         swap(a[mid],a[low]);
//         mid++;
//         low++;
//     }
//     else if(a[mid]==1){
//         mid++;
//     }
//     else if(a[mid]==2){
//         swap(a[mid], a[high]);
//         high--;

//     }
// }
// for (auto I: a){
//     cout<< I<< " ";
// }

// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     // set<int> s;
//     // s.insert(2);
//     // s.insert(0);
//     // s.insert(4);
//     // s.insert(4);
//     // for(auto i: s){
//     //     cout<< i;
//     // }
//     // cout<< endl<< s.size()<< endl;
//     // s.erase(s.end());
//     // int last= *s.end();
//     // cout<< last;
//    vector<int> a;
//    cout<< a.size();

// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int countSeniors(vector<string>& details) {
//         int seniors=0;
//         for(int i=0; i<details.size(); i++){
//             string s=details[i];
//             cout<<s <<endl;
//             if(s[11]-'0'>=6){
//                 if(s[12]-'0'>0){
//                     seniors++;
//                 }
//             }
//         }
//         return seniors;
//     }
// int main()
// {

//     vector<string> details= {"7868190130M7522","5303914400F9211","9273338290F4010"};
//     int ans= countSeniors(details);
//     cout<< ans;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int*  func(){
    int *p= new int ;
    cout<< p<< " : "<< *p<<endl;
    return p;
}
int main(){

    // int *ptr= new int;
    // *ptr=34;
    // cout<< *ptr;
    // cout<< endl<<ptr;

    int *pr= func();
    *pr=432;
    cout<< pr<< " : "<< *pr<<endl;

    return 0;
}