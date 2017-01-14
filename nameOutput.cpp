/* Aleksandr Movsesyan
     Programming Lab 6
     pl6.cpp
     CS 110A
     Craig Persiko

     This program inputs a name and outputs it in a format
  */

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{

  char last_name[21], first_name[21], middle_initial[21], extra, bush_array[5] =
"Bush", upper_middle_initial, upper_first_name;
  char upper_last_name, bush_array_lower[5] = "bush";

  cout << "Please enter your first name, middle initial, and last name.\n"
       << "(max 20 letters per name)\n";
  cin >> first_name;
  cin >> middle_initial;
  cin >> last_name;

  upper_middle_initial = toupper(middle_initial[0]);
  upper_first_name = toupper(first_name[0]);
  upper_last_name = toupper(last_name[0]);

  cout << upper_last_name;

  for (int last_name_index = 1; last_name[last_name_index] != '\0';
last_name_index++)
    cout << last_name[last_name_index];

  cout << ", " << upper_first_name;

  for (int first_name_index = 1; first_name[first_name_index] != '\0';
first_name_index++)
    cout << first_name[first_name_index];

  cout << " " << upper_middle_initial << "." << endl;

  if (strcmp(bush_array, last_name) == 0)
    cout << "Are you related to the president?" << endl;
  else if (strcmp(bush_array_lower, last_name) == 0)
    cout << "Are you related to the president?" << endl;

  return 0;
}
