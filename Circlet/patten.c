#include<stdio.h>
int main(){
    int n=45;
    for(int i=41;i<=n;i++){
        for(int j=41;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}