#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cells=1,adder=4;
    for(int i=2;i<=n;i++){
        cells+=adder;
        adder+=4;
    }
    cout<<cells<<endl;
}