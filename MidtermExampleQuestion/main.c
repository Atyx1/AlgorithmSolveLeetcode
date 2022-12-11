#include <stdio.h>

int main()
{
printf("Enter Number (1-10):"); int a;scanf("%d",&a);

//if you enter 7 shape is :
/*
77777778
*6666667
**555556
***44445
****3334
*****223
******12
*******1
*/
 int say=a; int x=a;
   for(int i=1;i<=a;i++){
       for(int j=a-1;j>a-i;j--){
           say++;
          printf("*");
       }
       for(int z=a;z>=i;z--){
           say++;
           if(say%a==0){
               printf("%d",x);
           }
           else{
               printf("%d",x-1);
           }
       }
       printf("\n");
       x--;
   }
   
}
