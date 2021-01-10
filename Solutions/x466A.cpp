#include <iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(double(b/m)>=a){
        cout<<n*a<<endl;
    }
    else{
        int total=min((n/m)*b+(n%m)*a,(n/m+1)*b);
        cout<<total<<endl;
    }
}
