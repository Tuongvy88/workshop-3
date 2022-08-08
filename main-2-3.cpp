#include<iostream>
using namespace std;
int main()
{

//2-3
int v=42;// define an integer variable and assign it a value 42
int *q = &v;// define a pointer variable that points to its address
*q = (*q) + 5;//increment the variable value by 5
cout<<"After incrementing by 5 :"<<*q<<endl;
*q = (*q)-2;// decrement it by 2
cout<<"After derementing by 2 :"<<*q<<endl;} 