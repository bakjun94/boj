#include <iostream>
#include <vector>  //ctrl + space하면 단축키 뜸
using namespace std;


int main(){
    int N,B;
    cin>>N>>B;
    cout<<'a';
    vector<vector<int>> v(N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int a;
            cin>>a;
            v[i].push_back(a);
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<v[i][j];
        }
    }    

    return 0;
}
