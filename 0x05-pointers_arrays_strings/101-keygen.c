#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8  // Adjust this based on the criteria

void generate_password(char *password, size_t length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    size_t charset_size = sizeof(charset) - 1;
    
    for (size_t i = 0; i < length; i++) {
        password[i] = charset[rand() % charset_size];
    }
    password[length] = '\0';
}

int main() {
    srand(time(NULL));  // Seed the random number generator

    char password[PASSWORD_LENGTH + 1];
    generate_password(password, PASSWORD_LENGTH);

    printf("Generated password: %s\n", password);

    return 0;
}

