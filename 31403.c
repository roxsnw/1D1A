#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    int ires = A + B - C;

    char strA[12], strB[12];
    snprintf(strA, sizeof(strA), "%d", A);
    snprintf(strB, sizeof(strB), "%d", B);

    char con[16];
    snprintf(con, sizeof(con), "%s%s", strA, strB);

    int icon = atoi(con);

    printf("%d\n", ires);
    printf("%d\n", icon - C);

    return 0;
}