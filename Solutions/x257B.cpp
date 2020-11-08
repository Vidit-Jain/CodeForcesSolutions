#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
int calc(int nm2[]){
    int nm[2]={nm2[0],nm2[1]};
    nm[0]--;
    int prev=0;
    int score=0;
    int turn=1;
    while(nm[0] || nm[1]){
        if(!(turn%2)){
            if(nm[prev]>0)
                score++;
            else
                prev=1-prev;
        }
        else{
            if(nm[1-prev]>0)
                prev=1-prev;
            else
                score++;
        }
        
        nm[prev]--;
        turn++;
    }   
    return score;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int nm[2];
    cin>>nm[0]>>nm[1];
    sort(nm,nm+2);
    int total=nm[0]+nm[1]-1;
    int x=calc(nm);
    reverse(nm,nm+2);
    x=max(x,calc(nm));
    cout<<x<<" "<<total-x<<"\n";
}