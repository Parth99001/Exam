#include<stdio.h>
void stringLength(char str[], int *len) {
   
    while (str[*len] != '\0') {
        (*len)++;
    }
}

void main() {
    char str[100]; 
    int len = 0; 

  
    printf("Enter a String: ");
    scanf("%s", str);


    stringLength(str, &len);

    printf("Length of String is %d", len);
}