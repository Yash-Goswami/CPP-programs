#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // one approach is to convert binary to decimal first and then convrert that decimal to octal
    //and same procecure you can follow in case of ocatal to binary , that convert octal to decimal and then decimal to binary
    //but e to chokrao kare aapde to experienced chhie to binary to octal binary na 3 bits ne ek sathe pakdi pakdi ne j kari shakay ne

    int num,reminder,ans=0 ,powOf10=1;
    cin>>num;  //enter binary number 
    while(num){
        reminder=num%1000; //we are separating 3 bits from binary number
        num/=1000;

        //convert reminder into decimal,it's ans will come b/w 0 to 7 only means although you are converting it into decimal but it's octal
        int powOf2=1, tempAns=0,tempReminder;
        while(reminder){
            tempReminder=reminder%10;
            reminder/=10;
            tempAns+= powOf2*tempReminder;
            powOf2*=2;
        }
        ans= tempAns*powOf10 + ans;
        powOf10*=10;
        cout<<ans<<endl;
    }
    cout<<"final ans :"<<ans<<endl;

    return 0;
}