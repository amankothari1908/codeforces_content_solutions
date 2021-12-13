#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    for(int i =0 ; i<n ;i++){
        if(s[i] == '.'){
            cout<<0;
        }
        else if(s[i] == '-'){
            if(i+1 < n && s[i+1] == '.'){
                cout<<1;
            }else{
                cout<<2;
            }
            i++;
        }
    }   
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