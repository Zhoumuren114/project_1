#include <bits/stdc++.h>
using namespace std;
char abc[7000];char abc_new[7000];
int main(){
    bool state = true;
    cin >> abc;
    int longer = strlen(abc);
    while (abc[longer] != '\0'){longer++;}
    for (int i=0;i < longer;i++){if (not('0' <= abc[i] && abc[i] <= '9')){state = false;}}
    if (state == true){
        if(longer==1){cout << abc;}
        else{
            for (int i=0;i<longer;i++){
                int num_new = 0; /*输入编序*/
                if(abc[i] >= '0' && abc[i] <= '9'){
                    abc_new[num_new] = abc[i];num_new++;}}cout<<abc_new<<endl;
        }
    }
    else{cout<<abc;}
    return 0;
}