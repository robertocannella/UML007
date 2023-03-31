#include <stdio.h>
#include "employee.h"

//*************************************************************
// Function: calcEmployeeTotals
//
// Purpose: Performs a running total (sum) of each employee
//          floating point member in the array of structures 
//
// Parameters:
//
//   employeeData - array of employees (i.e., struct employee)
//   employeeTotals - structure containing a running totals 
//                    of all fields above
//   size - the array size (i.e., number of employees)
//
// Returns: employeeTotals - updated totals in the updated 
//                           employeeTotals structure
//
//**************************************************************

struct totals calcEmployeeTotals (struct employee employeeData[],
                                  struct totals employeeTotals,
                                  int size)
{
	
    int i; /* loop and array index */
    
    // total up each floating point item for all employees
    for (i = 0; i < size; ++i)
    {
        // add current employee data to our running totals
        employeeTotals.total_wageRate += employeeData[i].wageRate;
        employeeTotals.total_hours += employeeData[i].hours;
        employeeTotals.total_overtimeHrs += employeeData[i].overtimeHrs;
        employeeTotals.total_grossPay += employeeData[i].grossPay;
        employeeTotals.total_stateTax += employeeData[i].stateTax;
        employeeTotals.total_fedTax += employeeData[i].fedTax;
        employeeTotals.total_netPay += employeeData[i].netPay;
        
    } // for
    
    return (employeeTotals);
	
} // calcEmployeeTotals