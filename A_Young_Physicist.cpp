#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x_sum = 0, y_sum = 0, z_sum = 0;
    while(n--){
        int x,y,z;
        cin >> x >> y >> z;
        x_sum += x;
        y_sum += y;
        z_sum += z;
    }
    if((x_sum==0 && y_sum==0) && z_sum==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}