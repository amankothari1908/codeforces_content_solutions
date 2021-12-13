#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string s;
    cin>>s;
    string temp = s ;
    transform(temp.begin(),temp.begin()+1,temp.begin(),::toupper);     
    cout<<temp<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test = 1 ;
    // cin>>Test;
    while(Test--){
        solve();
    }
    return 0;
}