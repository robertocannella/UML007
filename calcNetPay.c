#include <stdio.h>
#include "employee.h"

//*************************************************************
// Function: calcNetPay
//
// Purpose: Calculates the net pay as the gross pay minus any
//          state and federal taxes owed for each employee.
//          Essentially, their "take home" pay.
//
// Parameters:
//
//   employeeData - array of employees (i.e., struct employee)
//   size - the array size (i.e., number of employees)
//
// Returns: void
//
//**************************************************************

void calcNetPay (struct employee employeeData[], int size)
{
	int i;               // loop and array index
	float theTotalTaxes; // the total state and federal tax
    
    // calculate the take home pay for each employee
    for (i=0; i < size; ++i)
    {
        // calculate the total state and federal taxes
        theTotalTaxes = employeeData[i].stateTax + employeeData[i].fedTax;
	
        // calculate the net pay
        employeeData[i].netPay = employeeData[i].grossPay - theTotalTaxes;

    } // for
	
} // calcNetPay