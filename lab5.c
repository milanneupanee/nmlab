
//least squre method using c 
#include<stdio.h>
#include<math.h>

void input() {
    int n, sumy = 0, sumx = 0, sumxy = 0, sumxx = 0;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);
    int datax[n], datay[n];

    for (int i = 0; i < n; i++) {
        printf("Please enter the data x: ");
        scanf("%d", &datax[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Please enter the data y: ");
        scanf("%d", &datay[i]);
    }

    for (int i = 0; i < n; i++) {
        sumx = sumx + datax[i];
        sumy = sumy + datay[i];
        sumxy = sumxy + (datay[i] * datax[i]);
        sumxx = sumxx + (datax[i] * datax[i]);
    }

    // Avoid division by zero
    if (n * sumxx - sumx * sumx != 0) {
        float b = (n * sumxy - sumx * sumy) / (float) (n * sumxx - sumx * sumx);
        float a = (sumy - b * sumx) / (float) n;
        printf("The value of a and b is: %f %f\n", a, b);
    } else {
        printf("Cannot calculate. Division by zero.\n");
    }
}

int main() {
    input();
    return 0;
}

