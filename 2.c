#include <stdio.h>

void fortune_cookie(char msg[]) {
    printf("Soobshenie glasit: %s\n", msg);
    printf("dlina soobsheniya: %lu", sizeof(msg));
}

int main() {
    char quotes[] = "pechenie vas polnit!";
    fortune_cookie(quotes);
    return 0;
}