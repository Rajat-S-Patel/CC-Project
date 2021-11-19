#include<stdio.h>

int main(){
    int n = 10;
    int sq = n*n;
    int cb = n*n*n;
    int res=0;
    
    if(sq == cb && cb == n){
        res = 0;
    }
    else if(sq > cb && n > sq){
        res= 2;
    }
    else{
        res=1;
    }
    x=res;
    return 0;
}