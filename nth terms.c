#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Writ
  if(n==1)return a;
   if(n==2)return b;
    if(n==3)return c;
    
    int t1=a,t2=b,t3=c,nxt;
    
  for(int i=4;i<=n;i++){
   nxt =t1+t2+t3;
     t1=t2;
     t2=t3;
     t3=nxt;
  }
  
return t3;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
