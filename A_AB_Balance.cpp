//optimal
#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s[0]!=s[s.size()-1])
            s[0] = s[s.size()-1];

        cout << s << endl;
    }
    return 0;
}
