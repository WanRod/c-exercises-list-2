#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void question1()
{
    int numbers[6];
    int i;

    printf("********* Question 1 - Read and write 6 integers entered numbers *********\n\n");

    for(i = 0; i < 6; i++)
    {
        printf("Enter the %dº number: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    system("cls");

    for(i = 0; i < 6; i++)
    {
        printf("The number of the %dº position in the array is: %d\n", i, numbers[i]);
    }
}

void question2()
{
    char word1[50], word2[50], word3[50];
    int i;

    printf("********* Question 2 - Read 3 words and print in reverse order *********\n\n");

    printf("Enter the first word: ");
    fgets(word1, sizeof(word1), stdin);
    word1[strcspn(word1, "\n")] = '\0';    

    printf("Enter the second word: ");
    fgets(word2, sizeof(word2), stdin);
    word2[strcspn(word2, "\n")] = '\0';

    printf("Enter the third word: ");
    fgets(word3, sizeof(word3), stdin);
    word3[strcspn(word3, "\n")] = '\0';

    system("cls");

    printf("The first word in reverse order is: ");

    for(i = strlen(word1) - 1; i >= 0; i--)
    {
        printf("%c", word1[i]);
    }

    printf("\nThe second word in reverse order is: ");

    for(i = strlen(word2) - 1; i >= 0; i--)
    {
        printf("%c", word2[i]);
    }

    printf("\nThe third word in reverse order is: ");

    for(i = strlen(word3) - 1; i >= 0; i--)
    {
        printf("%c", word3[i]);
    }
}

void question3()
{
    double set[10], setOfSquares[10];
    int i;

    printf("********* Question 3 - Read a set of real numbers and print their squares *********\n\n");

    for(i = 0; i < 10; i++)
    {     
        printf("Enter the %dº number: ", i + 1);
        scanf("%lf", &set[i]);
    
        setOfSquares[i] = set[i] * set[i];
    }

    system("cls");

    printf("\nSet of entered numbers:\n");

    for(i = 0; i < 10; i++)
    {
        printf("\nThe %dº entered number is: %.2lf", i + 1, set[i]);
    }

    printf("\n\nSet of squares:\n");

    for(i = 0; i < 10; i++)
    {
        printf("\nThe square of the %dº entered number is: %.2lf", i + 1, setOfSquares[i]);
    }
}


int main()
{
    setlocale(LC_ALL, "");

    question1();

    return 0;
}