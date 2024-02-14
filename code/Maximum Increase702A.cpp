#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<long long> st;
    st.insert(5);
    st.insert(5);
    st.insert(7);
    st.insert(5);
    st.insert(8);
    st.insert(8);
    st.insert(9);
    st.insert(7);
    cout<<"Size is "<<st.size()<<endl;
    for(auto it: st) {
        cout<<it<<" ";
    }


}
