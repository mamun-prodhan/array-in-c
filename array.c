#include<stdio.h>

int main(){

    int a[5];
    int sum = 0;

    for(int j = 0; j<=4; j++){
        scanf("%d", &a[j]);
        sum = sum + a[j];
    }

    printf("%d", sum);

    return 0;
}