#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n],b[n-1],c[n-2];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++) cin>>b[i];
    for(int i=0;i<n-2;i++) cin>>c[i];
    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);
    int count[n];
    for(int i=0;i<n;i++){
        count[i]=1;
    }
    int index1=0,index2=0;
    while(index1<n && index2<n-1){
        if(a[index1]==b[index2]){
            count[index1]++;
            index1++;
            index2++;
        }
        else if(a[index1]>b[index2])index2++;
        else index1++;
    }
    index1=0,index2=0;
    while(index1<n && index2<n-2){
        if(a[index1]==c[index2]){
            count[index1]++;
            index1++;
            index2++;
        }
        else if(a[index1]>c[index2])index2++;
        else index1++;
    }
    for(int i=0;i<n;i++){
        if(count[i]==1) cout<<a[i]<<endl;
    }
    for(int i=0;i<n;i++){
        if(count[i]==2) cout<<a[i]<<endl;
    }

}
