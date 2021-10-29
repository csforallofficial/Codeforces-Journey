#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    if(n%2){
        cout << -1 << endl;
    } else{
        int l = 2;
        for(int i = 1; i <= n; i++){
            if(i%2){
                cout << l << " ";
                l--;
            }
            else{
                cout << l << " ";
                l += 3;
            }
        }
    }
    cout << endl;
    return 0;
}