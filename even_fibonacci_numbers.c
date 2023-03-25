#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long int n, num, a = 1, b = 2, sum = 0;
        scanf("%llu",&n);

        while(b < n)
        {
            // num = b;
            if(b%2==0) sum += b;
            unsigned long long int c = b;
            b = a + b;
            a = c;
        }

        printf("%llu" ,sum);
    }
    return 0;
}
