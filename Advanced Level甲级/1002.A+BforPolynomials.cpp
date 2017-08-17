#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    double a[1005] = {0};
    double b[1005] = {0};
    double s[1005] = {0};
    int k, n;
    double an;
    cin>>k;
    while (k--)
    {
        cin>>n>>an;
        a[n] = an;
    }
    cin>>k;
    while (k--)
    {
        cin>>n>>an;
        b[n] = an;
    }
    int xs = 0;
    for (int i=0; i<20; i++)
    {
        s[i] = a[i] + b[i];
        if (s[i] != 0.0)
        {
            xs++;
        }
    }
    cout<<xs;
    for (int i=1001; i>=0; i--)
    {
        if (s[i] != 0.0)
        {
            cout<<" "<<i<<" "<<s[i];
        }
    }

    return 0;
}