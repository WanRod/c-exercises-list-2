#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

void question1()
{
    int numbers[6];
    int i;

    printf("********* Question 1 - Read and write 6 integers entered numbers *********\n\n");

    for (i = 0; i < 6; i++)
    {
        printf("Enter the %dº number: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\n");

    for (i = 0; i < 6; i++)
    {
        printf("The number in position %d of the array is: %d\n", i, numbers[i]);
    }
}

void question2()
{
    char word1[50], word2[50], word3[50];
    int i;

    printf("********* Question 2 - Read 3 words and print in reverse order *********\n\n");

    printf("Enter the first word: ");
    fflush(stdin);
    scanf("%s", word1);

    printf("Enter the second word: ");
    fflush(stdin);
    scanf("%s", word2);

    printf("Enter the third word: ");
    fflush(stdin);
    scanf("%s", word3);

    printf("\nThe first word in reverse order is: ");

    for (i = strlen(word1) - 1; i >= 0; i--)
    {
        printf("%c", word1[i]);
    }

    printf("\nThe second word in reverse order is: ");

    for (i = strlen(word2) - 1; i >= 0; i--)
    {
        printf("%c", word2[i]);
    }

    printf("\nThe third word in reverse order is: ");

    for (i = strlen(word3) - 1; i >= 0; i--)
    {
        printf("%c", word3[i]);
    }
}

void question3()
{
    double set[10], setOfSquares[10];
    int i;

    printf("********* Question 3 - Read a set of real numbers and print their squares *********\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter the %dº number: ", i + 1);
        scanf("%lf", &set[i]);

        setOfSquares[i] = set[i] * set[i];
    }

    printf("\nSet of entered numbers:\n");

    for (i = 0; i < 10; i++)
    {
        printf("\nThe %dº entered number is: %.2lf", i + 1, set[i]);
    }

    printf("\n\nSet of squares:\n");

    for (i = 0; i < 10; i++)
    {
        printf("\nThe square of the %dº entered number is: %.2lf", i + 1, setOfSquares[i]);
    }
}

void question4()
{
    int numbers[10], evenValues[10];
    int i, count = 0;

    printf("********* Question 4 - Read a 10 position vector and write how many even values it has *********\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter the value of %dº position of the vector: ", i);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0)
        {
            evenValues[count] = numbers[i];
            count++;
        }
    }

    printf("\nNumber of even values: %d", count);

    for (i = 0; i < count; i++)
    {
        printf("\n%dº value: %d", i + 1, evenValues[i]);
    }
}

void question5()
{
    double numbers[10];
    double maxNumber, minNumber;
    int i;

    printf("********* Question 5 - Read a vector with 10 positions and print the largest and the smallest element *********\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter the %dº value: ", i + 1);
        scanf("%lf", &numbers[i]);
    }

    maxNumber = numbers[0];
    minNumber = numbers[0];

    for (i = 1; i < 10; i++)
    {
        if (numbers[i] > maxNumber)
        {
            maxNumber = numbers[i];
        }

        if (numbers[i] < minNumber)
        {
            minNumber = numbers[i];
        }
    }

    printf("\nLargest number: %.2lf\n", maxNumber);
    printf("Smallest number: %.2lf\n", minNumber);
}

void question6()
{
    double numbers[10];
    double maxNumber, minNumber;
    int maxPosition, minPosition;
    int i;

    printf("********* Question 6 - Read a vector with 10 positions and print the vector, the largest and the smallest element *********\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter the %dº value: ", i + 1);
        scanf("%lf", &numbers[i]);
    }

    maxNumber = numbers[0];
    minNumber = numbers[0];
    maxPosition = minPosition = 0;

    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("The element %d of the vector is %.2lf\n", i, numbers[i]);
    }

    for (i = 1; i < 10; i++)
    {
        if (numbers[i] > maxNumber)
        {
            maxNumber = numbers[i];
            maxPosition = i;
        }

        if (numbers[i] < minNumber)
        {
            minNumber = numbers[i];
            minPosition = i;
        }
    }

    printf("\nThe largest number is %.2lf and its position in the vector is %d\n", maxNumber, maxPosition + 1);
    printf("The smallest number is %.2lf and its position in the vector is %d\n", minNumber, minPosition + 1);
}

