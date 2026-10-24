#include <iostream>
using namespace std;
int main()
{
    int rc[6][6],m,n;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin >> rc[i][j];
        }
    }
    cin >> m >> n;
    for(int i=1;i<=5;i++)
    {
        int exchange=0;
        exchange = rc[m][i];
        rc[m][i] = rc[n][i];
        rc[n][i] = exchange;
    }

    for(int x=1;x<=5;x++) 
        for(int y=1;y<=5;y++)
            if (y == 5) cout << rc[x][y]<<endl;
            else cout << rc[x][y] << " ";
}
