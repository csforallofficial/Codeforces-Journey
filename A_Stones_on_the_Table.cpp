#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 1;
    char po = s[0];
    for(int i = 1; i < n; i++){
        if(s[i]!=po){
            count++;
            po = s[i];
        }
    }
    cout << n - count << endl;
    return 0;
}