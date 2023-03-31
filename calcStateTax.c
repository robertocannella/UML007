#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "employee.h"

//*************************************************************
// Function: calcStateTax
//
// Purpose: Calculates the State Tax owed based on gross pay
//          for each employee.  State tax rate is based on the 
//          the designated tax state based on where the
//          employee is actually performing the work.  Each
//          state decides their tax rate.
//
// Parameters:
//
//   employeeData - array of employees (i.e., struct employee)
//   size - the array size (i.e., number of employees)
//
// Returns: void
//
//**************************************************************

void calcStateTax (struct employee employeeData[], int size)
{
	
	int i; // loop and array index
	
	// calculate state tax based on where employee works
	for (i=0; i < size; ++i)
    {
        // Make sure tax state is all uppercase
        if (islower(employeeData[i].taxState[0]))
            toupper(employeeData[i].taxState[0]); // make upper case
        if (islower(employeeData[i].taxState[1]))
            toupper(employeeData[i].taxState[1]); // make upper case
	    
        // calculate state tax based on where employee resides
        if (strcmp(employeeData[i].taxState, "MA") == 0)
            employeeData[i].stateTax = employeeData[i].grossPay * MA_TAX_RATE;
        else if (strcmp(employeeData[i].taxState, "NH") == 0)
            employeeData[i].stateTax = employeeData[i].grossPay * NH_TAX_RATE;
        else if (strcmp(employeeData[i].taxState, "VT") == 0)
            employeeData[i].stateTax = employeeData[i].grossPay * VT_TAX_RATE;
        else if (strcmp(employeeData[i].taxState, "CA") == 0)
           employeeData[i].stateTax = employeeData[i].grossPay * CA_TAX_RATE;
        else
            // any other state is the default rate
            employeeData[i].stateTax = employeeData[i].grossPay * DEFAULT_TAX_RATE;
    } // for
	   
} // calcStateTax