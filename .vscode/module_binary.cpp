#include <iostream>

typedef long long ll;
using namespace std;

const ll mod= 1000000007LL;

ll pow(ll a, ll b){
    ll sup=1;
    while(b>0){
        if(b&1){
            sup*=a;
            sup%=mod;
        }
        a*=a%mod;
        a%=mod;
        cout<<a<<endl;
        b/=2;

    }
    return sup;
}

int main(){
    ll N,K;
    ll A=1;
    ll B=1;
    ll B1=1;

    cin>>N>>K;
    for(ll i=1;i<=N;i++){
        A=A*i;
        A=A%mod;
    }
    //cout<<A<<endl;
    for(ll i=1;i<=K;i++){
        B=B*i;
        B=B%mod;
    }
    //cout<<B<<endl;
    for(ll i=1;i<=N-K;i++){
        B=B*i;
        B=B%mod;
    }
 
    ll B2=pow(B,mod-2)%mod;
    B1=(A%mod*B2)%mod;
    B1=B1%mod;
    cout<<B1;

    return 0;
}