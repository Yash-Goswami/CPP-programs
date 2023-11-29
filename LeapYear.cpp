
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    int year;
    cin>>year;
    if(year%400==0)
        cout<<"Leap Year";
    else if(year%4==0 && year%100!=0)
        cout<<"Leap Year";
    else
        cout<<"Not a Leap Year";
    
    return 0;
}
/*
if any year is divisible by 400 then it is definately Leap year(this is the first condition)
(like 2000, 2400, 1600, 800 , 1200 are leap yaear)
but 
if it's not divisible by 400 then we can't say that It's not a leap year

now if year is not divisible by 400 then 
    if that year is divisible by 4 alone and if that year is not divisible by 100 then only it's leap year
    (700 is divisible by 4 but it's also divisible by 100 so It's not leap year)
    (1300 is divisible by 4 but it's also divisible by 100 so It's not leap year)
    (2004 is divisible by 4 but it's not divisible by 100 so It's leap year)
    (2024 is divisible by 4 but it's not divisible by 100 so It's leap year)

if(It's divisible by 4 but not with 100 ) then It's leap year
else not

1) if divisible by 400 ->definately leap year
2)if divisible by 4 but not with 100 then only leap year
3) rest all are not the leap year
*/
