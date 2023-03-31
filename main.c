//********************************************************
//
// Assignment 7 - Structures and Strings
//
// Name: Roberto Cannella
//
// Class: C Programming, Spring 2023
//
// Date: 2023-03-36
//
// Description: Program which determines overtime and 
// gross pay for a set of employees with outputs sent 
// to standard output (the screen).
//
// This assignment also adds the employee name, their tax state,
// and calculates the state tax, federal tax, and net pay.   It
// also calculates totals, averages, minimum, and maximum values,
// standard deviation and median.
//
// Call by Reference design
//
//********************************************************

// necessary header files
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "statistics.h"

int main ()
{
    
    // Set up a local variable to store the employee information
    // Initialize the name, tax state, clock number, and wage rate
    struct employee employeeData[NUM_EMPL] = {
        { {"Connie", "Cobol"}, "MA", 98401, 10.60},
        { {"Mary", "Apl"}, "NH", 526488, 9.75 },
        { {"Frank", "Fortran"}, "VT", 765349, 10.50 },
        { {"Jeff", "Ada"}, "NY", 34645, 12.25 },
        { {"Anton", "Pascal"},"CA",127615, 8.35 }
    };
    
    // set up structure to store totals and initialize all to zero
    struct totals employeeTotals  = {0,0,0,0,0,0,0};
    
    // set up structure to store min and max values and initialize all to zero
    struct min_max employeeMinMax = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    // set up structure to store standard deviation values and initialize all to zero
    struct std_dev employeeStdDev = {0,0,0,0,0,0,0};

    // set up structure to store median values and initialize all to zero
    struct median employeeMedian = {0,0,0,0,0,0,0};

    // Call functions as needed to read and calculate information

    // Prompt for the number of hours worked by the employee 
    getHours (employeeData, NUM_EMPL); 

    // Calculate the overtime hours
    calcOvertimeHrs (employeeData, NUM_EMPL);
       
    // Calculate the weekly gross pay
    calcGrossPay (employeeData, NUM_EMPL); 

    // Calculate the state tax                                       
    calcStateTax (employeeData, NUM_EMPL);

    // Calculate the federal tax                                                   
    calcFedTax (employeeData, NUM_EMPL);
 
    // Calculate the net pay after taxes   
    calcNetPay (employeeData, NUM_EMPL); 
        
    // Keep a running sum of the employee totals
    // Note:  This remains a Call by Value design
    employeeTotals = calcEmployeeTotals (employeeData, employeeTotals, NUM_EMPL);
                                             
    // Keep a running update of the employee minimum and maximum values
    // Note:  This remains a Call by Value design
    employeeMinMax = calcEmployeeMinMax (employeeData, 
                                         employeeMinMax,
                                         NUM_EMPL);

    // Keep a running update of the standard deviation totals
    // Note:  This remains a Call by Value design
    employeeStdDev = getSD(employeeData, employeeStdDev, NUM_EMPL);

    // Keep a running update of the standard deviation totals
    // Note:  This remains a Call by Value design
    employeeMedian = getMedian(employeeData, employeeMedian, NUM_EMPL);

    // Print the column headers
    printHeader();

    // print out final information on each employee
    printEmp (employeeData, NUM_EMPL); 
    
    // print the totals and averages for all float items
    printEmpStatistics (employeeTotals, employeeMinMax, employeeStdDev, employeeMedian,  NUM_EMPL);

    return (0); /* success */

} // main
