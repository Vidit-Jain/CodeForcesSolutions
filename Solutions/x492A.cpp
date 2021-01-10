#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int levels=1;
    int sum=1;
    int adder=3;
    int adderlevel2=3;
    while(1){
        sum+=adder;
        adder+=adderlevel2;
        adderlevel2++;
        if(sum>n)break;
        levels++;
    }
    cout<<levels<<endl;
}