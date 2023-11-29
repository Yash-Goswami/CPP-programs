#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n,arr[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-2,j;i>=0;i--){
        int current=arr[i]; 
        for(j=i+1;j<n;j++){
            if(arr[j]<current)
                arr[j-1]=arr[j];
            else{
                break;
            }
        }
        arr[j-1]=current;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}