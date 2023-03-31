// define constants
#define NUM_EMPL 5
#define STD_HOURS 40.0
#define OT_RATE 1.5
#define MA_TAX_RATE 0.05
#define NH_TAX_RATE 0.0
#define VT_TAX_RATE 0.06
#define CA_TAX_RATE 0.07
#define DEFAULT_TAX_RATE 0.08
#define NAME_SIZE 20
#define TAX_STATE_SIZE 3
#define FED_TAX_RATE 0.25
#define FIRST_NAME_SIZE 10
#define LAST_NAME_SIZE 10

// Define a global structure type to store an employee name
// ... note how one could easily extend this to other
// parts of a name:  Middle, Nickname, Prefix, Suffix, etc.
struct name
{
    char firstName[FIRST_NAME_SIZE];
    char lastName [LAST_NAME_SIZE];
};

// Define a global structure type to pass employee data between functions
// Note that the structure type is global, but you don't want a variable
// of that type to be global. Best to declare a variable of that type
// in a function like main or another function and pass as needed.
struct employee
{
    struct name empName;
    char taxState [TAX_STATE_SIZE];
    long int clockNumber;
    float wageRate;
    float hours;
    float overtimeHrs;
    float grossPay;
    float stateTax;
    float fedTax;
    float netPay;
};

// this structure type defines the totals of all floating point items
// so they can be totaled and used also to calculate averages
struct totals
{
    float total_wageRate;
    float total_hours;
    float total_overtimeHrs;
    float total_grossPay;
    float total_stateTax;
    float total_fedTax;
    float total_netPay;
};

// this structure type defines the min and max values of all floating
// point items so they can be display in our final report
struct min_max
{
    float min_wageRate;
    float min_hours;
    float min_overtimeHrs;
    float min_grossPay;
    float min_stateTax;
    float min_fedTax;
    float min_netPay;
    float max_wageRate;
    float max_hours;
    float max_overtimeHrs;
    float max_grossPay;
    float max_stateTax;
    float max_fedTax;
    float max_netPay;
};


// this structure type defines the standard deviation values of all floating
// point items so they can be display in our final report
struct std_dev
{
    float std_dev_wageRate;
    float std_dev_hours;
    float std_dev_overtimeHrs;
    float std_dev_grossPay;
    float std_dev_stateTax;
    float std_dev_fedTax;
    float std_dev_netPay;

};


// this structure type defines the standard deviation values of all floating
// point items so they can be display in our final report
struct median
{
    float median_wageRate;
    float median_hours;
    float median_overtimeHrs;
    float median_grossPay;
    float median_stateTax;
    float median_fedTax;
    float median_netPay;

};

// define prototypes here for each function except main
void getHours (struct employee employeeData[], int size);
void calcOvertimeHrs (struct employee employeeData[], int size);
void calcGrossPay (struct employee employeeData[], int size);
void printHeader (void);
void printEmp (struct employee employeeData[], int size);
void calcStateTax (struct employee employeeData[], int size);
void calcFedTax (struct employee employeeData[], int size);
void calcNetPay (struct employee employeeData[], int size);
struct totals calcEmployeeTotals (struct employee employeeData[],
                                  struct totals employeeTotals,
                                  int size);
                                 
struct min_max calcEmployeeMinMax (struct employee employeeData[],
                                   struct min_max employeeMinMax,
                                   int size);
                                  
void printEmpStatistics (struct totals employeeTotals,
                         struct min_max employeeMinMax,
                         struct std_dev employeeStdDev,
                         struct median employeeMedian,
                         int size);