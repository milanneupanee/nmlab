#include<stdio.h>
#include<math.h>

float fx(float y, float z) {
    float x = (17 - y + 2 * z) / 20;
    return x;
}

float fy(float x, float z) {
    float y = (-18 - 3 * x + z) / 20;
    return y;
}

float fz(float x, float y) {
    float z = (25 + 3 * y - 2 * x) / 20;
    return z;
}

int main() {
    float e = 0.001;
    float x = 0, y = 0, z = 0;
    float ex, ey, ez;

    do {
        float x_old = x;
        float y_old = y;
        float z_old = z;

        x = fx(y_old, z_old);
        y = fy(x, z_old);
        z = fz(x, y);

        ex = fabs(x - x_old);
        ey = fabs(y - y_old);
        ez = fabs(z - z_old);

    } while (ex > e && ey > e && ez > e);

    printf("The value of x=%f\n y=%f\n z=%f\n", x, y, z);
    return 0;
}

