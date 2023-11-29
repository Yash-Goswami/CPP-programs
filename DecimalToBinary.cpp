#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    int number,base,reminder,quotient,pow=1,ans=0;
    
    cin>>number; //the decimal number which you want to convert into other number system
    cin>>base; //base of other number system in which you want to convert 
    int num=number;
    while(num) {
        reminder=num%base;
        num=num/base;
        ans=reminder*pow + ans;
        pow*=10;
    }
    cout<<ans<<endl;
    //this is rohit negi's method but this method will ofcourse fail when you have big numbers, so, that binary ans will not be able to store in 
    return 0;
}