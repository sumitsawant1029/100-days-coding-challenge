// Program To Calculate Easy Operations using C

#include<stdio.h>

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