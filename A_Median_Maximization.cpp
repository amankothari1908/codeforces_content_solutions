#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n , s ;
    cin>>n>>s;
    if(n>s){
        cout<<0<<endl;
        return;
    }
    if(n==1){
        cout<<s<<endl;
        return;
    }
    ll A[n] ,i = 0 ,j=n;
    double temp = s ;
    while(temp>0 && j !=0){
        double check = ceil(temp/j);
        A[i++]=check;
        temp=temp-check;
        j--;
    }
    sort(A,A+n);
    for(int i = 0; i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    if(n%2 == 0){
        cout<<A[n/2-1]<<endl;
    }else{
        cout<<A[(n/2)]<<endl;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test = 1 ;
    cin>>Test;
    while(Test--){
        solve();
    }
    return 0;
}