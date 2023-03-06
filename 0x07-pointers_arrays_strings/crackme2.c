#include <string.h>
#include <stdio.h>
int main() {
    char password[100];
    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(password, "secretpassword") == 0) {
        printf("Access granted!\n");
    } else {
        printf("Access denied.\n");
    }
    return 0;
}

