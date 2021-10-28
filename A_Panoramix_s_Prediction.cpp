#include<bits/stdc++.h>
using namespace std;

vector<int> prime(1000005,1);
void sieve(){
    prime[0] = prime[1] = 0;
    for(int i = 2; i*i <= 1000005; i++){
        if(prime[i]==1){
            for(int j = i*i; j < 1000005; j += i){
                prime[j] = 0;
            }
        }
    }
}
int main(){
    sieve();
    int x, y;
    cin >> x >> y;
    if(prime[x]==1 && prime[y]==1){
        for(int i = x+1; i <= y; i++){
            if(prime[i]==1){
                if(i!=y){
                    cout << "NO" << endl;
                    break;
                } else{
                    cout << "YES" << endl;
                }
            }
        }
    }
    else
        cout << "NO" << endl;
    return 0;
}