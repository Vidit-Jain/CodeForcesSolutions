#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
bool isPalindrome(string str){
    int n=str.size();
    int i=0,j=n-1;
    while(i<=j){
        if(str[i]!=str[j]) 
            return false;
         i++;
         j--;   
    }
    return true;
}
bool isReverse(string str1,string str2){
    int n=str1.size();
    for(int i=0;i<n;i++){
        if(str1[i]!=str2[n-1-i]) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    string arr[n];
    bool palindrome[n]={false};
    bool ispaired[n]={false};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        palindrome[i]=isPalindrome(arr[i]);
    }
    int indexpair=1;
    vector<pair<string,string>> v;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(isReverse(arr[i],arr[j])){
                pair<string,string> p={arr[i],arr[j]};
                v.push_back(p);
                ispaired[i]=true;
                ispaired[j]=true;
                break;
            }
        }
    }
    string ans="";
    for(int i=0;i<n;i++){
        if(!ispaired[i] && palindrome[i]){
            ans=arr[i];
            break;
        }
    }
    for(auto s:v){
        ans=s.first+ans+s.second;
    }
    cout<<ans.size()<<"\n";
    cout<<ans<<"\n";
}