#include <iostream>
#include<conio.h>

using namespace std;



void swap_numbers(int *value1, int *value2) {
   int temp;
   temp = *value1;
   *value1 = *value2;
   *value2 = temp;
}

int main() {

   int number1, number2;

   cout << "Simple Example Program for Swap Numbers Using Pointers In C++\n";


   cout << "Enter value of Swap Number # 1: ";
   cin>>number1;
   cout << "Enter value of Swap Number # 2: ";
   cin>>number2;


   cout << "Before Swapping :  Number # 1=" << number1 << ",  Number # 2=" << number2 << "\n";


   swap_numbers(&number1, &number2);


   cout << "After  Swapping :  Number # 1=" << number1 << ",  Number # 2=" << number2 << "\n";

   getch();
   return 0;
}

