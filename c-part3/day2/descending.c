#include<stdio.h>
int main(){
int j,temp,i;   //0 //1 //2 //3 //4
    int arr[5]={ 1,  2 , 3 , 4 , 5  };
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]<arr[j]){
              temp=arr[j];
              arr[j]=arr[i];
              arr[i]=temp;
            }

        }
    }
     for(i=0;i<5;i++){
        printf("%d\n",arr[i]);

     }

    return 0;
}