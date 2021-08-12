#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    vector<pair<int, int>> vect;
    int a[] = {1, 0, 7, 4, 8, 9};
    int b[] = {4, 8, 4, 6, 2, 9};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++)
    {
        vect.push_back(make_pair(a[i], b[i]));
    };

    sort(vect.begin(), vect.end(), sortbysec);

    for (int i = 0; i < n; i++)
    {
        cout << vect[i].first << " " << vect[i].second << endl;
    }
    return 0;
}