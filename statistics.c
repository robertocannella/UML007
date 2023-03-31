//*************************************************************
// Function: getMedian
//
// Purpose: Calculate the median of various inputs. Populates
//          a median struct using the stored employee data
//
// Parameters:
//
//   employeeData   - array of employees (i.e., struct employee)
//   median         - struct which stores various median values
//   size           - the array size (i.e., number of employees)
//
// Returns: median  - a struct containing the calculated median values
//
//**************************************************************
#include <printf.h>
#include "statistics.h"
#include "math.h"

struct median getMedian(struct employee employeeData[], struct median median, int size) {

    float total[5];
    int i;

    // Calculate median for net pay
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].netPay;
    }
    median.median_netPay =  calculateMedian(total, size);

    // Calculate median for federal tax
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].fedTax;
    }
    median.median_fedTax =  calculateMedian(total, size);

    // Calculate median for state tax
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].stateTax;
    }
    median.median_stateTax =  calculateMedian(total, size);

    // Calculate median for gross pay
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].grossPay;
    }
    median.median_grossPay =  calculateMedian(total, size);

    // Calculate median for overtime hours
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].overtimeHrs;
    }
    median.median_overtimeHrs =  calculateMedian(total, size);

    // Calculate median for hours
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].hours;
    }
    median.median_hours =  calculateMedian(total, size);

    // Calculate median of wages
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].wageRate;
    }
    median.median_wageRate =  calculateMedian(total, size);

    return median;
}
//*************************************************************
// Function: getSD
//
// Purpose: Calculate the standard deviation of various inputs. Populates
//          a std_dev struct using the stored employee data
//
// Parameters:
//
//   employeeData   - array of employees (i.e., struct employee)
//   stdDev         - struct which stores various standard deviation values
//   size           - the array size (i.e., number of employees)
//
// Returns: median  - a struct containing the calculated median values
//
//**************************************************************
struct std_dev getSD(struct employee employeeData[], struct std_dev stdDev, int size) {

    float total[5];
    int i;


    // Calculate Std Dev for net pay
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].netPay;
    }
    stdDev.std_dev_netPay =  calculateSD(total, size);

    // Calculate Std Dev for federal tax
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].fedTax;
    }
    stdDev.std_dev_fedTax =  calculateSD(total, size);

    // Calculate Std Dev for state tax
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].stateTax;
    }
    stdDev.std_dev_stateTax =  calculateSD(total, size);

    // Calculate Std Dev for gross pay
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].grossPay;
    }
    stdDev.std_dev_grossPay =  calculateSD(total, size);

    // Calculate Std Dev for overtime hours
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].overtimeHrs;
    }
    stdDev.std_dev_overtimeHrs =  calculateSD(total, size);

    // Calculate Std Dev for hours
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].hours;
    }
    stdDev.std_dev_hours =  calculateSD(total, size);

    // Calculate Std Dev for hours
    for (i = 0; i < size; ++i) {
        total[i] = employeeData[i].wageRate;
    }
    stdDev.std_dev_wageRate =  calculateSD(total, size);

    return stdDev;
}

// Utility Functions


// *************************************************************
// Function: calculateMedian
//
// Purpose: Calculate the median of a float array
//
// Parameters:
//
//   data           - array float values
//   n              - the size of the array
//
//  Returns: float  - the median float of the array
//
//**************************************************************

float calculateMedian(float data[],int n){


    sort(data,n);

    n = (n+1) / 2 - 1;      // -1 as array indexing in C starts from 0

    printf("Median = %2f \n", data[n]);

    return data[n];

}

// *************************************************************
// Function: calculateSD
//
// Purpose: Calculate the standard deviation of a float array
//
// Parameters:
//
//   data           - array float values
//   size            - the size of the array
//
//  Returns: float  - the standard deviation float of the array
//
//**************************************************************
float calculateSD(float data[], int size) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < size; ++i) {
        sum += data[i];
    }
    mean = sum / size;
    for (i = 0; i < size; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / size);
}

// *************************************************************
// Function: swap
//
// Purpose: swaps two pointer values
//
// Parameters:
//
//   p           - pointer to a variable
//   q           - pointer to a variable
//   t           - temporary holder
//
//  Returns: nothing
//
//**************************************************************

void swap(int *p,int *q) {
    int t;

    t=*p;
    *p=*q;
    *q=t;
}

// *************************************************************
// Function: sort
//
// Purpose: sorts two variable by reference.
//
// Parameters:
//
//   a           - float array
//   n           - size of the array
//
//  Returns: nothing
//
//**************************************************************

void sort(float a[],int n) {
    int i,j;

    for(i = 0;i < n-1;i++) {
        for(j = 0;j < n-i-1;j++) {
            if(a[j] > a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
}