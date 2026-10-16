#include <stdio.h>
#include <unistd.h>

int main() {
    char path[1024];

    if (getcwd(path, sizeof(path)) != NULL)
        printf("%s\n", path);
    else
        perror("getcwd");

    return 0;
}