#include <stdio.h>
#include <string.h>
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
char dir_char[5] = "NESW";

int scent[55][55];

int get_dir(char c) {
    int i; 
    for (i = 0; i < 4; i++) {
        if (dir_char[i] == c) return i;
    }
    return 0;
}

int main() {
    int max_x, max_y;

    while (scanf("%d %d", &max_x, &max_y) != EOF) {
        memset(scent, 0, sizeof(scent));

        int x, y;
        char d_char;
        char a[105];

        while (scanf("%d %d %c", &x, &y, &d_char) != EOF) {
            scanf("%s", a);

            int dir = get_dir(d_char);
            int is_lost = 0;
            int i; 
            for (i = 0; a[i] != '\0'; i++) {
                if (a[i] == 'R') {
                    dir = (dir + 1) % 4;
                } else if (a[i] == 'L') {
                    dir = (dir + 3) % 4;
                } else if (a[i] == 'F') {
                    int nx = x + dx[dir];
                    int ny = y + dy[dir];

                    if (nx < 0 || nx > max_x || ny < 0 || ny > max_y) {
                        if (!scent[x][y]) {
                            scent[x][y] = 1;
                            is_lost = 1;
                            break;
                        }
                    } else {
                        x = nx;
                        y = ny;
                    }
                }
            }

            if (is_lost) {
                printf("%d %d %c LOST\n", x, y, dir_char[dir]);
            } else {
                printf("%d %d %c\n", x, y, dir_char[dir]);
            }
        }
    }
    return 0;
}
