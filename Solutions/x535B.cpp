#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
//+1 add one to the number you
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin>>str;
    int len=str.size();
    int number=0;
    int counter=0;
    for(int i=len-1;i>=0;i--){
        if(str[i]=='7')
        number+=(int)pow(2,counter);
        counter++;
    }
    number+=1;
    number+=(int)pow(2,len)-2;
    cout<<number<<"\n";
}