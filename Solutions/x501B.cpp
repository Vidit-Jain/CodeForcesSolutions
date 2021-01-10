#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
int n=0,p;
int contains(string s,string arr[]){
    for(int i=0;i<n;i++){
        if(s==arr[i]) return i;
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>p;
    string arr1[p];
    string arr2[p];
    for(int i=0;i<p;i++){
        arr1[i]=arr2[i]="";
    }
    for(int i=0;i<p;i++){
        string oldstring,newstring;
        cin>>oldstring>>newstring;
        if(contains(oldstring,arr2)==-1){
            arr1[n]=oldstring;
            arr2[n]=newstring;
            n++;
        }
        else{
            int index=contains(oldstring,arr2);
            arr2[index]=newstring;
        }
    }
    cout<<n<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" "<<arr2[i]<<"\n";
    }
}