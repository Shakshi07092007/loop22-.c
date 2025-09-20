#include<stdio.h>
int main"(){
   int n,a,r,i;
   long long term;
printf("enter the first term(a)");
scanf("%d",&a);
printf("enter the common ratio(r)");
scanf("%d",&r);
printf("enter the number of terms(N)");
scanf("%d",&n);
printf("geomertic progression series\n");
term=a;
for(i=1;i<=n;i++){
  printf("%lld",term);
  term=term*rr;
}
return 0;
}