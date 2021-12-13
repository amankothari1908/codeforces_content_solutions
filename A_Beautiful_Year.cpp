#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans = n ; 
    while(1){
        ans++;
        int temp = ans;
        int a = temp % 10 ;
        temp = temp/10;
        int b = temp % 10;
        temp = temp/10;
        int c = temp%10;
        temp = temp/10;
        int d = temp%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
    }
    cout<<ans<<endl;
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