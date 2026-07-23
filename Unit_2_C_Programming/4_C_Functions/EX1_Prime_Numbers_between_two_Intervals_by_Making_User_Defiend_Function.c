/*
 * EX1_Prime_Numbers_between_two_Intervals_by_Making_User_Defiend_Function.c
 *
 *  Created on: Jun 25, 2026
 *      Author: Marina
 */


		   #include<stdio.h>
 int x,y,i,j,count=0,temp,flag=1;  // flag is by default is prime number
  int arr[100];
 void primenumbers(int x , int y );
 int main(){

    printf("enter two numbers(intervals) :");
    fflush(stdin); fflush(stdout);
    scanf("%d %d",&x,&y);
    primenumbers(x , y );
    return 0;
 }
 void primenumbers(int x ,int y){

    if(x>y){
        temp=y;
        y=x;
        x=temp;
    }
   if(x<=1 && y==1){
    printf("there is no prime numbers between %d & %d",x,y);
   }
   else if(x<=1 && y==2){
    printf("the prime between %d & %d is : %d ",x,y,y);
   }
    for(i=x+1;i<y;i++){
        flag =1; // reset the flag for every new number
            if(i==2){
                flag=1;
                arr[count]=i;
                count++;
            }
            else if (i%2!=0 && i>2){  // exclude for even numbers and 2
            for(j=3;j<i;j++){  // for odd numbers check if it is divisib;e by any number else
              if(i%j==0){ //examine if the number is divisble by any number other than 1 and itself
                flag=0;   // if it divisible then itisnot prime number and break the loop
                break;
              }
               }
               if(flag==1){
                arr[count]=i;
                count++;
      }
     }
    }
   printf("the prime numbers between %d & %d :\n",x,y);
   for(i=0;i<count;i++){
    printf("%d \t",arr[i]);
   }
  }




