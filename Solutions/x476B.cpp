#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fact(ll num){
    int total=1;
    for(int i=1;i<=num;i++){
        total*=i;
    }
    return total;
}
ll nCr(ll n,ll r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string drazil,dreamoon;
    cin>>drazil>>dreamoon;
    int actualposition=0;
    for(int i=0;i<drazil.size();i++){
        if(drazil.at(i)=='+') actualposition++;
        else actualposition--;
    }
    int questionmarks=0;
    int pos=0;
    for(int i=0;i<dreamoon.size();i++){
        if(dreamoon.at(i)=='+') pos++;
        else if(dreamoon.at(i)=='-') pos--;
        else questionmarks++;
    }
    int j=actualposition-pos;
    if((questionmarks+j)%2!=0 || questionmarks<abs(j)){
        cout<<0<<endl;
    }
    else{
        double ans=nCr(questionmarks,(questionmarks+j)/2)*(double)pow(0.5,(double)questionmarks);
        cout<<setprecision(10)<<ans<<endl;
    }
}