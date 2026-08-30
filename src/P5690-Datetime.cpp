#include<cmath>
#include<stdio.h>

int m,n,x,y;
int sum=0;
bool error_month=0;       //标记月份正误
int fuye=0;

int months(int one1,int one2)  //2月返回0,30日的返回2，31日的返回3,不确定以及月份非10的返回100
{
    if(one1==0 && one2==2){return 0;}
    else if(one1==0)
    {
        if(one2==4 || one2==6 || one2==9){return 2;}
        else if(one2==0){return 100;}
        else{return 3;}
    }
    else if(one1==1)
    {
        if(one2==1){return 1;}
        else if(one2==2){return 3;}
        else{return 100;}
    }
    else{return 100;}
    //结束
}

void result(int a1,int a2,int a3,int a4,int unnormal)  //把值加到sum
{

    if(unnormal == 100){
        if(a2 == 0 && a1 != 1){sum++;}       
        else if((1 <= a1*10 + a2) && (a1*10 + a2 <= 12)){sum+=0;}
        else if(a1 == 1 && (a2 != 1 && a2 != 2)){sum++;}
        else{sum++;}
        
        if((a1==0 && a2==0) && a3*10 + a4 <=31){if(a3==0 && a4==0){sum=2; return;}sum=1; return;}
        else if((a1==0 && a2==0) && a3*10 + a4 > 31){sum=2; return;}
        else if((a1==1 && (a2 != 1 && a2 != 2)) && a3*10 + a4 <= 31){sum=1; return;}
        else if((a1==1 && (a2 != 1 && a2 != 2)) && a3*10 + a4 > 31){sum =2; return;}
        else if(a2==2){if(a3*10 + a4 > 31){sum++;}}                     //12月与2月
        else if(a2==1){if(a3*10 + a4 > 31){sum++;}}                     //11月与1月
        else if(a1==1 && (a2 != 1 && a2 != 2)){if(a3*10 + a4 > 31){sum++;}}
        else if(a2==3 || a2==5 || a2==7 || a2==8 || (a1==1 && a2==0)){if(a3*10 + a4 >31){sum++;}}
        else{if(a3*10 + a4 >30){sum++;}}
        return;
        }   //暂时烂尾码 ——————————————————————————
    else{
        int normalu = 28+unnormal;
        if(a3*10 + a4>0 && a3*10 + a4 <= normalu){return;}
        else{sum++; return;}
        }
}

int main()
{
    scanf("%1d%1d-%1d%1d",&m,&n,&x,&y);
    fuye = months(m,n);
    //if(==100){error_month=1;}
    result(m,n,x,y,fuye);
    printf("%d",sum); 
    return 0;                                  //Current score:91 out of 100; some gaps still exist.
}
