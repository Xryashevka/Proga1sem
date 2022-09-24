#include <stdio.h>

int main() {
    char line[1024];
    gets(line);
    printf("%s\n", line);
    float vesh;
    scanf("%f",&vesh);
    printf("%f",vesh);
    return 0;
}
