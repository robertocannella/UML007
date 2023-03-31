cmake_minimum_required(VERSION 3.24)
project(Call_by_Reference C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Call_by_Reference
        calcEmployeeMinMax.c
        calcEmployeeTotals.c
        calcFedTax.c
        calcGrossPay.c
        calcNetPay.c
        calcOvertimeHrs.c
        calcStateTax.c
        employee.h
        getHours.c
        main.c
        printEmp.c
        printEmpStatistics.c
        printHeader.c statistics.c statistics.h)
