// #include<bits/stdc++.h>
// using namespace std;
// vector<string> subsequences(string str){
	
// 	vector<string>res;
//         res.push_back({""});
//         for(char ch: str){
// 			int size=res.size();
// 			for(int i=0; i<size; i++){
// 				string temp;
// 				temp=res[i];
// 				temp.push_back(ch);
// 				res.push_back(temp);
// 			}
// 		}
// 	res.erase(res.begin());
//     return res;
	
// }

// vector<string> subseq(string s){
// 	vector<string>res;
// 	res.push_back({""});
// 	for(char c: s){
// 		int size=res.size();
// 		for(int i=0; i<size; i++){
// 			string temp=res[i];
// 			temp.push_back(c);
// 			res.push_back(temp);
// 		}
// 	}
// 	return res;
// }

// int lcs(string s, string t)
// {
// 	vector<string>sub1;
// 	sub1=subseq(s);
// 	vector<string>sub2;
// 	sub2=subseq(t);
	
// 	int len=0;
// 	for(auto st: sub1){
// 		for(int i=0; i<sub2.size();i++){
// 			if(st==sub2[i]){
// 				int bbb=st.size();
// 				len =max (len, bbb);
// 			}
// 		}
// 	}
// 	return len; 

// }
// int main() {
// //    string a="adebc";
// //    string b="dcadb";
// // //    string b="adef";
// //    int c=lcs(a,b);
// //    cout<<c; 

//  string s;
 
//  cin >>s;
//  cout<<s;
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
// void func(string ar[] ){

// 	ar[1]="hel";
// }

int main(){
	// string s="hell";
	// func(s);
	// cout<< s;
	// string arr[]={"ram","rohan"};
	// func(arr);
	// for(string a: arr){
	// 	cout<< a<< " ";
	// }

	// vector<vector<int>> a;
	// a.push_back({1,2,3});
	// a.push_back({4,5,6});
	// a.push_back({7,8,9});
	// for(vector e: a){
	// 	for(int i: e){
	// 		cout<< i<<" ";
	// 	}
	// }
	set<int>s;
	s.insert(23);
	

}

