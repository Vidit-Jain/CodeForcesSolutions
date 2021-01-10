#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
void setzero(int *arr,int len,int index){
    arr[index-1]++;
    for(int i=index;i<len;i++){
        arr[i]=0;
    }
}
ll powerfun(ll base, ll exp){
    ll ans=1;
    for(int i=0;i<exp;i++){
        ans*=base;
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        string str;
        ll oldnum=0;
        int s,sum=0;
        cin>>str>>s;
        int len=str.size()+1;
        int n[len]={0};
        n[0]=0;
        for(int i=1;i<len;i++){
            char something=str.at(i-1);
            n[i]=ctoi(something);
        }
        int counter=0;
        for(int i=len-1;i>=0;i--){
            oldnum+=(powerfun(10,counter)*n[i]);
            counter++;
        }
        
        for(int i=1;i<str.size()+1;i++){
            if(n[i]>=10){
                setzero(n,str.size()+1,i);
                sum=0;
                i=-1;
                continue;
            }
            sum+=n[i];
            if(sum>s){
                setzero(n,str.size()+1,i);
                sum=0;
                i=-1;
            }
        }
        ll newnum=0;
        for(int i=len-1;i>=0;i--){
            newnum+=powerfun(10,len-1-i)*n[i];
        }
    
        cout<<newnum-oldnum<<"\n";
        
    }
}