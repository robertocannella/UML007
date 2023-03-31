//
// Created by Roberto Cannella on 3/22/23.
//
#ifndef CALL_BY_REFERENCE_STATISTICS_H
#include "employee.h"

struct std_dev getSD(struct employee employeeData[], struct std_dev structStdDev, int size);
struct median getMedian(struct employee employeeData[], struct median structMedian, int size);
float calculateSD(float data[], int size);
float calculateMedian(float data[],int size);
void sort(float a[],int n);
void swap(int *p,int *q);

#define CALL_BY_REFERENCE_STATISTICS_H

#endif //CALL_BY_REFERENCE_STATISTICS_H
