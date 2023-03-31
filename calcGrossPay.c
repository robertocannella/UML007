#include <stdio.h>
#include "employee.h"

//*************************************************************
// Function: calcGrossPay
//
// Purpose: Calculates the gross pay based on the the normal pay
//          and any overtime pay for a given week for each
//          employee.
//
// Parameters:
//
//   employeeData - array of employees (i.e., struct employee)
//   size - the array size (i.e., number of employees)
//
// Returns: void
//
//**************************************************************

void calcGrossPay (struct employee employeeData[], int size)
{
    int i;                // loop and array index
    float theNormalPay;   // normal pay without any overtime hours
    float theOvertimePay; // overtime pay

    // calculate grossPay for each employee
    for (i=0; i < size; ++i)
    {
        // calculate normal pay and any overtime pay
        theNormalPay = employeeData[i].wageRate * 
                       (employeeData[i].hours - employeeData[i].overtimeHrs);
        theOvertimePay = employeeData[i].overtimeHrs * 
                         (OT_RATE * employeeData[i].wageRate);
  
        // calculate gross pay for employee as normalPay + any overtime pay
        employeeData[i].grossPay = theNormalPay + theOvertimePay;
    }

} // calcGrossPay