#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,5,6,9,8,0,54,5,21,1};
    int ans=0;
    for(int i=0;i<vec.size();i++){
        ans+=vec[i];
    }
    cout<<ans<<"\n";
    return 0;
}
