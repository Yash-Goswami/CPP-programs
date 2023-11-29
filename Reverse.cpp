#include<bits/stdc++.h>
using namespace std;

//I've written this program because 
//try same code for -ve numbers
//try -1704 , -897 etc
//with -ve numbers also same code will work correctly 
//no need to modify code for -ve numbers
//same code will revers the -ve numbers also

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n,ans=0;
    cin>>n;
    while(n){
        ans= ans*10 + n%10;
        n/=10;
    }
    cout<<ans;
}