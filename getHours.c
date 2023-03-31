#include <stdio.h>
#include "employee.h"

//**************************************************************
// Function: getHours 
// 
// Purpose: Obtains input from user, the number of hours worked 
//          per employee and updates it in the array of structures
//          for each employee.
// 
// Parameters:
//
//   employeeData - array of employees (i.e., struct employee)
//   size - the array size (i.e., number of employees)
// 
// Returns: void
//  
//**************************************************************

void getHours (struct employee employeeData[], int size) 
{ 

    int i;  // array and loop index

    // read in hours for each employee
    for (i = 0; i < size; ++i)
    {
        // Read in hours for employee 
        printf("\nEnter hours worked by emp # %06li: ", employeeData[i].clockNumber); 
        scanf ("%f", &employeeData[i].hours); 
    }
    
} // getHours