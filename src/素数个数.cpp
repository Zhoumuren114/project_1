/*
题目描述:
编程求2～n(n为大于2的正整数)中有多少个素数

输入:
输入n(2≤n≤50000)

输出:
素数个数
*/

#include <iostream>
using namespace std;
int main()
{
    int n,num=0;
    cin >> n;
    for (int i=2;i<=n;i++)
    {
        bool state = 1;
        for (int j=2;j*j<=i;j++)
        {
            if (i%j==0){
                state = 0;
                break;
            }
        } 
        if (state){
            num++;
        }
    }
    cout << num;
    return 0;
}
