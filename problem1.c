#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    scanf("%d", &n);

    int a[n];
    long long int sum = 0;
    
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i<n; i++){
        sum = sum + a[i];
    }

    printf("%lld\n", llabs(sum));




    return 0;
}