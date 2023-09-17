// backtrack(ind,digit,map,temp,res){
//     if(ind==0){
//         res.push_back(temp);
//     }
//     int i= digit[ind]-'0';
//     string val = map[i];// this will give the string 
//     for(int j=0; j<val.size(); j++){
//         temp.push_back(val[j]);
//         backtrack(j+1,digit,map,temp,res);
//         temp.pop_bacK();
//     }
// }

    #include<bits/stdc++.h>
    using namespace std;

    void backtrack(int index,string digits,string map[],string temp,vector<string>&res){
        if(index>=digits.size()){
            res.push_back(temp);
            return;
        };

        int num=digits[index]-'0';
        string value=map[num];
        for(int i =0; i<value.size(); i++){
            temp.push_back(value[i]);
            backtrack(i+1,digits,map,temp,res);
            temp.pop_back();
        }

    }

    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string temp;
        backtrack(0,digits,map,temp,res);
        return res;
    }

    int main(){
        vector<string> res= letterCombinations("23");
        for(string s: res){
            cout<< s<< " "; 
        }

    }