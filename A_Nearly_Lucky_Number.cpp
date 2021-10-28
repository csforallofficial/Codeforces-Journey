#include <iostream>
#include <string>
using namespace std;

int main ()
{
    long long i;
    cin >> i;
    bool flag = true;
    string s = to_string(i);
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='7' || s[i]=='4')
            count++;
    }
    string ans = to_string(count);
    for(int i = 0; i < ans.size(); i++){
        if(ans[i]!='7' && ans[i]!='4')
            flag = false;
    }
    if(flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
  return 0;
}