void question7()
{
    double grades[15], average = 0;
    int i;

    printf("********* Question 7 - Read 15 student grades and print the average *********\n\n");

    for (i = 0; i < 15; i++)
    {
        printf("Enter the %dº grade: ", i + 1);
        scanf("%lf", &grades[i]);

        average += grades[i];
    }

    average = average / 15;

    printf("\n\nThe average is: %.2lf", average);
}

void question8()
{
    double realNumbers[10];
    double positiveNumbersSum = 0;
    int i, negativeNumbers = 0;

    printf("********* Question 8 - Read a vector with 10 real numbers, print the number of negative numbers and the sum of positive numbers *********\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter the %dº value: ", i + 1);
        scanf("%lf", &realNumbers[i]);

        if (realNumbers[i] < 0)
        {
            negativeNumbers++;
        }

        if (realNumbers[i] > 0)
        {
            positiveNumbersSum += realNumbers[i];
        }
    }

    printf("\n\nNumbers of negative numbers: %d", negativeNumbers);
    printf("\nSum of positive numbers: %.2lf", positiveNumbersSum);
}

void question9()
{
    double numbers[5];
    int smallestNumberPosition = 0, largestNumberPosition = 0;
    int i;

    printf("********* Question 9 - Read 5 values and print the position of the largest and smallest value*********\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%lf", &numbers[i]);
    }

    double smallestNumber = numbers[0];
    double largestNumber = numbers[0];

    for (i = 1; i < 5; i++)
    {
        if (numbers[i] < smallestNumber)
        {
            smallestNumber = numbers[i];
            smallestNumberPosition = i;
        }

        if (numbers[i] > largestNumber)
        {
            largestNumber = numbers[i];
            largestNumberPosition = i;
        }
    }

    printf("\nThe position of the smallest number in the array is: %d\n", smallestNumberPosition);
    printf("The position of the largest number in the array is: %d\n", largestNumberPosition);
}

void question10()
{
    double numbers[10];
    int i;

    printf("********* Question 10 - Read 10 values and set all negative values to 0 *********\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter the element %d: ", i);
        scanf("%lf", &numbers[i]);

        if (numbers[i] < 0)
        {
            numbers[i] = 0;
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("\nThe value of the element %d of the vector is: %.2lf", i, numbers[i]);
    }
}

void question11()
{
    double numbers[5];
    int i, code;

    printf("********* Question 11 - Read 5 real numbers and show a selection menu *********\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter a real number: ");
        scanf("%lf", &numbers[i]);
    }

    printf("\nEnter the code (0 - exit | 1 - Print the numbers in order | 2 - Print numbers in reverse order): ");
    scanf("%d", &code);

    while (code != 0 && code != 1 && code != 2)
    {
        printf("\nInvalid code, try again: ");
        scanf("%d", &code);
    }

    if (code == 1)
    {
        printf("\n--- Numbers in order ---");
        for (i = 0; i < 5; i++)
        {
            printf("\nElement %d: %.2lf", i, numbers[i]);
        }
    }
    else if (code == 2)
    {
        printf("\n--- Numbers in reverse order ---");
        for (i = 4; i >= 0; i--)
        {
            printf("\nElement %d: %.2lf", i, numbers[i]);
        }
    }
}

void question12()
{
    double matrix[4][4];
    int i, j, numbersGreatherThan10 = 0;

    printf("********* Question 12 - Read a 4 x 4 matrix, count and write how many values greater than 10 it has *********\n\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter the value of row %d and column %d of the matrix: ", i + 1, j + 1);
            scanf("%lf", &matrix[i][j]);

            if (matrix[i][j] > 10)
            {
                numbersGreatherThan10++;
            }
        }
    }

    if (numbersGreatherThan10 < 1)
    {
        printf("\n\nIn the inserted matrix there is no number greater than 10.");
    }
    else if (numbersGreatherThan10 == 1)
    {
        printf("\n\nIn the inserted matrix there is 1 number greater than 10.");
    }
    else
    {
        printf("\n\nIn the inserted matrix there are %d numbers greater than 10.", numbersGreatherThan10);
    }
}

