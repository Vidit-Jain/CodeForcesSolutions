#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    list<int> queue;
    int i=1;
    while(n!=0){
        if(n-i<i+1){
            queue.push_back(n);
            n=0;
        }
        else{
            queue.push_back(i);
            n-=i;
            i++;
        }
    }
    cout<<queue.size()<<"\n";
    for(auto s:queue){
        cout<<s<<" ";
    }
}