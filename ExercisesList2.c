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

    printf("********* Question 8 -  *********\n\n");

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

    printf("********* Question 9 - *********\n\n");

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

    printf("********* Question 10 - *********\n\n");

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

    printf("********* Question 11 - *********\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter a real number: ");
        scanf("%lf", &numbers[i]);
    }
  
    printf("\nEnter the code (0 - exit | 1 - Print the numbers in order | 2 - Print numbers in reverse order): ");
    scanf("%d", &code);

    while (code != 0 && code != 1 && code !=2)
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

    printf("********* Question 12 - *********\n\n");

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

    printf("********* Question 13 - *********\n\n");

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
    double matrix[4][4];
    double maxValue = matrix[0][0];
    int max_row = 0;
    int max_col = 0;
    int i, j;

    printf("********* Question 14 - *********\n\n");

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
            printf("%.2lf ", matrix[i][j]);
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

    printf("********* Question 15 - *********\n\n");

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

    printf("********* Question 16 - *********\n\n");

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

    printf("********* Question 17 - *********\n\n");

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

    printf("********* Question 18 - *********\n\n");

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

    printf("********* Question 19 - *********\n\n");

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
        if(matrix[i][3] > matrix[highestFinalGradePosition][3])
        {
            highestFinalGradePosition = i;
        }
    }
    
    printf("The student with enrollment number %d obtained the highest final grade, which is: %d", matrix[highestFinalGradePosition][0], matrix[highestFinalGradePosition][3]);

    printf("\n\nThe average of the final grades is: %.2lf", finalGradesAverage);
}

int main()
{
    int question;

    setlocale(LC_ALL, "");

    printf("******** Exercises list 2 - Vectors and Matrices ********\n\n");

    printf("Select a question (1 - 20): ");
    scanf("%d", &question);

    switch (question)
    {
        case 1:
            system("cls");

            question1();
            break;

        case 2:
            system("cls");
            
            question2();
            break;

        case 3:
            system("cls");
            
            question3();
            break;

        case 4:
            system("cls");
            
            question4();
            break;

        case 5:
            system("cls");
            
            question5();
            break;    

        case 6:
            system("cls");
            
            question6();
            break;  

        case 7:
            system("cls");
            
            question7();
            break;  

        case 8:
            system("cls");
            
            question8();
            break;

        case 9:
            system("cls");
            
            question9();
            break;    

        case 10:
            system("cls");
            
            question10();
            break;  

        case 11:
            system("cls");
            
            question11();
            break;  

        case 12:
            system("cls");
            
            question12();
            break;

        case 13:
            system("cls");
            
            question13();
            break;    

        case 14:
            system("cls");
            
            question14();
            break;  

        case 15:
            system("cls");
            
            question15();
            break;  

        case 16:
            system("cls");
            
            question16();
            break;

        case 17:
            system("cls");
            
            question17();
            break;    

        case 18:
            system("cls");
            
            question18();
            break;  

        case 19:
            system("cls");
            
            question19();
            break;  

        case 20:
            break;  

        default:
            system("exit");
            break;
    }
    
    return 0;
}