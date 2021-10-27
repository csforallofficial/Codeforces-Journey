#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int i = 0;
    string ans="";
    while(i < n){
        if(s.at(i)=='.'){
            ans += "0";
            i++;
        } else if(s.at(i)=='-'){
            if(s.at(i+1)=='.')
                ans += "1";
            else
                ans += "2";
            i+=2;
        }
    }
    cout << ans << endl;
    return 0;
}