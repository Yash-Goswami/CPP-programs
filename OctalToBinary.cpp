#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // one approach is to convert octal to decimal first and then convrert that decimal to binary
    //but e to chokrao kare aapde to experienced chhie to octal to binary mate octal no 1 digit is binary na 3 bits 

    int num,reminder,ans=0 ,powOf1000=1;
    cin>>num;  //enter Octal number 
    while(num){
        reminder = num%10;
        num/=10;
        //now convert reminder into binary
        int tempReminder,powOf10=1,tempAns=0;
        while(reminder){
            tempReminder=reminder%2;
            reminder/=2;
            tempAns = tempReminder*powOf10 +tempAns;
            powOf10*=10;
        }
        ans = tempAns*powOf1000 + ans;
        powOf1000*=1000;
        cout<<ans<<endl;
    }
    
    return 0;
}