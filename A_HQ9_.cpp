#include<iostream>
#include<string>
using namespace std;

int main(){
    string p;
    cin >> p;
    bool flag = false;
    for(int i = 0; i < p.size(); i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            flag = true;
            break;
        }
    }
    if(flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}