#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string s ;
    cin>>s;
    string temp = s;
    int up=0 , lo=0 ;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z'){
            lo++;
        }
        else{
            up++;
        }
    }

    if(up > lo){
        transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
    }
    else{
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);   
    }
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