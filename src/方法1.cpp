#include<stdio.h>
#include<math.h>
int main()
{int a,b,c,t;
  printf("请输入整数a, b, c");
  scanf("%d %d %d", &a,&b,&c);
  if(a>b) //若成立，交换ab
{
  t=a;
  a=b;
  b=t;}
  if(a>c)//若成立，交换ac
 {
  t=a;
  a=c;
  c=t;}
  if(b>c) //若成立，交换bc
 {
 t=b;
 b=c;
 c=t;}
printf("输出结果:%d %d %d\n", a, b, c);
return 0;
}

