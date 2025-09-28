// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
using namespace std;
// Main function
int main(int argc, char* argv[]) {
  
  int employee_id = 0;
  int hours_worked = 0;
  int usd_per_hour = 0;
  int federal_withholding_percent = 0;

  int gross_pay = 0;
  double federal_tax_witholding_usd = 0.0;
  double net_pay_usd = 0.0;

  gross_pay = hours_worked * usd_per_hour;
  double decimal_tax_witholding_usd = federal_withholding_percent/100;
  double net_pay_usd = gross_pay * decimal_tax_witholding_usd;

  




  
  
  
  
  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
int employee_id = 0;
int hours_worked = 0;
int usd_per_hour = 0;
int federal_withholding_percent = 0;

B. OUTPUT
int gross_pay = 0
double federal_tax_witholding_usd = 0.0;
double net_pay_usd = 0.0;

C. CALCULATIONS
gross_pay = hours_worked * usd_per_hour
double decimal_tax_witholding_usd = federal_withholding_percent/100
double net_pay_usd = gross_pay * decimal_tax_witholding_usd



D. LOGIC and ALGORITHMS
MESSAGE "Welcome to my Weekly Payroll program!!"

PROMPT "Enter your employee ID number (numbers only):"
INPUT   int employee_id

PROMPT "Enter number of hours worked (whole numbers):"
INPUT   int hours_worked

PROMPT "Enter the hourly rate:"
INPUT    int usd_per_hour

PROMPT "Enter the federal withholding rate"
INPUT    federal_withholding_percent

MESSAGE "Your Payroll Summary:"

CALCULATIONS DONE HERE

LABEL "Total Gross Pay: $"
DATA   gross_pay

LABEL "Federal Tax Withholding: $"
DATA   federal_tax_witholding_usd

LABEL "Net Pay: $"
DATA   net_pay_usd





SAMPLE RUNS
Copy from assignment document.

*/