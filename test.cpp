#include <bits/stdc++.h>
using namespace std;

void increment(int *&ptr)
{
    ptr++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int i = 5;
    int *ptr = &i;
    cout << ptr << endl;
    increment(ptr);
    cout << ptr << endl;
    return 0;
}