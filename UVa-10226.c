#include <stdio.h>
#include <string.h>

struct Tree {
    char name[35];
    int cnt;
} t[10005];

char line[35], tmp[35];

int main() {
    int n, i, j, k, num_types, total, found, tmp_cnt;

    if (scanf("%d", &n) != EOF) {
        getchar();
        gets(tmp); 

        for (k = 0; k < n; k++) {
            if (k > 0) printf("\n");

            num_types = 0;
            total = 0;

            while (gets(line) != NULL && line[0] != '\0') {
                total++;
                found = 0;

                for (i = 0; i < num_types; i++) {
                    if (strcmp(t[i].name, line) == 0) {
                        t[i].cnt++;
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    strcpy(t[num_types].name, line);
                    t[num_types].cnt = 1;
                    num_types++;
                }
            }

            for (i = 0; i < num_types - 1; i++) {
                for (j = i + 1; j < num_types; j++) {
                    if (strcmp(t[i].name, t[j].name) > 0) {
                        strcpy(tmp, t[i].name);
                        strcpy(t[i].name, t[j].name);
                        strcpy(t[j].name, tmp);

                        tmp_cnt = t[i].cnt;
                        t[i].cnt = t[j].cnt;
                        t[j].cnt = tmp_cnt;
                    }
                }
            }

            for (i = 0; i < num_types; i++) {
                printf("%s %.4f\n", t[i].name, (double)t[i].cnt * 100.0 / total);
            }
        }
    }

    return 0;
}
