#include <stdio.h>
#include "employee.h"

//*************************************************************
// Function: calcFedTax
//
// Purpose: Calculates the Federal Tax owed based on the gross 
//          pay for each employee
//
// Parameters:
//
//   employeeData - array of employees (i.e., struct employee)
//   size - the array size (i.e., number of employees)
//
// Returns: void
//
//**************************************************************

void calcFedTax (struct employee employeeData[], int size)
{
	
    int i;  // loop and array index
    
    // calculate the federal tax for each employee
    for (i=0; i < size; ++i)
    {
        // Fed Tax is the same for all regardless of state
        employeeData[i].fedTax = employeeData[i].grossPay * FED_TAX_RATE;

    } // for
	
} // calcFedTax
