// https://www.codechef.com/problems/MVR

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int messgolas = 2 * a + b;
    int rolgolas = 2 * x + y;
    if (messgolas == rolgolas)
    {
        cout << "Equal" << endl;
    }
    else if (messgolas > rolgolas)
    {
        cout << "Messi" << endl;
    }
    else
        cout << "Ronaldo" << endl;
    return 0;
}
