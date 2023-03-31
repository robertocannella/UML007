#include <stdio.h>
#include "employee.h"

//*************************************************************
// Function: calcEmployeeMinMax
//
// Purpose: Accepts various floating point values from an
//          employee and adds to a running update of min
//          and max values
//
// Parameters:
//
//   employeeData   - array of employees (i.e., struct employee)
//   employeeTotals - structure containing a running totals 
//                    of all fields above
//   size - the array size (i.e., number of employees)
//
// Returns: employeeMinMax - updated employeeMinMax structure
//
//**************************************************************

struct min_max calcEmployeeMinMax (struct employee employeeData[],
                                   struct min_max employeeMinMax,
                                   int size)
{

    int i; // array and loop index
    
    // if this is the first set of data items, set 
    // them to the min and max
    employeeMinMax.min_wageRate = employeeData[0].wageRate; 
    employeeMinMax.min_hours = employeeData[0].hours;
    employeeMinMax.min_overtimeHrs = employeeData[0].overtimeHrs; 
    employeeMinMax.min_grossPay = employeeData[0].grossPay;
    employeeMinMax.min_stateTax = employeeData[0].stateTax;
    employeeMinMax.min_fedTax = employeeData[0].fedTax;
    employeeMinMax.min_netPay = employeeData[0].netPay;
        
    // set the max to the first element members
    employeeMinMax.max_wageRate = employeeData[0].wageRate; 
    employeeMinMax.max_hours = employeeData[0].hours;
    employeeMinMax.max_overtimeHrs = employeeData[0].overtimeHrs; 
    employeeMinMax.max_grossPay = employeeData[0].grossPay;
    employeeMinMax.max_stateTax = employeeData[0].stateTax;
    employeeMinMax.max_fedTax = employeeData[0].fedTax;
    employeeMinMax.max_netPay = employeeData[0].netPay;
	
	// compare the rest of the items to each other for min and max
    for (i = 1; i < size; ++i)
    {
		
        // check if current Wage Rate is the new min and/or max
        if (employeeData[i].wageRate < employeeMinMax.min_wageRate)
        {
            employeeMinMax.min_wageRate = employeeData[i].wageRate;
        }
        if (employeeData[i].wageRate > employeeMinMax.max_wageRate)
        {
            employeeMinMax.max_wageRate = employeeData[i].wageRate;
        }

        // check if current Gross Pay is the new min and/or max
		if (employeeData[i].grossPay < employeeMinMax.min_grossPay)
        {
            employeeMinMax.min_grossPay = employeeData[i].grossPay;
        }
        if (employeeData[i].grossPay > employeeMinMax.max_grossPay)
        {
            employeeMinMax.max_grossPay = employeeData[i].grossPay;
        }

        // check if current Hours is the new min and/or max
        if (employeeData[i].hours < employeeMinMax.min_hours)
        {
            employeeMinMax.min_hours = employeeData[i].hours;
        }
        if (employeeData[i].hours > employeeMinMax.max_hours)
        {
            employeeMinMax.max_hours = employeeData[i].hours;
        }

        // check if current Overtime Hours is the new min and/or max
        if (employeeData[i].overtimeHrs < employeeMinMax.min_overtimeHrs)
        {
            employeeMinMax.min_overtimeHrs = employeeData[i].overtimeHrs;
        }
        if (employeeData[i].overtimeHrs > employeeMinMax.max_overtimeHrs)
        {
            employeeMinMax.max_overtimeHrs = employeeData[i].overtimeHrs;
        }

        // check if current State Tax is the new min and/or max
        if (employeeData[i].stateTax < employeeMinMax.min_stateTax)
        {
            employeeMinMax.min_stateTax = employeeData[i].stateTax;
        }
        if (employeeData[i].stateTax > employeeMinMax.max_stateTax)
        {
            employeeMinMax.max_stateTax = employeeData[i].stateTax;
        }

        // check if current Fed Tax is the new min and/or max
        if (employeeData[i].fedTax < employeeMinMax.min_fedTax)
        {
            employeeMinMax.min_fedTax = employeeData[i].fedTax;
        }
        if (employeeData[i].fedTax > employeeMinMax.max_fedTax)
        {
            employeeMinMax.max_fedTax = employeeData[i].fedTax;
        }

        // check if current Net Pay is the new min and/or max
        if (employeeData[i].netPay < employeeMinMax.min_netPay)
        {
            employeeMinMax.min_netPay = employeeData[i].netPay;
        }
        if (employeeData[i].netPay > employeeMinMax.max_netPay)
        {
            employeeMinMax.max_netPay = employeeData[i].netPay;
        }

		
    } // else if
    
    // return all the updated min and max values to the calling function
    return (employeeMinMax);
	
} // calcEmployeeMinMax