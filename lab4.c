#include <stdio.h>
#include <math.h>

float f(float x) {
    return x*x*x-4*x-9;
}

float fdash(float x) {
    return 3*x*x-4;
}
int main() {
    float a, c, e = 0.0001;
    int step = 1;

    printf("Enter the initial guesses a ");
    scanf("%f", &a);

    if (fdash(a) == 0) {
        printf("Invalid equation.\n");
    } else {
    	
        printf("| %-4s| %-8s| %-8s| %-8s|\n", "Step", "a", "c", "f(c)");
        printf("|-----|---------|---------|---------|\n");

        do {
            c = a-(f(a)/fdash(a));

            printf("| %-4d| %-8.4f| %-8.4f| %-8.4f|\n", step, a, c, f(c));

            a=c;

            step++;
        } while (fabs(f(c)) > e);

        printf("|-----|---------|---------|---------|\n");
        printf("Final Answer: c = %f\n", c);
    }

    return 0;
}

