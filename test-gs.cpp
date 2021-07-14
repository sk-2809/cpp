#include<iostream>
//#include<conio.h>

using namespace std;

int main(void)
{
    int n = 0, m = 0, i = 0, j = 0;
    cout << "Enter size of 2d array(Square matrix) : ";
    cin >> n;
    float a[n][n], b[n], x[n], y[n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter values no :(" << i << ", " << j << ") ";
            cin >> a[i][j];
        }
    }
    cout << "\nEnter Values to the right side of equation\n";
    for (i = 0; i < n; i++)
    {
        cout << "Enter values no :(" << i << ", " << j << ") ";
        cin >> b[i];
    }
    cout << "\nEnter initial values of x\n";
    for (i = 0; i < n; i++)
    {
        cout << "Enter values no. :(" << i<<"):";
        cin >> x[i];
    }

    cout << "\nEnter the no. of iteration : ";
    cin >> m;

    while (m > 0)
    {
        for (i = 0; i < n; i++)
        {
            y[i] = (b[i] / a[i][i]);
            for (j = 0; j < n; j++)
            {
                if (j == i)
                    continue;
                y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];
            }
            cout<<"x"<<i+1<<" = "<<y[i]<<" ";
        }
        cout << "\n";
        m--;
    }
    return 0;
}
