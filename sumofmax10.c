#include<stdio.h>
int main()
{
  int number, sum=0;

  for(int i=1 ; i<=10; i++)
  {
    // take input from the user
    printf("Enter number: ");
    scanf("%d",&number);

    //-ve numbers are skipped
    if( number<0 ) 
     printf("Negative number is entered");

    // calculate sum
    sum += number; // sum = sum + number
  }
  
  // display result
  printf("Sum = %d",sum);

  return 0;
}