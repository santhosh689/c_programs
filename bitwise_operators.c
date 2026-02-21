#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
 
int m_and=0,m_or=0,m_xor=0;

for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
      int t_and=i&j;
       int t_or=i|j;
        int t_xor=i^j;
        if(t_and>m_and&&t_and<k){
            m_and=t_and;
            
        }if(t_or>m_and&&t_or<k){
            m_or=t_or;
            
        }if(t_xor>m_xor&&t_xor<k){
            m_xor=t_xor;
            
        }
    }
   
}

   printf("%d\n%d\n%d\n",m_and,m_or,m_xor);
} 
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
 
