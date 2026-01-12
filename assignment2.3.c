#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    // If voucher covers the price
    if (B >= A)
        printf("0");
    else
        printf("%d", A - B);

    printf("\n\nNAME:-Nishant Bhagat, ERP_ID: RU-25-10898 \n");
    return 0;
}