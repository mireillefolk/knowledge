#include<stdio.h>
int fib(int n);
int main()
{
// varibles declarations
  int i;
  int n;
  int answer;
while(i<n){
      i++
      answer =fib(i);
      printf("fibonacci is :%d",answer);
         }
      return 0;
}
int fib(int n) //function calling recursively
{
  if(n ==0){
  return 0;
      }
    else if(n ==1){
      return 1;
          }
        else{
         return fib(n-1)+fib(n-2);
                 } 
}


