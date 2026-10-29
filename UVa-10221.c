#include <stdio.h>
#include <math.h>

int main() {
    double s, a, r, deg, rad, arc, chord;
    char unit[10];
    double pi = acos(-1.0);

    while (scanf("%lf %lf %s", &s, &a, unit) != EOF) {
      
        r = 6440.0 + s;

        if (unit[0] == 'm') {
            deg = a / 60.0;
        } else {         
            deg = a;
        }

        while (deg > 360.0) {
            deg -= 360.0;
        }
        if (deg > 180.0) {
            deg = 360.0 - deg;
        }

        rad = deg * pi / 180.0;

        arc = r * rad;
        chord = 2.0 * r * sin(rad / 2.0);

        printf("%.6f %.6f\n", arc, chord);
    }

    return 0;
}
