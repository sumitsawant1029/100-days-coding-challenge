// Program To Calculate Easy Operations using C

#include<stdio.h>

// Funtion to Add Operants
void add(int a, int b){
    printf("The Sum Of %d & %d is ",a,b);
    printf(a+b);
}
// Funtion To Subtract Operands
void sub(int a, int b){
    if(a>b){
        printf("Difference Between Two Numbers %d & %d is",a,b);
        printf(a-b);
    }
    else{
        printf("Difference Between Two Numbers %d & %d is",b,a);
        printf(b-a);
    }
}
// Funtion To Multiply Two Numbers
void mul(int a, int b){
    printf("The Product Of %d & %d is",a,b);
    printf(a*b);
}

void div(int a , int b){
    if(a> b){
    printf("The Division Of %d & %d is ",a,b);
    printf(a/b);
    }
    else {
        printf("The Division Of %d & %d is ",b,a);
    printf(b/a);
    }



}




int main(){
    int a,b,c;
    printf("****************Operation******************");
    printf("Enter two Operands: ");
    scanf("%d %d",&a,&b);
    printf("/n");
    printf("Enter The Operant (*,/,+,-,%):");
    scanf("%c",&c);

    switch ()
    {
    case '*': mul(a,b);
              break;
    case '/': div(a,b);
              break;
    case '-': sub(a,b);
              break;
    case '+': add(a,b);
              break;
    default:  printf("You Entered A Wrong Choice");
        break;
    }

}