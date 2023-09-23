#C program to Find Sum of n Natural Numbers 
#include <stdio.h> 

int main() 

{ 

    int i,n,s; 

    printf("enter n:"); 

    scanf("%d",&n); 

    for(i=1;i<=n;i++) 

    { 

    s=s+i; 

    } 

    printf("the sum of natural no is %d",s); 

  

    return 0; 

} 
