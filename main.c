#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int u,c,n=21;
    while(n!=0){
        if(n!=1){
        printf("Pick any number like 1 or 2 or 3 or 4\n");
        scanf("%d",&u);
        if(u<1 || u>4){
            printf("You have to pick number from 1 to 4!!!\n");
            continue;
        }
        if(n>1){
          c=5-u;
        }
        else{
            c=0;
        }
        printf("Computer picks %d \n",c);
        n=n-u-c;
        printf("Total matchsticks remaining is %d \n",n);}
        else{
            break;
        }
    }
    while(true){
        printf("You have to pick 1 there's no other option left!!!\n");
        scanf("%d",&u);
        if(u!=1){
            continue;
        }
        else{
            printf("No matchstick left for Computer to pick so Computer wins!!!");
            break;
        }
    }
    return 0;
}
