#include<stdio.h>
#include<conio.h>
int main()
{
  int no=0,max=0,count=0,num=0;
  printf("\n enter how many numbers you have =");
scanf("%d",&num);

 for(count=1;count<=num;count++)
  {
      printf("\n  enter number %d= ",count);
      scanf("%d",&no);

     if(no>max)
     {
         max=no;
     }

  }
  printf("\n maximum nmber from given number = %d",max);
  getch();
  return 0;
}
