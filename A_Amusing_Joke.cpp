#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string a,b,c;
    cin >> a >> b >> c;
    string temp = a+b;
    sort(temp.begin(),temp.end());
    sort(c.begin(),c.end());
    if(c==temp)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}