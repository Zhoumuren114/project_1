/*
题目：
P2978三数排序 
时间限制1000ms
内存限制256MB
通过/尝试次数1136/2332
历史分数无
来源核桃编程官方
题目描述
输入 
3
3 个整数 
a
,
b
,
c
a,b,c，从小到大输出这 
3
3 个整数。

输入格式
一行 
3
3 个整数，含义如题意所述。

输出格式
一行空格隔开的 
3
3 个整数，表示排好序的 
3
3 个整数。

input1
复制代码
2000 1000 3000
output1
复制代码
1000 2000 3000
数据规模与约定
1
≤
a
,
b
,
c
≤
1000
1≤a,b,c≤1000。
*/

//题目：
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;cin>>a>>b>>c;
    if(a>b) swap(a,b); if(a>c) swap(a,c); if(b>c) swap(b,c);
    cout<<a<<" "<<b<<" "<<c;return 0;
} 
