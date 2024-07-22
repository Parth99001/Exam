#include <stdio.h>
void main() {
    char str[100];

  
    printf("Enter a String: ");
    scanf("%s", str); 

    
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    char rev[100]; 
    for (int i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i]; 
    }
    rev[length] = '\0'; 
    int isPalindrome = 1;
    for (int i = 0; i < length; i++) {
        if (str[i] != rev[i]) { 
            isPalindrome = 0; 
            break; 
        }
    }
    if (isPalindrome) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }
}