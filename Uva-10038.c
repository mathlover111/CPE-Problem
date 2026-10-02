#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    long long a[3005]; 
    int used[3005];

    while (scanf("%d", &n) != EOF) {
        int is_jolly = 1;

   
        for (i = 0; i < 3005; i++) {
            used[i] = 0;
        }


        for (i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }

        if (n == 1) {
            printf("Jolly\n");
            continue;
        }


        for (i = 1; i < n; i++) {
            long long diff = llabs(a[i] - a[i - 1]); 

        
            if (diff >= 1 && diff <= n - 1) {
                if (used[diff] == 1) {
                    is_jolly = 0;
                    break;
                }
                used[diff] = 1;
            } else {
                is_jolly = 0;   
                break;
            }
        }

  
        if (is_jolly) {
            printf("Jolly\n");
        } else {
            printf("Not jolly\n");
        }
    }

    return 0;
}
