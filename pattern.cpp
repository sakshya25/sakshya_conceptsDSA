#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 1, n;
    cin >> n;
    while (i <= n)
    {
    int j = 1;
        while (j <= n)
        {
            cout << i;

            j++;
        }
        i = i + 1;
        cout << endl;
    }
    return 0;
}