#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int arr[n];
            int evencount=0;
            int firstevenindex=-1;
            for(int i=0;i<n;i++){
                cin>>arr[i];
                if(arr[i]%2==0){
                    evencount++;
                    firstevenindex=i+1;
                } 
            }
            if(n==1 && arr[0]%2==1) cout<<-1<<endl;
            else if(evencount!=0){
                cout<<1<<endl;
                cout<<firstevenindex<<endl;
            }
            else{
                int count=0;
                cout<<2<<endl;
                for(int i=0;i<n;i++){
                    if(arr[i]%2==1){
                        count++;
                        cout<<i+1<<" ";
                        if(count==2) break;
                    }
                }
                cout<<endl;
            }
        }
}