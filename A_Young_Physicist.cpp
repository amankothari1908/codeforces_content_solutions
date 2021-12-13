#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin>>n;
    int A[n][3];   
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j <3 ;j++){
            cin>>A[i][j];
        }
    }
    int sum2= 0 ;
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j <n ;j++){
            sum2+= A[j][i];
        }
        if(sum2 != 0 ){
            break;
        }
    }

    if( sum2 ==0 ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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