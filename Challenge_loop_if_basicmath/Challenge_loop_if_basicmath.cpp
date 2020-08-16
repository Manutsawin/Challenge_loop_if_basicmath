#include<stdio.h>
#include<math.h>
int main()
{
    int num[2], loop;
    float sum = 0, X = 0, SD;
    scanf("%d %d", &num[0], &num[1]);
    if (num[0] < num[1])
    {
        for (loop = num[0]; loop <= num[1]; loop++)
        {
            printf("%d ", loop);
            sum = sum + loop;
            X = X + (loop * loop);

        }

        SD = (((num[1] - num[0] + 1) * X) - (sum * sum)) / ((num[1] - num[0]) * (num[1] - num[0] + 1));
        SD = sqrt(SD);
        printf("\n%.1f", sum / (num[1] - num[0] + 1));
        printf("\n%.2f", SD);
    }

    if (num[1] < num[0])
    {
        for (loop = num[0]; loop >= num[1]; loop--)
        {
            printf("%d ", loop);
            sum = sum + loop;
            X = X + (loop * loop);

        }

        SD = (((num[0] - num[1] + 1) * X) - (sum * sum)) / ((num[0] - num[1]) * (num[0] - num[1] + 1));
        SD = sqrt(SD);
        printf("\n%.1f", sum / (num[0] - num[1] + 1));
        printf("\n%.2f", SD);
    }
    return 0;
}
