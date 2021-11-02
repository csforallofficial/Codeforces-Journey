#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int lin_count, total = 0, input;
    for(int i = 0; i < n; i++){
        lin_count = 0;
        for(int j = 0; j < 3; j++){
            cin >> input;
            if(input==1)
                lin_count++;
        }
        if(lin_count>=2)
            total++;
    }
    cout << total << endl;
    return 0;
}