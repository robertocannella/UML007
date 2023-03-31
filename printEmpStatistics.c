#include <stdio.h>
#include "employee.h"


//************************************************************* 
// Function: printEmpStatistics 
// 
// Purpose: Prints out the summary totals and averages of all 
//          floating point value items for all employees
//          that have been processed.  It also prints
//          out the min and max values.
// 
// Parameters: 
//
//   employeeTotals - a structure containing a running total 
//                    of all employee floating point items 
//   employeeMinMax - a structure containing all the minimum 
//                    and maximum values of all employee 
//                    floating point items
//   size - the total number of employees processed, used 
//          to check for zero or negative divide condition.
// 
// Returns: void
//  
//**************************************************************

void printEmpStatistics (struct totals employeeTotals,
                         struct min_max employeeMinMax,
                         struct std_dev employeeStdDev,
                         struct median employeeMedian,
                         int size)
{
	
	// print a separator line
    printf("\n--------------------------------------------------------------");
    printf("-------------------");
    
    // print the totals for all the floating point fields
    printf("\nTotals:                         %5.2f %5.1f %5.1f %7.2f %6.2f %7.2f %8.2f",
           employeeTotals.total_wageRate,
           employeeTotals.total_hours,
           employeeTotals.total_overtimeHrs,
           employeeTotals.total_grossPay,
           employeeTotals.total_stateTax,
           employeeTotals.total_fedTax,
           employeeTotals.total_netPay);
    
    // make sure you don't divide by zero or a negative number
    if (size > 0)       
    {
        // print the averages for all the floating point fields

        printf("\nAverages:                       %5.2f %5.1f %5.1f %7.2f %6.2f %7.2f %8.2f",
               employeeTotals.total_wageRate/size,
               employeeTotals.total_hours/size,
               employeeTotals.total_overtimeHrs/size,
               employeeTotals.total_grossPay/size,
               employeeTotals.total_stateTax/size,
               employeeTotals.total_fedTax/size,
               employeeTotals.total_netPay/size);
    } // if
    
    // print the min and max values

    printf("\nMinimum:                        %5.2f %5.1f %5.1f %7.2f %6.2f %7.2f %8.2f",
           employeeMinMax.min_wageRate,
           employeeMinMax.min_hours,
           employeeMinMax.min_overtimeHrs,
           employeeMinMax.min_grossPay,
           employeeMinMax.min_stateTax,
           employeeMinMax.min_fedTax,
           employeeMinMax.min_netPay);

    printf("\nMaximum:                        %5.2f %5.1f %5.1f %7.2f %6.2f %7.2f %8.2f",
           employeeMinMax.max_wageRate,
           employeeMinMax.max_hours,
           employeeMinMax.max_overtimeHrs,
           employeeMinMax.max_grossPay,
           employeeMinMax.max_stateTax,
           employeeMinMax.max_fedTax,
           employeeMinMax.max_netPay);

    // print the standard deviation of all the values

    printf("\nStdDev:                         %5.2f %5.1f %5.1f %7.2f %6.2f %7.2f %8.2f",
           employeeStdDev.std_dev_wageRate,
           employeeStdDev.std_dev_hours,
           employeeStdDev.std_dev_overtimeHrs,
           employeeStdDev.std_dev_grossPay,
           employeeStdDev.std_dev_stateTax,
           employeeStdDev.std_dev_fedTax,
           employeeStdDev.std_dev_netPay);

    // print the median of all the values

    printf("\nMedian:                         %5.2f %5.1f %5.1f %7.2f %6.2f %7.2f %8.2f",
           employeeMedian.median_wageRate,
           employeeMedian.median_hours,
           employeeMedian.median_overtimeHrs,
           employeeMedian.median_grossPay,
           employeeMedian.median_stateTax,
           employeeMedian.median_fedTax,
           employeeMedian.median_netPay);


}  // printEmpStatistics