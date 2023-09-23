#include <stdio.h>
int main(){
    int h,overtime ,working ,wages;
    scanf("%d",&h);
    overtime =h%8;
    working =h/8;
    wages = (working *200)+ (overtime *20) ;
    printf("%d",wages);
}