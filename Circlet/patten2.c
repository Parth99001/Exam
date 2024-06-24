#include<stdio.h>
int main(){
    int n=4,k=11;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            printf("%d",k++);
        }
        printf("\n");
    }
    return 0;
}