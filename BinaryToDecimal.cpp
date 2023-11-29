#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int number,ans=0,reminder,base,pow=1; //pow represents pow of 2, as of now it's 2power0 , in case of different base it will be powers of that base


    cin>>base;  //enter which base number you are entering , remember that it will work only till base 10
    cin>>number; // enter number in the same base number system as what you have entered above
    while(number){
        reminder=number%10;
        ans+= reminder*pow;
        pow*=base;
        cout<<ans<<endl;
        number/=10;
    }


    return 0;
}