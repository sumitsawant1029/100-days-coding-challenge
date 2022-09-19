// Program To Calculate Easy Operations using C

#include<stdio.h>

// Funtion to Add Operants
void add(int a, int b)// Passing The Operands
{	
    printf("The Sum Of %d & %d is %d ",a,b,a+b);
}

// Funtion To Subtract Operands
void sub(int a, int b)
{	
	int c;
    if(a>b)
    {
    	c=a-b;
        printf("Difference Between Two Numbers %d & %d is %d ",a,b,c);
        
    }
    else
    { 
    	c=b-a;
        printf("Difference Between Two Numbers %d & %d is %d",b,a,c);
    }
}
// Funtion To Multiply Two Numbers
void mul(int a, int b)
{
	int c;
	c=a*b;
    printf("The Product Of %d & %d is %d",a,b,c);
}

// Funtion To Divide two Numbers
void div(int a , int b)
{	
	int c;
    if(a> b)
    {	
    	c=a/b;
        printf("The Division Of %d & %d is %d ",a,b,c);
    }
    else 
    {
    	c=b/a;
        printf("The Division Of %d & %d is %d",b,a,c);
    }
}




int main(){
    int a,b,c;
    
    printf("****************Operation******************\n");
    printf("Enter two Operands: ");
    scanf("%d %d",&a,&b);
    printf("1)*\n2)/\n3)+\n4)-\n 5) Enter Your Choice:");
    scanf("%d",&c);
    
    switch (c)
    {
    case 1: mul(a,b);
              break;
    case 2: div(a,b);
              break;
    case 4: sub(a,b);
              break;
    case 3: add(a,b);
              break;
    default:  printf("You Entered A Wrong Choice");
    }

}
