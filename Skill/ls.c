#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
    char *path = ".";

    if (argc > 1)
        path = argv[1];

    DIR *dir = opendir(path);

    if (dir == NULL) {
        perror("opendir");
        return 1;
    }

    struct dirent *entry;

    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_name[0] != '.')
            printf("%s\n", entry->d_name);
    }

    closedir(dir);

    return 0;
}