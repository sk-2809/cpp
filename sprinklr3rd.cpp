// Maximise the sum, you will be given N intervals, where i’th interval will start at time Li and will be finished at Ri and contains the special value Ki, You have to select P intervals such that no intervals overlap each other and maximize the sum of special values of the selected P intervals.
#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

void disjointinterval(vector<pair<int, int>> list,int n)
{
    int a[n][2];

    sort(list.begin(), list.end(), sortbysec);
    int r1 = list[0].second;

    //cout << "[ " << list[0].first << " " << list[0].second << " ]" << endl;
    a[0][0] = list[0].first;
    a[0][1] = list[0].second;

    for (int i = 1; i < list.size(); i++)
    {
        int l1 = list[i].first;
        int r2 = list[i].second;

        if (l1 > r1)
        {
            //cout << "[ " << l1 << " " << r2 << " ]" << endl;
            a[i][0] = l1;
            a[i][1] = r2;
        }
    }

    


}

int main()
{
    int n, p;
    cout << "Enter N and P";
    cin >> n >> p;
    int ar[n][3];
    cout << "Enter the values of inter with value special value; L, R, K";

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " interval";
        cin >> ar[i][0] >> ar[i][1] >> ar[i][2];
    }
    int arr[n][2];
    vector<pair<int, int>> list;
    for (int i = 0; i < n; i++)
    {
        list.push_back(make_pair(ar[i][0], ar[i][1]));
        arr[i][0] = ar[i][0];
        arr[i][1] = ar[i][1];
    }

    disjointinterval(list,n);
    return 0;
}