void question13()
{
    int matrix[5][5];
    int i, j;

    printf("********* Question 13 - Print a 5x5 identity matrix *********\n\n");

    printf("----- Matrix -----\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matrix[i][j] = 0;

            if (i == j)
            {
                matrix[i][j] = 1;
            }

            printf("%3d", matrix[i][j]);
        }

        printf("\n");
    }
}

void question14()
{
    double matrix[4][4] = {0};
    double maxValue = matrix[0][0];
    int max_row = 0;
    int max_col = 0;
    int i, j;

    printf("********* Question 14 - Read a 4x4 matrix and print the position of the largest value *********\n\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter the value of row %d and column %d of the matrix: ", i + 1, j + 1);
            scanf("%lf", &matrix[i][j]);

            if (matrix[i][j] > maxValue)
            {
                maxValue = matrix[i][j];
                max_row = i + 1;
                max_col = j + 1;
            }
        }
    }

    printf("\n--- Matrix entered ---\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2lf", matrix[i][j]);
            
            if(j != 3)
            {
                printf(" | ");
            }
        }

        printf("\n");
    }

    printf("\n\nThe maximum value is %.2lf and it is located at row %d and column %d.\n", maxValue, max_row, max_col);
}

void question15()
{
    int matrix[5][5];
    int i, j, valueX;
    int row = 0, col = 0, found = 0;

    printf("********* Question 15 - Read a 5x5 matrix and search for a value inserted in the matrix *********\n\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Enter the value of row %d and column %d of the matrix: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nEnter the value to search (X): ");
    scanf("%d", &valueX);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matrix[i][j] == valueX)
            {
                found = 1;
                row = i + 1;
                col = j + 1;
                break;
            }
        }
        if (found == 1)
        {
            break;
        }
    }

    if (found == 1)
    {
        printf("\nThe value %d is located at row %d and column %d.\n", valueX, row, col);
    }
    else
    {
        printf("\nThe value %d was not found in the matrix.\n", valueX);
    }
}

void question16()
{
    int firstMatrix[4][4], secondMatrix[4][4], thirdMatrix[4][4];
    int i, j;

    printf("********* Question 16 - Read two 4x4 matrices and print a matrix whose elements are the largest values in each matrix *********\n\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter the value of row %d and column %d of the first matrix: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter the value of row %d and column %d of the second matrix: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);

            if (firstMatrix[i][j] > secondMatrix[i][j])
            {
                thirdMatrix[i][j] = firstMatrix[i][j];
            }
            else
            {
                thirdMatrix[i][j] = secondMatrix[i][j];
            }
        }
    }

    printf("\n----- Final matrix -----\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", thirdMatrix[i][j]);
        }

        printf("\n");
    }
}

void question17()
{
    int matrix[3][3];
    int i, j, mainDiagonalSum = 0;

    printf("********* Question 17 - Read a 3 x 3 matrix and calculate the sum of the elements that are on the main diagonal *********\n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the value of row %d and column %d of the matrix: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);

            if (i == j)
            {
                mainDiagonalSum += matrix[i][j];
            }
        }
    }

    printf("\n\nThe sum of the main diagonal values is: %d", mainDiagonalSum);
}

void question18()
{
    int matrix[4][4], lowerTriangularMatrix[4][4];
    int i, j;

    printf("********* Question 18 - Generate a 4x4 matrix with numbers from 1 to 20 and reset the elements above the main diagonal *********\n\n");

    srand(time(NULL));

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matrix[i][j] = rand() % 20 + 1;

            if (j > i)
            {
                lowerTriangularMatrix[i][j] = 0;
            }
            else
            {
                lowerTriangularMatrix[i][j] = matrix[i][j];
            }
        }
    }

    printf("\n----- Matrix -----\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%4d", matrix[i][j]);
        }

        printf("\n");
    }

    printf("\n----- Lower triangular matrix -----\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%4d", lowerTriangularMatrix[i][j]);
        }

        printf("\n");
    }
}

