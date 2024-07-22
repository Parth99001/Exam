#include<stdio.h>

void main() {
    char str[50];

    printf("Enter a String : ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        int len = 0;
     
        for(int j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                len++; 
            }
        }
        printf("%c = %d\n", str[i], len);
    }
}