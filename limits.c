#include<stdio.h>
#include<limits.h>
void main ()
{
 printf("short int:\n");
 printf("signed: %hd to %hd\n" ,SHRT_MIN, SHRT_MAX);
 printf("unsigned: %hu to %hu\n", 0,USHRT_MAX);
 
 printf("int:\n");
 printf("signed:%d to %d\n" ,INT_MIN , INT_MAX);
 printf("unsigned:%u to %u\n",0, UINT_MAX);
 
 printf("long int:\n");
 printf("signed:%ld to %ld\n",LONG_MIN, LONG_MAX);
 printf("signed:%lu to %lu\n" ,0 , ULONG_MAX);
 
 printf("long long int\n");
 printf("signed:%lld to %lld\n" ,LONG_LONG_MIN , LONG_LONG_MAX);
 printf("signed:%llu to %llu\n" ,0 ,LONG_LONG_MIN);
 	
}
