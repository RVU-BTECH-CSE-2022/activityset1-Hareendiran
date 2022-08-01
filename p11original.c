#include <stdio.h>
int main(void)
{
  float length,breadth,area;
  printf("enter length and breadth values\n");
  scanf("%f%f",&length,&breadth);
  area=length*breadth;
printf("the area of the rectangle with length=&f and breadth=&f is=%f\n",length,breadth,area);
  return 0;
}
