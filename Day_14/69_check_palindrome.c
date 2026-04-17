#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;
    int same = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Find length
    while(str[len] != '\0') {
        len++;
    }
    
    // Check if same from both sides
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            same = 0;
            break;
        }
    }
    
    if(same == 1) {
        printf("%s is Palindrome\n", str);
    } else {
        printf("%s is NOT Palindrome\n", str);
    }
    
    return 0;
}