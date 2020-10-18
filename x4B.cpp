#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
int findHours(int rangeMin,int dpMax,int sumTime){
    if(sumTime-rangeMin<=dpMax) return rangeMin;
    else return sumTime-dpMax;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int d,sumTime;
    cin>>d>>sumTime;
    int minTime[d],maxTime[d];
    for(int i=0;i<d;i++){
        cin>>minTime[i]>>maxTime[i];
    }
    int dpMin[d],dpMax[d];
    dpMin[d-1]=minTime[d-1];
    dpMax[d-1]=maxTime[d-1];
    for(int i=d-2;i>=0;i--){
        dpMin[i]=dpMin[i+1]+minTime[i];
        dpMax[i]=dpMax[i+1]+maxTime[i];
    }
    if(dpMin[0]<=sumTime && sumTime<=dpMax[0]) {
        cout<<"YES\n";
        for (int i = 0; i < d-1; i++) {
            int a=findHours(minTime[i],dpMax[i+1],sumTime);
            sumTime-=a;
            cout<<a<<" ";
        }
        cout<<sumTime;
    }
    else cout<<"NO\n";
}