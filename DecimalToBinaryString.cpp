#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    long long int number,base,reminder,quotient,pow=1; //pow represents power of 10
    string ans="";
    
    cin>>number; //the decimal number which you want to convert into other number system
    cin>>base; //base of other number system in which you want to convert  , remember that it won't work for base more than 10
    int num=number;
    while(num) {
        reminder=num%base;
        num=num/base;
        pow*=10;     //pow will become 1 then 10 then 100 then 1000

        char c=reminder+'0'; //since reminder is in int so we need to convert it into char inorder to merge it with string answer
        ans=c+ans; //we can merge chars with string this is very very helpful
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
    //this method is using string to store answer so, game etlo moto answer hoy we will be getting the answer without any overflow or error
    return 0;
}