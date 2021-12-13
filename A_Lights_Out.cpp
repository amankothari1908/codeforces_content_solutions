
#define ll long long int
using namespace std;

void solve(){
    int a[3][3];
    for (int i = 0; i < 3; i++){
        for(int j= 0 ; j<3 ;j++){
            cin>>a[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++){
        for(int j= i+1 ; j<3 ;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    int o[3][3];
    for (int i = 0; i < 3; i++){
        for(int j= 0 ; j<3 ;j++){
           o[i][j] = true;
        }
    }
    
    for (int i = 0; i < 3; i++){
        for(int j= 0 ; j<3 ;j++){
            if(a[i][j] > 0){
                if(a[i][j] % 2 != 0){
                    
                }
            }
        }
        cout<<endl;
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