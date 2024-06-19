#include<stdio.h>
void add(int num1, int num2){
    printf("The Addition of %d is %d = %d",num1,num2,num1+num2);
}
void sub(int num1, int num2){
    printf("The Sub of %d is %d = %d",num1,num2,num1-num2);
}
void multi(int num1, int num2){
    printf("The Multi of %d is %d = %d",num1,num2,num1*num2);
}
void div(int num1, int num2){
    printf("The div of %d is %d = %d",num1,num2,num1/num2);
}
void modulo(int num1, int num2){
    printf("The Modulo of %d is %d = %d",num1,num2,num1%num2);
}

int main(){
    int num1,num2;
    int press;
    do{
    printf("\nEnter Num1 :");
    scanf("%d",&num1);
    printf("\nEnter Num2 :");
    scanf("%d",&num2);

    printf("1.Add\n");
    printf("2.Sub\n");
    printf("3.Multi\n");
    printf("4.Devide\n");
    printf("5.Modulo\n");
    printf("6.Exit\n");
    printf("enter number of your Choice :");

    scanf("%d",&press);
    switch(press){
        case 1 :
        add(num1,num2);
        break;
        case 2 :
        sub(num1,num2);
        break;
        case 3 :
        multi(num1,num2);
        break;
        case 4 :
        div(num1,num2);
        break;
        case 5 :
        modulo(num1,num2);
        break;
        case 6 :
        break;
        default:
        printf("Invalid Number");
    }
    }while (press<6);
    
    return 0;
}