#include<iostream>
#include<algorithm>
#include<vector>
int INF = 1000000007;
using namespace std;
typedef long long ll;
/*
vector<vector<ll>> v(501,vector<ll>(501));

ll cost[501]; //각 페이지의 비용
ll sum[501]; //i까지의 합계
ll T, K, i;

int main(){
    cin>>T;
    while(T--){
        for(i=1;i<=K;++i){
            cin>>cost[i];  //각 페이지 비용 입력
            sum[i]=sum[i-1]+cost[i]; //1쪽부터 i쪽까지 합
        }
        for(int d=1;d<K;++d){
            for(int tx=1;tx+d<=K;++tx){
                int ty=tx+d;
                v[tx][ty]=INF;
            }
        }
    }
}
*/





















//실패한 파일합치기












ll sum(vector<ll> v ,ll l,ll r){
    ll all=0;
    for(ll i=l;i<r+1;i++){
        all+=v[i];
    }
    if(r-l==0){
        return 0;
    }
    else if(r-l==1){
        return v[l]+v[r];
    }

    else{
        ll min1=INF;
        for(ll mid=l;mid<r+1;mid++){
            ll sum3=sum(v,l,mid)+sum(v,mid+1,r)+all;
            if(min1>sum3)min1=sum3;
        }
        return min1;
    }
}

int main(){
	ll n, add=0;
	cin>>n;
	vector<vector<ll>> v(n);
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		for(int j=0;j<tmp;j++){
			int tp;
			cin>>tp;
			v[i].push_back(tp);
		}
	}
    
	for(int i=0;i<n;i++){
        cout<<sum(v[i],0,v[i].size()-1)<<endl;
    }

    return 0;
} 
