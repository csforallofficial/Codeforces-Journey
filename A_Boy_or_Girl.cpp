#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    cin >> s;
    unordered_map<char,int> mp;
    int count = 0;
    for(int i = 0 ; i < s.size(); i++){
        if(mp.find(s[i])!=mp.end())
            continue;
        else{
            mp[s[i]] = i;
            count++;
        }
    }
    if(count%2)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
    return 0;
}