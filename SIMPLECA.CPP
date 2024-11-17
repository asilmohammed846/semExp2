#include <iostream.h>
int main() 
{
 int subject1, subject2, subject3, subject4, subject5;
 float total, average;
 cout << "Enter marks for 1st subjects (out of 100): " << endl;
 cin >>subject1;
 cout << "Enter marks for 2nd subjects (out of 100): " << endl;
 cin >>subject2; 
 cout << "Enter marks for 3rd subjects (out of 100): " << endl;
 cin >>subject3; 
 cout << "Enter marks for 4th subjects (out of 100): " << endl;
 cin >>subject4; 

 cout << "Enter marks for 5th subjects (out of 100): " << endl;
 cin >>subject5;
 total = subject1 + subject2 + subject3 + subject4 + subject5;
 average = total / 5;
 cout << "Total marks: " << total << endl;
 cout << "Average marks: " << average << endl;
 if (average >= 90) 
 {
 cout << "Grade: A" << endl;
 } 
 else if (average >= 80) 
 {
 cout << "Grade: B" << endl;
 } 
 else if (average >= 70) 
 {
 cout << "Grade: C" << endl;
 } 
 else if (average >= 60) 
 {
 cout << "Grade: D" << endl;
 } 
 else 
 {
 cout << "Grade: F" << endl;
 }
 return 0;
}