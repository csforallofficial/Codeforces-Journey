#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int least = arr[0], most = arr[0];
    int ans = 0;
    for(int i = 1; i < n; i++){
        if(arr[i]>most){
            most = arr[i];
            ans++;
        }else if(arr[i]<least){
            least = arr[i];
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}