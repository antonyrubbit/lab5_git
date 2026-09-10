#include <stdio.h>

int main() {
#ifdef _WIN32
    printf("Hello, Windows!\n");
#else
    printf("Hello, Linux!\n");
#endif
    return 0;
}