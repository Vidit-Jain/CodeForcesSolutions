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

    int t;
    cin>>t;
    while(t--){
        long s,d;
        cin>>s>>d;
        long count=0;
        while(s!=0 && d!=0){
            int a;
            if(s>d){
                a=min(d,s-d);
                count+=a;
                d-=a;
                s-=2*a;
            }
            else if(s<d){
                a=min(s,d-s);
                count+=a;
                d-=2*a;
                s-=a;
            }
            else{
                if(s<2) break;
                if(s==2){
                    count++;
                    break;
                }
                int tempnum=(min(s,d)/3);
                count+=tempnum*2;
                s-=tempnum*3;
                d-=tempnum*3;
            }    
            
        }
        cout<<count<<"\n";
    }
}
