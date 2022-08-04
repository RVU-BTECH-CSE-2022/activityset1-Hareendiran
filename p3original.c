#include <stdio.h>
int input()
{
  int a;
  printf("enter a number");
  scanf("%d",&a);
  return a;
}

int find_largest(int a, int b, int c)
{
  int d;
  if (a > b)
  {
    if (a > c)
      d = a;
    else
      d = c;
  }
  { 
    else if (b > c)
      d = b;
    else
      d = c;
  return d;
  }
}

int output(int a, int b, int c, int d)
{  
  printf("largest of %d and %d and %d is %d",a,b,c,d);
}

int main()
{
  int a, b, c, d;
  a=input();
  b=input();
  c=input();
  d=find_largest(a,b,c);
  output(a,b,c,d);
}