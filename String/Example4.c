#include <stdio.h>
#include <string.h>

int main() {
    // String Declaration
    char str1[10] = "Hello";
    char str2[10];

    // 1. strlen - String Length
    printf("1. Length of str1: %lu\n", strlen(str1));

    // 2. strcpy - String Copy
    strcpy(str2, str1);
    printf("2. Copy of str1: %s\n", str2);

    // 3. strcat - String Concatenation
    strcat(str1, " World");
    printf("3. Concatenated str1: %s\n", str1);

    // 4. strcmp - String Comparison
    int result = strcmp(str1, str2);
    printf("4. Comparison result: %d\n", result);

    // 5. strchr - Find first occurrence of a character in a string
    char *found = strchr(str1, 'o');
    printf("5. First 'o' in str1: %s\n", found);

    // 6. strstr - Find first occurrence of a substring in a string
    char *subStr = strstr(str1, "World");
    printf("6. Substring 'World' in str1: %s\n", subStr);

    // 7. strncpy - Copy a certain number of characters from one string to another
    strncpy(str2, str1, 3);
    printf("7. Copied first 3 characters of str1 to str2: %s\n", str2);

    // 8. strncat - Concatenate a certain number of characters from one string to another
    strncat(str2, "!!!", 2);
    printf("8. Concatenated 2 characters of '!!!' to str2: %s\n", str2);

    // 9. strncmp - Compare a certain number of characters in two strings
    result = strncmp(str1, str2, 5);
    printf("9. Comparison of first 5 characters in str1 and str2: %d\n", result);

    // 10. strtok - Tokenize a string
    char sentence[] = "This is a sample sentence.";
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        printf("10. Token: %s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
