#include <stdio.h>
main()
{
    char vc;
    printf("Enter any alphabetic charater\n");
    scanf("%c", &vc);

    switch (vc)
    {
    case 'a':
        printf("%c is a vowel", vc);
        break;
    case 'e':
        printf("%c is a vowel", vc);
        break;
    case 'i':
        printf("%c is a vowel", vc);
        break;
    case 'o':
        printf("%c is a vowel", vc);
        break;
    case 'u':
        printf("%c is a vowel", vc);
        break;
    case 'A':
        printf("%c is a vowel", vc);
        break;
    case 'E':
        printf("%c is a vowel", vc);
        break;
    case 'I':
        printf("%c is a vowel", vc);
        break;
    case 'O':
        printf("%c is a vowel", vc);
        break;
    case 'U':
        printf("%c is a vowel", vc);
        break;
    default:
        printf("%c is not a vowel", vc);
    }
    return 0;
}