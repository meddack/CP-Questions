#include <iostream>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // Calculate the intersection boundaries
    int s1 = max(l1, l2);
    int s2 = min(r1, r2);

    if (s1 <= s2)
        cout << s1 << " " << s2;
    else
        cout << -1;

    return 0;
}