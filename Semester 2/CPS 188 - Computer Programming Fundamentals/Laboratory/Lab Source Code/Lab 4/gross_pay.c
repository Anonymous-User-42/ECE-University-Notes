/*  Program to calculate the Gross Pay of a series of workers   */

#include <stdio.h>

int main()
{
    int employee_number, number_of_shifts, number_of_hrs, total_hrs,i;
    double wage_rate, gross_pay;
    FILE * in;
    in = fopen("L4_data.txt", "r");

    while(!feof(in)){
        fscanf(in, " %d %d %lf", &employee_number, &number_of_shifts, &wage_rate);
        i = 1;
        total_hrs = 0;
        while(i<= number_of_shifts){
            fscanf (in, "%d", &number_of_hrs);
            total_hrs = total_hrs + number_of_hrs;
            i++;
            }
            if (total_hrs <= 15){
                gross_pay = total_hrs * wage_rate;
                }
            else if (total_hrs >15 && total_hrs <= 25){
                gross_pay = (total_hrs * wage_rate * 1.05);
                }
            else if (total_hrs > 25){
                gross_pay = (total_hrs * wage_rate * 1.10);
                }
        printf("Employee Number     Total Hours        Gross Pay\n");
        printf("%8d%18d%20.2lf\n\n",employee_number,total_hrs,gross_pay);
    }
    
        fclose(in);
        return(0);
}
