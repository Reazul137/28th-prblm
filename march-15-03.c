#include<stdio.h>
int main()
{
    float number[5], total=0, average;
    int j, positive = 0;

    printf("Input the first number : ");
    scanf("%f",&number[0]);

    printf("Input the second number : ");
    scanf("%f",&number[1]);

    printf("Input the third number : ");
    scanf("%f",&number[2]);

    printf("Input the fourth number : ");
    scanf("%f",&number[3]);

    printf("Input the fifth number : ");
    scanf("%f",&number[4]);

    for(j = 0; j < 5; j++)
    {
        if (number[j]>0)
        {
            positive++;
            total += number[j];
        }
    }

    average = total / positive;

    printf("\n\nNumber of positive number : %d\n", positive);
    printf("\nAverage value of the said position number %.2f", average);

    return 0;
}
