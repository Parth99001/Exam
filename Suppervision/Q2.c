#include <stdio.h>
struct Structure {
    int rollNo;          
    char name[100];      
    int chemMarks;     
    int mathsMarks;     
    int phyMarks;        
}s[5];                  

void main() {
    
    for(int i = 0; i < 5; i++) {
        printf("Enter details of Student %d\n", i + 1);
        
        
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollNo);
        
        
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        
        
        printf("Enter Chemistry Marks: ");
        scanf("%d", &s[i].chemMarks);
        printf("Enter Mathematics Marks: ");
        scanf("%d", &s[i].mathsMarks);
        printf("Enter Physics Marks: ");
        scanf("%d", &s[i].phyMarks);
        
        printf("\n");
    }
    int total = 0;
    float per = 0;
    
    
    for(int i = 0; i < 5; i++) {
        printf("Details of Student %d:\n", i + 1);
        
       
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollNo);
        printf("Chemistry Marks: %d\n", s[i].chemMarks);
        printf("Mathematics Marks: %d\n", s[i].mathsMarks);
        printf("Physics Marks: %d\n", s[i].phyMarks);
    
        total = s[i].phyMarks + s[i].mathsMarks + s[i].chemMarks;
        per = (float)total / 3;
        
        printf("Total Marks: %d\n", total);
        printf("Percentage: %.2f%%\n", per);
        printf("-----------------------------------\n");
    }
}