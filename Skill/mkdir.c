#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./mkdir <directory_name>\n");
        return 1;
    }

    if (mkdir(argv[1], 0777) == 0)
        printf("Directory created successfully\n");
    else
        perror("mkdir");

    return 0;
}