#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0,no3=0;
    printf("\n enter three numbers");
    scanf("%d%d%d",&no1,&no2,&no3);

    if(no1>no2 && no1>no3)
    {
        printf("\n no1=%d is maximum number",no1);
    }
    else if(no2>no1 && no2>no3)
    {
        printf("\n no2=%d is maximum number",no2);
    }
    else
    {
        printf("\n no3=%d is maximum number",no3);
    }
    getch();
    return 0;

}
