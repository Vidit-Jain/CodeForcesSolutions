#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int boys[n];
    for(int i=0;i<n;i++){
        cin>>boys[i];
    }
    cin>>m;
    int girls[m];
    for(int i=0;i<m;i++){
        cin>>girls[i];
    }
    sort(boys,boys+n);
    sort(girls,girls+m);
    int i=0,j=0,maxpairs=0;
    for(;i<n && j<m;){
        if(abs(boys[i]-girls[j])<=1){
            maxpairs++;
            i++;
            j++;
        }
        else if(boys[i]>girls[j]){
            j++;
        }
        else i++;
    }
    cout<<maxpairs<<endl;

}