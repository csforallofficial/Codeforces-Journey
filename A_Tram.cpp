#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0, maxi = INT_MIN;
    while(n--){
        int a,b;
        cin >> a >> b;
        sum -= a;
        sum += b;
        maxi = max(maxi,sum);
    }
    cout << maxi << endl;
    return 0;
}