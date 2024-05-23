#include <stdio.h>
int main(void){
 int n,h,m,s;
 scanf("%d",&n);
 h=n/3600;
 m=(n-(3600*h))/60;
 s=(n-(3600*h)-(m*60));
 printf("%d:%d:%d",h,m,s);
 return 0;
    
}
