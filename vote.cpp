#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  
  int age;
  cout << "enter age" << endl;
  cin >> age;
  
  if (age < 18) 
   cout <<"not eligible" <<endl;
  else
    cout<<"eligible"<<endl;
    
}