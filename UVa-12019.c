#include <stdio.h>

int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

char *week[7] = {
    "Saturday", "Sunday", "Monday", "Tuesday", 
    "Wednesday", "Thursday", "Friday"
};

int main() {
    int t, m, d, i, total_days;

    if (scanf("%d", &t) != EOF) {
        while (t--) {
            scanf("%d %d", &m, &d);

            total_days = 0;
            for (i = 1; i < m; i++) {
                total_days += days_in_month[i];
            }

            total_days += (d - 1);

            printf("%s\n", week[total_days % 7]);
        }
    }

    return 0;
}
