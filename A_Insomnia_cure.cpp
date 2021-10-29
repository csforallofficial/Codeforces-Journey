#include<iostream>
using namespace std;

int main(){
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int arr[d+1]={0};
    for(int i = k; i <= d; i+=k)
        if(arr[i]==0)
            arr[i] = 1;
    for(int i = l; i <= d; i+=l)
        if(arr[i]==0)
            arr[i] = 1;
    for(int i = m; i <= d; i+=m)
        if(arr[i]==0)
            arr[i] = 1;
    for(int i = n; i <= d; i+=n)
        if(arr[i]==0)
            arr[i] = 1;
    int ans = 0;
    for(int i = 1; i <= d; i++)
        if(arr[i]==1)
            ans++;
    cout << ans << endl;
    return 0;
}