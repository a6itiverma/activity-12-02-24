#include <stdio.h>

int main() {
    char alphabet;

    printf("enter an alphabet: ");
    scanf("%c", &alphabet);

    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
        {
        printf("%c is a %s.\n", alphabet,
               (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
                alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') ? "vowel" : "consonant");
    }
    else
    {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}

