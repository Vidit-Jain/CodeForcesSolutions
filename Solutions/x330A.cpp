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
bool canEat(int row,int column,int r,int c,string arr[]){
    bool horizontal=true, vertical=true;
    // if(arr[row][column]=='S') return false;

    for(int i=0;i<r;i++){
        if(arr[i][column]=='S') vertical=false;
    }
    for(int i=0;i<c;i++){
        if(arr[row][i]=='S') horizontal=false;
    }
    return (vertical || horizontal);
}
void printArray(string arr[],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int r,c;
    cin>>r>>c;
    string arr[r];
    for(int i=0;i<r;i++)    cin>>arr[i];
    int count=0;
    // printArray(arr,r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            count+=canEat(i,j,r,c,arr);
        }
    }
    cout<<count<<"\n";
}