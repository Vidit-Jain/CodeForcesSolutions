#include <bits/stdc++.h>
using namespace std;
#define ll long long
void printArray(int n,int dp[][10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<n;j++){
            cout<<dp[j][i]<<" ";
        }
        cout<<"\n";
    }
}
int divisibleNum(int a){
    a*=10;
    for(int i=0;i<10;i++){
        if((a+i)%8==0) return i;
    }
    return -1;
}
int findNumber(string number,int dp[][10]){
    int result=-1;
    bool flag=false;
    for(int i=0;i<number.size();i++){
        result=0;
        string temp(1,number.at(i));
        result+=stoi(temp);
        if(result%8==0){
            
            flag=true;
            break;
        }
        for(int j=0;j<10;j++){
            int result2=result;
            if(dp[i][j]!=-1){
                result2*=10;
                result2+=j;
                if(result2%8==0) {
                    result=result2;
                    flag=true;   
                    break;
                }
                int a=divisibleNum(result2);
                if(dp[dp[i][j]][a]!=-1){
                    
                    result2*=10;
                    result2+=a;
                    result=result2;
                    flag=true;
                    break;
                }
                else if(a<=1 && dp[dp[i][j]][a+8]!=-1){
                    result2*=10;
                    result2+=(a+8);
                    result=result2;
                    flag=true;
                    break;
                }
            }
        }
        if(flag) break;
    }
    return flag?result:-1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string number;
    cin>>number;
    for(int i=number.size()-1;i>=0;i--){
        string b(1,number.at(i));
        int a=stoi(b);
        if(a%2!=0)
            number=number.substr(0,i);
        else break;
    }
    int n=number.size();
    int dp[n][10];
    for(int i=0;i<10;i++){
        dp[n-1][i]=-1;
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<10;j++){
            dp[i][j]=dp[i+1][j];
        }
        string temp(1,number.at(i+1));
        dp[i][stoi(temp)]=i+1;
    }
    int result=findNumber(number,dp);
    if(result==-1) cout<<"NO"<<endl;
    else{
        cout<<"YES\n"<<result<<endl;
    }
}