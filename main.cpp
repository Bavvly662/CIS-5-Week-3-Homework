#include <iostream>
#include <string>

// Homework 3 — Bavly Younan
// CIS 5 Week 03 · Types & variables

int main() {
  const int CURRENT_YEAR = 2026;



  // TODO: declare and initialize on the same line
  std::string name = "Bavly";
  int age = 17;
  double height_m = 1.6;
  char initial = 'B';
  bool student = true;


  // TODO: two more from this week's menu
  int credits = 18;
  double gpa = 3.9;
  credits = 15;

  // TODO: a comment that explains a type choice (why int, why double, or why const)
  //A double is used for decimals which helps express a gpa
  std::cout << "=== About me ===\n";
  // TODO: labeled lines from the names
  std::cout << "Name: " << name << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "Height (m): " << height_m << "\n";
  std::cout << "Initial: " << initial << "\n";
  std::cout << "Student: " << student << "\n";
  std::cout << "Year: " << CURRENT_YEAR << "\n";
  std::cout << "Credits: " << credits << "\n";
  std::cout << "gpa: " << gpa << "\n";
  // TODO: one short paragraph from those same names — not leftover quotes
    std::cout << name << " is "<<age<<", taking "<<credits<<" credits "<<"in "<<CURRENT_YEAR<<", with a gpa of "<<gpa <<"\n";
  // TODO: change one value from a first choice. Comment the old value,
  // the new value, and why the console followed.
  //i changed credits it was 18 now 15 due to a dropped class, the console followed since cout prints the variable and the variables value has changed 
  // TODO: two lines that would not compile — leave them commented
  // Example shape (write your own, with the reason):
  // int age = "nineteen";   // would not compile — ...
  // CURRENT_YEAR = 2027;    // would not compile — ...
  // bool student="hi" // wouldnt compile since bool doesnt accept strings only true false; 1 and zeros
  // int age= 5.3 // wouldnt compile because its a decimal and the indicated type is an integer
  return 0;
}
