#include<stdio.h>
void main()
{
 int a=10, b=4, c=3;
 a += b,c;
 printf("%d %d %d\n",a ,b,c);
 b -= c,a;
 printf("%d %d %d\n",a ,b,c);
 c *= a,b;
 printf("%d %d %d\n",a ,b,c);
 a /= b,c;
 printf("%d %d %d\n",a ,b,c);
 b *= c,a;
 printf("%d %d %d\n",a ,b,c);
 a += b,c;
 printf("%d %d %d\n",a ,b,c);
}
 
