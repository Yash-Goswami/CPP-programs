
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    int num,ans;
    cin>>num;
    while((num/10)!=0){  //if num itself is single digit then we will directly come out of loop
        ans=0;
        while(num){
            ans+=num%10;
            num/=10;
        }
        //now num became 0 and ans will have sum of all the digits of num
        num=ans;  //whatever is the ans assign back to the num bcoz in outer loop we are checking that whether sum of all digits become single digit answer or not
    }
        cout<<num<<endl;
    return 0;
}

// while((num/10)!=0) this condition is costlier for checking whether num become single digit or not
// while(num>9) => this is simple and straight forward way to check whether num became single digit or not