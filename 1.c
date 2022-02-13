#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter a and b values:");
  scanf("%d %d",&a,&b);
  c=a+b-a%b;
  printf("Next largest multiple=%d",c);
  return 0;
}
