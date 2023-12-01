#include<stdio.h>
//structure defination 
struct time
{
    int hour;
    int min;
    int sec;
} this;
//function declaration
struct  time scan(struct time);
void print(time);


int main()
{
   struct time this;
   struct time this1;
    this1=scan(this);
}


struct  time scan(struct time this )
{ printf("ENTER TIME:\n");
    scanf("%d %d %d ",&this.hour,&this.min,&this.sec);

return  this;}
