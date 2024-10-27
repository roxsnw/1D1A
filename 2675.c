#include <stdio.h>

int main() {
    int num = 0;
    int rpt = 0;
    char sen[21] = { 'a' };

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d %s", &rpt, sen);

        for (int j = 0; sen[j] != '\0'; j++) {
            for (int k = 0; k < rpt; k++) {
                printf("%c", sen[j]);
            }
        }
        printf("\n");
    }

    return 0;
}