#include<iostream>
using namespace std;
int main()
{
//2-4
int a[] = {1,2,3,4};//define and initialize a single-dimensional integer array
int *r = a;//define a pointer that points to the first element in the array4
cout<<"Array : ";
for(int i=0;i<4;i++)
cout<<*(r+i)<<" ";//printing array using pointer
}