void question19()
{
    int matrix[5][4];
    int highestFinalGradePosition = 0;
    double finalGradesAverage = 0;
    int i, j;

    printf("********* Question 19 - Read a student grade table and print your final grades *********\n\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                printf("Enter student registration number %d: ", i + 1);
                scanf("%d", &matrix[i][j]);
            }
            else if (j == 1)
            {
                printf("Enter the average value of student %d tests: ", i + 1);
                scanf("%d", &matrix[i][j]);
            }
            else if (j == 2)
            {
                printf("Enter the average grade of student %d work: ", i + 1);
                scanf("%d", &matrix[i][j]);
            }
        }

        matrix[i][3] = matrix[i][1] + matrix[i][2];

        finalGradesAverage += matrix[i][3];
        printf("\n");
    }

    finalGradesAverage = finalGradesAverage / 5;

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        if (matrix[i][3] > matrix[highestFinalGradePosition][3])
        {
            highestFinalGradePosition = i;
        }
    }

    printf("The student with enrollment number %d obtained the highest final grade, which is: %d", matrix[highestFinalGradePosition][0], matrix[highestFinalGradePosition][3]);

    printf("\n\nThe average of the final grades is: %.2lf", finalGradesAverage);
}

void question20()
{
    int studentAnswers[10], templateAnswers[10];
    int i, numberOfCorrectAnswers = 0;

    printf("********* Question 20 - Correct a test with 10 multiple choice questions *********\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter the correct asnwers of the question %d (A -> 1 | B -> 2 | C -> 3 | D -> 4): ", i + 1);
        scanf("%d", &templateAnswers[i]);
    }

    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter the student asnwers of the question %d (A -> 1 | B -> 2 | C -> 3 | D -> 4): ", i + 1);
        scanf("%d", &studentAnswers[i]);

        if (templateAnswers[i] == studentAnswers[i])
        {
            numberOfCorrectAnswers++;
        }
    }
    
    if (numberOfCorrectAnswers < 7)
    {
        printf("\n\nThe student was disapproved with %d correct answers.", numberOfCorrectAnswers);
    }
    else
    {
        printf("\n\nThe student was approved with %d correct answers.", numberOfCorrectAnswers);
    }
}

int main()
{
    int question;
    char continueExercise, comeBackToMenu;

    setlocale(LC_ALL, "");

    do
    {
        system("cls");

        printf("******** Exercises list 2 - Vectors and Matrices ********\n\n");

        printf("Select a question (1 - 20): ");
        scanf("%d", &question);

        switch (question)
        {
            case 1:
                do
                {
                    system("cls");

                    question1();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 2:
                do
                {
                    system("cls");

                    question2();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');
                
                break;

            case 3:
                do
                {
                    system("cls");

                    question3();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 4:
                do
                {
                    system("cls");

                    question4();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 5:
                do
                {
                    system("cls");

                    question5();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 6:
                do
                {
                    system("cls");

                    question6();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 7:
                do
                {
                    system("cls");

                    question7();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 8:
                do
                {
                    system("cls");

                    question8();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 9:
                do
                {
                    system("cls");

                    question9();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 10:
                do
                {
                    system("cls");

                    question10();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 11:
                do
                {
                    system("cls");

                    question11();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 12:
                do
                {
                    system("cls");

                    question12();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 13:
                do
                {
                    system("cls");

                    question13();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 14:
                do
                {
                    system("cls");

                    question14();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 15:
                do
                {
                    system("cls");

                    question15();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 16:
                do
                {
                    system("cls");

                    question16();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 17:
                do
                {
                    system("cls");

                    question17();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 18:
                do
                {
                    system("cls");

                    question18();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 19:
                do
                {
                    system("cls");

                    question19();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 20:
                do
                {
                    system("cls");

                    question20();
                    
                    printf("\n\nDo you wanna repeat the exercise (y/n): ");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    printf("\n");

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("Invalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            default:
                printf("\nInvalid entry.");
                break;
        }

        printf("\n\nDo you want to go back to the start menu (y/n): ");
        fflush(stdin);
        scanf("%c", &comeBackToMenu);

        if (comeBackToMenu == 'n' || comeBackToMenu == 'Y')
        {
            system("exit");
        }

        printf("\n");

        while (comeBackToMenu != 'y' && comeBackToMenu != 'n' && comeBackToMenu != 'Y' && comeBackToMenu != 'N')
        {
            printf("Invalid entry, please enter 'y' or 'n': ");
            fflush(stdin);
            scanf("%c", &comeBackToMenu);
        }

    } while (comeBackToMenu == 'y' || comeBackToMenu == 'Y');

    return 0;
}