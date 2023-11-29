#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int number,reminder;
    string ans="";
    cin>>number;
    while(number){
        reminder=number%16;
        number/=16;
        char c;
        if(reminder<10)
            c=reminder+'0';
        else 
            c=reminder-10+'A';
        
        ans=c+ans;
    }
        cout<<ans<<endl;

    //Hexa to decimal program will require input in string and not in integer
    //that program is very easy hence not writing


    return 0;
}