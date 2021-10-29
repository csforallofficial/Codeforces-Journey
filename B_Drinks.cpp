#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    double sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << fixed << setprecision(12);
    cout << sum/n << endl;
    return 0;
}