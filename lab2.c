#include <stdio.h>
#include <math.h>

float f(float x) {
    return x*x*x-4*x-9;
}

int main() {
    float a, b, c, e = 0.0001;
    int step = 1;

    printf("Enter the initial guesses a and b: ");
    scanf("%f%f", &a, &b);

    if (f(a) * f(b) > 0) {
        printf("Your initial guesses are wrong\n");
    } else {
        printf("| %-4s| %-8s| %-8s| %-8s| %-8s|\n", "Step", "a", "b", "c", "f(c)");
        printf("|-----|---------|---------|---------|---------|\n");

        do {
            c = a-((b-a)/(f(b)-f(a))*f(a));

            printf("| %-4d| %-8.4f| %-8.4f| %-8.4f| %-8.4f|\n", step, a, b, c, f(c));

            if (f(a) * f(c) > 0) {
                a = c;
            } else {
                b = c;
            }

            step++;
        } while (fabs(f(c)) > e);

        printf("|-----|---------|---------|---------|---------|\n");
        printf("Final Answer: c = %f\n", c);
    }

    return 0;
}

