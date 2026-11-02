#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n)!=1){
        return 0;
    }
    if(n<0){
        printf("error\n");
    }else if (n==0){
        printf("No\n");
    }else{ 
        int flag = 0;

        if(n%3==0){
            printf("Up");
            flag=1;
        }
        if (n%5==0){
            printf("Go");
            flag=1;
        }
        if (n%7==0){
            printf("!!");
            flag =1;
        }
        if(!flag){
            printf("No");
        }
        printf("\n");
    }
    return 0;
}