#include <stdio.h>
float pi =3.14;
int circle()
{
    int r = 6;
    double area;
    area=pi*r*r;
    return area;
} 
void main()
{
  printf("THE AREA OF CIRCLE =%d",circle());

}