#include<stdio.h>

#include<math.h>

double multi (double a, double b){
  return a*b;
}
double div (double a, double b){
  if (b==0) return null;
  return a/b;
}
double add (double a, double b){
  return a+b;
}

double sub(double a, double b){
return a  - b;
}

long mod(long a, long b){
return a  % b; 
}

// -1 
double abs(double a){
  return (a >= 0) ? a: -a ; 
}



int main(){

int a = 10; 
int b = 20;

 printf("%d", multi(a,b) );
 printf("%d", add(a,b) );
 printf("%d", div(a,b) );
 printf("Square root for %d = %d",100,getSquareRoot(100));   
 printf("%d - %d = %d"100,10,sub(100,10)); // 90 
 printf("%d % %d",10,3,mod(10,3)); //1 
 printf("abs of %d = %d",-10,abs(-10)); //10 

return 0;
}
