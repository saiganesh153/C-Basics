#include<stdio.h>
void main()
{
  int a,b,main_choice,sub_choice;
  printf("enter two numbers:\n");
  scanf("%d%d",&a,&b);

  printf("choose the folloing opetion \n1)arithmetic \n2)relational \n3)bitwise\n");
  scanf("%d",&main_choice);
  switch(main_choice)
  {
     case 1:
      	printf("choose one of the folloing opetion \n1)+ \n2)- \n3)* \n4)/ \n5)%%\n");
      	scanf("%d",&sub_choice);
    //   	break;
      	switch(sub_choice)
      	{
		  
      	        case 1:
      	        printf("%d + %d = %d", a, b , a+b);
		        break;
		        case 2:
		        printf("%d - %d = %d", a, b , a-b);
		        break;
		        case 3:
		        printf("%d * %d = %d", a, b , a*b);
		        break;
		        case 4:
		        printf("%d / %d = %d", a, b , a/b);
		        break;
		        case 5:
		        printf("%d %% %d = %d", a, b , a%b);
		        break;
		        default:
		        printf("invalid");
        }
        break;
     case 2:
	    printf("choose one of the folloing opetion \n1)< \n2)<= \n3)> \n4)>= \n5)== \n6)/=\n");
      	scanf("%d",&sub_choice);
    //   	break;
      	switch(sub_choice)
      	{
		  
      	      case 1:
      	      printf("%d < %d = %d", a, b , a<b);
		      break;
		      case 2:
      	      printf("%d <= %d = %d", a, b , a<=b);
		      break;
		      case 3:
      	      printf("%d > %d = %d", a, b , a>b);
		      break;
		      case 4:
      	      printf("%d >= %d = %d", a, b , a>=b);
		      break;
		      case 5:
      	      printf("%d == %d = %d", a, b , a==b);
		      break; 
		      case 6:
      	      printf("%d /= %d = %d", a, b , a/=b);
		     break; 
		     default:
      	     printf("invalid");  
        }
        break;
     case 3:
	    printf("choose one of the folloing opetion \n1)& \n2)/ \n3)^ \n");
      	scanf("%d",&sub_choice);
    //   	break;
      	switch(sub_choice)
      	{
		  
      	      case 1:
      	      printf("%d & %d = %d", a, b , a&b);
		      break;
		      case 2:
      	      printf("%d / %d = %d", a, b , a/b);
		      break;
		      case 3:
      	      printf("%d ^ %d = %d", a, b , a^b);
		      break;
		      default:
		      printf("invalid");
      	}
      	break;
    }
  
}
