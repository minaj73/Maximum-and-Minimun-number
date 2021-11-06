#include<stdio.h>
#include<conio.h>
int main()
{
  int no=0,min=0,count=0,num=0;
  printf("\n enter how many numbers you have =");
scanf("%d",&num);

 for(count=1;count<=num;count++)
  {
      printf("\n  enter number %d= ",count);
      scanf("%d",&no);

     if(count==1 || no<min)
     {
         min=no;
     }

  }
  printf("\n minimum number from given number = %d",min);
  getch();
  return 0;
}
