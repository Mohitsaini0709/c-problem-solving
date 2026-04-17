#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;
    
    printf("Enter a string: ");
    scanf("%s", str1);
    
    // Copy each character from str1 to str2
    i = 0;
    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';  // Add null character at end
    
    printf("Original string: %s\n", str1);
    printf("Copied string: %s\n", str2);
    
    return 0;
}