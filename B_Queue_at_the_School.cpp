#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n,t ;
    cin>>n>>t;     
    string S;
    cin>>S;
    while(t--){
        for(int i = 0 ; i<n-1 ; i++){
            if(S[i] == 'B' && S[i+1] == 'G'){
                S[i] ='G';
                S[i+1] ='B';
                i++;
            }
        }
    }
    cout<<S<<endl;
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