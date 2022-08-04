#include <stdio.h>
float find_area(float base, float altitude)
{
  return (base*altitude/2);
}

int main()
{
  float base,altitude,area;
  printf("enter base value");
  scanf("%f",&base);

  printf("enter altitude value");
  scanf("%f",&altitude);

  area=find_area(base,altitude);
  printf("area is %f\n",area);
  return 0;
}