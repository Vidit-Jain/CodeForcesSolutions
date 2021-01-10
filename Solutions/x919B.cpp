#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPerfect(int num){
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    return sum==10;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int count=0;
    int i=0;
    while(count!=n){
        i++;
        if(isPerfect(i)) count++;
    
    }
    cout<<i<<endl;
    
}
