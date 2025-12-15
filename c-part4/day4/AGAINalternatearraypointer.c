#include<stdio.h>
/*3. Create an array of integers. Use a pointer to print every alternate element (e.g., 1st,
3rd, 5th).*/
int main(){
    int arr[6]={0,1,2,3,4,5};// 0,2,4 
    int *ptr;
    ptr=&arr[0];
    int i;
for (i = 0; i<6; i=i+2)
{
    printf("%d\n",*(ptr+i)); 

}
return 0;
}