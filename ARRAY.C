#include<stdio.h>
void main()
{
int var[]={10,100,200};
int i,*ptr[3];
clrscr();
for(i=0;i<3;i++)
{
ptr[i]=&var[i]
for(i=0;i<3;i++)
{
printf("value of var[%d]",i,*ptr[i]);
}
getch();
}
