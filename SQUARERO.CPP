#include <iostream.h>
#include <math.h>
int main() 
{
 int choice, num;
 double result;
 do 
 {
 cout << "\nMenu:\n";
 cout << "1. Find square\n";
 cout << "2. Find square root\n";
 cout << "3. Find cube\n";






 cout << "4. Exit\n";
 cout << "Enter your choice: ";
 cin >> choice;
 switch (choice) 
 {
 case 1:
 cout << "Enter a number: ";
 cin >> num;
 result = num * num;
 cout << "Square of " << num << " is: " << result << endl;
 break;
 case 2:
 cout << "Enter a number: ";
 cin >> num;
 if (num >= 0) 
 {
 result = sqrt(num);
 cout << "Square root of " << num << " is: " << result << endl;
 } 
 else 
 {
 cout << "Square root of negative number is not defined." ;
 }
 break;
 case 3:
 cout << "Enter a number: ";
 cin >> num;
 result = num * num * num;
 cout << "Cube of " << num << " is: " << result << endl;
 break;
 case 4:
 cout << "Exiting program..." << endl;
 break;
 default:
 cout << "Invalid choice. Please try again." << endl;
 }
} while (choice != 4);
 return 0;
}