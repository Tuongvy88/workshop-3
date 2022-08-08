#include<iostream>
using namespace std;
int main()
{
//2-2
int aa=5;// define an integer variable and assign it a value
int *p = &aa;// define a pointer variable that points to its address
cout<<"Address: "<<p<<"\nValue at address: "<<*p<<endl;// Print the address at standard output, and, using the pointer only, print the decimal value as well.