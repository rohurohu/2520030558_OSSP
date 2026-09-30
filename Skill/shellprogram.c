#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    char command[100];

    while (1) {
        printf("\n===== SHELL =====\n");
        printf("1. ls\n");
        printf("2. pwd\n");
        printf("3. mkdir\n");
        printf("4. ps\n");
        printf("5. df\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("ls");
                break;

            case 2:
                system("pwd");
                break;

            case 3:
                printf("Enter directory name: ");
                scanf("%s", command);

                char mkdir_cmd[100];
                sprintf(mkdir_cmd, "mkdir %s", command);
                system(mkdir_cmd);
                break;

            case 4:
                system("ps");
                break;

            case 5:
                system("df -h");
                break;

            case 6:
                printf("Exiting shell...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
