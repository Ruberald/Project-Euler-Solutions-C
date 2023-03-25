#include <stdio.h>

unsigned long long int sum_till(unsigned long int n){
    return n * (n + 1)/2;
}

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        unsigned long int n;
        unsigned long long int sum;
        scanf("%lu", &n);

        unsigned long int limit = n - 1;
        sum = 3 * sum_till(limit/3)
            + 5 * sum_till(limit/5)
            - 15 * sum_till(limit/15);

        printf("%llu\n", sum);
    }
    return 0;
}
