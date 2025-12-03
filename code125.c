#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];

    printf("Enter first string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; 

    printf("Enter second string: ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0'; 
    int freqS[26] = {0};
    int freqT[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            freqS[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        if (t[i] >= 'a' && t[i] <= 'z')
            freqT[t[i] - 'a']++;
    }

    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freqS[i] != freqT[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}

