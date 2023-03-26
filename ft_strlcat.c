#include <stdio.h>
#include <string.h>
#include <stddef.h>
size_t ft_strlcat(char *dst, const char *src, size_t size) {
    size_t i;
    size_t j;

    i = 0;
    while (dst[i] != '\0' && i < size) {
        i++;
    }

    j = 0;
    while (src[j] != '\0' && i + j + 1 < size) {
        dst[i + j] = src[j];
        j++;
    }

    if (i < size) {
        dst[i + j] = '\0';
    }

    while (src[j] != '\0') {
        j++;
    }

    return i + j;
}
int main() {
    char str1[] = "hello";
    char str2[] = "world";
    size_t size = 16;

    // Test your implementation
    size_t result1 = ft_strlcat(str1, str2, size);
    printf("my_strlcat:\n");
    printf("  Result: %zu\n", result1);
    printf("  String: %s\n", str1);

    // Test the standard library implementation
    char str3[] = "hello";
    char str4[] = "world";
    size_t result2 = strlcat(str3, str4, size);
    printf("strlcat:\n");
    printf("  Result: %zu\n", result2);
    printf("  String: %s\n", str3);

    // Compare the results
    if (result1 == result2 && strcmp(str1, str3) == 0) {
        printf("Results are the same.\n");
    } else {
        printf("Results are different.\n");
    }

    return 0;
}
