#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, seq;
    string s;
    string ans;
    cin >> n >> seq >> s;
    for(int i = 1; i <= seq; i++){
        ans = s;
        int l = 1;
        while(l < n){
            if(s[l-1]=='B')
                swap(ans.at(l),ans.at(l-1));
            l++;
        }
        swap(ans,s);
    }
    cout << s << endl;
    return 0;
}