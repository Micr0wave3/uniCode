#include <stdio.h>

int main() {
    float ROSA, Exelcius, SpineAssist;
    float highest, diff1, diff2, diff3;

    printf("Enter accuracy for ROSA in percentage: ");
    scanf("%f", &ROSA);
    printf("Enter accuracy for Exelcius in percentage: ");
    scanf("%f", &Exelcius);
    printf("Enter accuracy for SpineAssist in percentage: ");
    scanf("%f", &SpineAssist);

    if (ROSA > Exelcius) {
        highest = (ROSA > SpineAssist) ? ROSA : SpineAssist;
    } else {
        highest = (Exelcius > SpineAssist) ? Exelcius : SpineAssist;
    }

    diff1 = highest - ROSA;
    diff2 = highest - Exelcius;
    diff3 = highest - SpineAssist;

    printf("Highest Accuracy: %.2f%%\n", highest);
    printf("Difference between ROSA and Highest: %.2f%%\n", diff1);
    printf("Difference between Exelcius and Highest: %.2f%%\n", diff2);
    printf("Difference between SpineAssist and Highest: %.2f%%\n", diff3);

    return 0;
}