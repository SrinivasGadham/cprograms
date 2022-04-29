#include<stdio.h>
void main()
{
  // Variable declaration
   int a,b,c, larg, small;

   printf("Enter Three Number\n");
   scanf("%d %d %d",&a,&b,&c);

  // larg among a, b and c
  if(a>b)
  {
      if(a>c)
        larg = a;
      else
        larg = c;
  }
  else
  {
      if(b>c)
        larg = b;
      else
        larg = c;
  }
 // Small among a, b and c
  if(a<b)
  {
      if(a<c)
        small = a;
      else
        small = c;
  }
  else
  {
      if(b<c)
        small = b;
      else
        small = c;
  }
//Display Largest Number
 printf("%d is largest number\n",larg);

//Display smallest number
 printf("%d is Smallest Number ",small);

return 0;
}