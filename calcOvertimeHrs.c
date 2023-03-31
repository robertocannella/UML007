#include <stdio.h>
#include "employee.h"

//*************************************************************
// Function: calcOvertimeHrs
//
// Purpose: Calculates the overtime hours worked by an employee
//          in a given week for each employee.
//
// Parameters:
//
//   employeeData - array of employees (i.e., struct employee)
//   size - the array size (i.e., number of employees)
//
// Returns: void
//
//**************************************************************

void calcOvertimeHrs (struct employee employeeData[], int size)
{
	
    int i;  // array and loop index

    // calculate overtime hours for each employee
    for (i = 0; i < size; ++i)
    {  
        // Any overtime ?
        if (employeeData[i].hours >= STD_HOURS)
        {
            employeeData[i].overtimeHrs = employeeData[i].hours - STD_HOURS;
        }
        else // no overtime
        {
  	        employeeData[i].overtimeHrs = 0;
        }
        
    } // for


} // calcOvertimeHrs