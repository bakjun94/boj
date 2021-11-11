#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
ll min1;
//실패한 파일합치기

ll sum(vector<ll> v ,ll l,ll r){
    
    if(r-l==0){
        return v[l];
    }
    if(r-l==1){
        return v[l]+v[r];
    }
    ll all=0;
    for(ll i=l;i<r+1;i++){
        all+=v[i];
    }
    
    ll sumt=sum(v,l,r-1)+all;
    if(sumt>sum(v,l+1,r)+all)
        sumt=sum(v,l+1,r)+all;
    if(sumt>sum(v,l,(l+r)/2)+sum(v,(l+r)/2+1,r)+all)
        sumt=sum(v,l,(l+r)/2)+sum(v,(l+r)/2+1,r)+all;
    return sumt;
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