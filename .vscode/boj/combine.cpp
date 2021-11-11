#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef long long ll;

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
        sort(v[i].begin(),v[i].end());
	}

	for(int i=0;i<n;i++){
        add=v[i][0]*(v[i].size()-1);
        cout<<add<<" ";
        for(int j=1;j<v[i].size();j++){
            add=add+v[i][j]*(v[i].size()-j);
            cout<<add<<" ";
        }
        
        cout<<add<<endl;
    }
    return 0;
} 