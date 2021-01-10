#include <bits/stdc++.h>  

using namespace std;


int m,s;
string largest(){
    if(s==0 && m==1) return "0";
    if(s==0 ||s>m*9) return to_string(-1);
    string ans="";
    int sum=0;
    for(int i=0;i<m-1;i++){
        for(int j=0;j<=9;j++){
            if(i==0 && j==0) continue; 
            if((s-j-sum)==0 || j==9){
                sum+=j;
                if(j==0) ans=ans+"0";
                else ans=ans+to_string(j);
                break;
            }
        }
    }
    ans=ans+to_string(s-sum);
    return ans;
}
string smallest(){
        if(s==0 && m==1) return "0";
        if(s==0 || s>m*9 ) return to_string(-1);
        string ans="";
        int sum=0;
        for(int i=0;i<m-1;i++){
            for(int j=9;j>=0;j--){
                if((s-j-sum)/(m-i-1)>=9 || (i==0 && j==1) || j==0){
                    sum+=j;
                    ans=ans+to_string(j);
                    break;
                }

            }
        }
        ans=ans+to_string(s-sum);
        return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>m>>s;
    cout<<smallest()<<" "<<largest()<<endl;
    return 0;
}
