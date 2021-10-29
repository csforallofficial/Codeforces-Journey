#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    unordered_set<int> st;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    st.insert(d);
    cout << 4-st.size() << endl;
    return 0;
}