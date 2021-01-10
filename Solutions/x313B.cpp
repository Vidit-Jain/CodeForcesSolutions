#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int dp1[str.size()],dp2[str.size()];
    dp1[str.size()-1]=0;
    for(int i=0;i<str.size()-1;i++){
        if(str.at(i)==str.at(i+1)){
            dp1[i]=1;
        }
        else{
            dp1[i]=0;
        }
    }
    for(int i=0;i<str.size();i++){
        dp2[i]=0;
    }
    dp2[0]=dp1[0];
    for(int i=1;i<str.size();i++){
        dp2[i]=dp2[i-1]+dp1[i];
    }

    int n;
    cin>>n;
    while(n--){
        int l,r;
        cin>>l>>r;
        cout<<dp2[r-2]-(l==1?0:dp2[l-2])<<endl;
    }

}