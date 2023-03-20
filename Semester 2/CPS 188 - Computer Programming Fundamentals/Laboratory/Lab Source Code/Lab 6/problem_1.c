

#include <stdio.h>


void main(void)
{
    FILE* file;
    int amt, i;
    double min, max, x1, xh;
    file = fopen("data.txt", "r");
    while (!feof(file))
    {
        fscanf(file, "%d %lf %lf", &amt, &min, &max);
        double nums[amt], norm[amt];
        for (int i = 0; i < amt; i++)
        {
            fscanf(file, "%lf", &nums[i]);
        }
        x1 = nums[0];
        xh = nums[1];
        for (int i = 0; i < amt; i++)
        {
            if (nums[i] < x1)
            {
                x1 = nums[i];
            }
            else if (nums[i] > xh)
            {
                xh = nums[i];
            }            
        }
        for (int i = 0; i < amt; i++)
        {
            norm[i] = min + ((nums[i] - xh) * (max - min) / (xh - x1));
        }
        printf("Original\t\tNormalized\n");
        printf("--------    ----------\n");
        for (int i = 0; i < amt; i++)
        {
            printf("%.1lf\t\t%.1lf\n", nums[i], norm[i]);
        }
        fclose(file);
    }
}

