#include <stdio.h>
#include "string.h"
#include "employee.h"

//************************************************************* 
// Function: printEmp 
// 
// Purpose: Prints out all the information for each employee
//          in a nice and orderly table format.
// 
// Parameters: 
//
//   employeeData - array of struct employee
//   size - the array size (i.e., number of employees)
// 
// Returns: void
//  
//**************************************************************

void printEmp (struct employee employeeData[], int size)
{
    
    int i;  // array and loop index
    
    // Used to format the employee name
    char name [FIRST_NAME_SIZE + LAST_NAME_SIZE + 1];

    // read in hours for each employee
    for (i = 0; i < size; ++i)
    {
        // While you could just print the first and last name in the printf
        // statement that follows, you could also use various C string library
        // functions to format the name exactly the way you want it.  Breaking
        // the name into first and last members additionally gives you some 
        // flexibility in printing.  This also becomes more useful if we decide
        // later to store other parts of a person's name. I really did this just 
        // to show you how to work with some of the common string functions.
        strcpy (name, employeeData[i].empName.firstName);
        strcat (name, " "); // add a space between first and last names
        strcat (name, employeeData[i].empName.lastName);
    
        // Print out a single employee
        printf("\n%-20.20s %-2.2s  %06li %5.2f  %4.1f  %4.1f %7.2f %6.2f %7.2f %8.2f",
               name, employeeData[i].taxState, employeeData[i].clockNumber, 
               employeeData[i].wageRate, employeeData[i].hours,
               employeeData[i].overtimeHrs, employeeData[i].grossPay, 
               employeeData[i].stateTax, employeeData[i].fedTax, 
               employeeData[i].netPay);
               
    } // for
          
} // printEmp