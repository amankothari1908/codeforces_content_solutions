#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int A[5][5];
    int i1=-1 , j1=-1 ;
    for(int i = 0 ; i<5 ; i++){
        for(int j=0 ; j<5; j++){
            cin>>A[i][j];
            if(A[i][j] == 1){
                i1 = i;
                j1=j;
            }
        }
    }     
    cout<<abs(i1-2) + abs(j1-2)<<endl;

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