// ------------- FILE HEADER -------------
// Author ✅: August Fabbri
// Assignment ✅: 1
// Date ✅: 9/28/2025
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 1
// Participation ✅: 100
// Challenge ✅: 100
// Labs ✅: 100


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
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
  double federal_withholding_percent = 0;

  int gross_pay = 0;
  double federal_tax_witholding_usd = 0.0;
  double net_pay_usd = 0.0;
  

  cout << "Welcome to my Weekly Payroll program!!" << endl;
  
  cout << "Enter your employee ID number (numbers only):";
  cin >> employee_id;
 
  cout << "Enter number of hours worked (whole numbers):" << endl;
  cin >> hours_worked;
 
  cout << "Enter the hourly rate:";
  cin >> usd_per_hour;
 
  cout << "Enter the federal withholding rate";
  cin >> federal_withholding_percent;

  gross_pay = hours_worked * usd_per_hour;
  double decimal_tax_witholding_usd = federal_withholding_percent/100;
  federal_tax_witholding_usd = gross_pay * decimal_tax_witholding_usd;
  net_pay_usd = gross_pay - federal_tax_witholding_usd;


  cout << "Your Payroll Summary:" << endl;
  cout << "Total Gross Pay: $" << gross_pay << endl;
  cout << "Federal Tax Withholding: $" << federal_tax_witholding_usd << endl;
  cout << "Net Pay: $" << net_pay_usd << endl;

  cout << "Thank you for using my payroll program:)";

  
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

CALCULATIONS DONE HERE

MESSAGE "Your Payroll Summary:"

LABEL "Total Gross Pay: $"
DATA   gross_pay

LABEL "Federal Tax Withholding: $"
DATA   federal_tax_witholding_usd

LABEL "Net Pay: $"
DATA   net_pay_usd





SAMPLE RUNS

Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15

Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578

Thank you for using my payroll program:)


*/