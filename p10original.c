#include <stdio.h>
int main(void)
{
  float base,altitude,area;
  printf("enter base and altitude
values\n");
  scanf("%f%f",&base,&altitude);
  area=0.5*base*altitude;
  printf("the area of the triangle with 
base=%f and altitude=%f is=
%f\n",base,altitude,area);
  return 0;
}
