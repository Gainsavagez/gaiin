/*Payroll
Write a program that uses the following arrays:
• ﻿empId: an array of seven long integers to hold
 employee identification numbers. The array should be
 initialized with the following numbers:
5658845 4520125 7895122 8777541
8451277 1302850 7580489
• hours: an array of seven integers to hold the number of hours worked by each employee
• payRate: an array of seven doubles to hold each employee’s hourly pay rate
 • ﻿wages: an array of seven doubles to hold each employee’s gross wages
The program should relate the data in each array through the
 subscripts. For example, the number in element 0 of the hour
  array should be the number of hours worked by the employee w
  hose identification number is stored in element 0 of the emp
  Id array. That same employee’s pay rate should be stored in e
  lement 0 of the payRate array.
The program should display each employee number and ask the use
r to enter that employee’s hours and pay rate. It should then calc
ulate the gross wages for that employee (hours times pay rate) and
 store them in the wages array. After the data has been entered for
 all the employees, the program should display each employee’s ident
 ification number and gross wages.Input Validation: Do not accept
  negative values for hours or numbers less than 15.00 for pay rate.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
const int SIZE = 7;
void setinfo(int[], double[], double[], ifstream &);
void display(int[], int[], double[], double[]);
int main()
{
    int id_number[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hour[SIZE];
    double rate[SIZE], wage[SIZE];
    ifstream fin("emp.txt");
    setinfo(hour, rate, wage, fin);
    display(id_number, hour, rate, wage);

    return 0;
}
void setinfo(int hour[], double rate[], double wage[], ifstream &fin)
{
    for (int i = 0; i < SIZE; i++)
    {
        fin >> hour[i] >> rate[i];
        wage[i] = hour[i] * rate[i];
    }
}
void display(int id_number[], int hour[], double rate[], double wage[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "ID: " << id_number[i] << "  " << hour[i] << "  " << rate[i] << "   " << wage[i] << endl;
    }
}