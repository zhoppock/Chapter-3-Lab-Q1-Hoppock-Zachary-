#include <iostream>
using namespace std;


int main()
{ 
   double initial_value;
   double final_value;
   cout << "Please enter the initial balance: ";
   cin >> initial_value;
      if (initial_value > 90 )
		{  
         initial_value = initial_value + 10;
		 final_value = initial_value;
		}
	  else
		{
      initial_value = initial_value + 5;
	  final_value = initial_value;
		}
      cout <<"Final Value" << final_value << endl;

  string lastname = "Loyar";
  if (lastname > "Loya")
    cout << "true";

      return 0;
}
