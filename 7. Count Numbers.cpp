// Author : Anik Podder
// CF Handle : anikpodder

#include<bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"

void solve()
{
    string a;
    getline(cin, a);
    
    int count = 0;
    int flag = 0;
    
    for (int i = 0; i < a.size(); ++i)
    {
        if (((a[i] >= '0' && a[i] <= '9') || a[i] == '-') && flag == 0)
        {
            count++;
            flag = 1;
        }
        else if (!((a[i] >= '0' && a[i] <= '9') || a[i] == '-') && flag == 1)
        {
            flag = 0;
        }
    }
    cout << count << endl;
}

int main()
{
    Fast
    
    int tc;
    cin >> tc;
    
    cin.ignore();
    
    while(tc--)
    {
        solve();
    }
}
