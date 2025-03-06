#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int num1,num2,choice;
  string calc;
  cout<<"Press 1 for Addition"<< endl;
  cout<<"Press 2 for Subtraction"<< endl;
  cout<<"Press 3 for Multiplication"<< endl;
  cout<<"Press 4 for Division\n"<< endl;

  while(true){
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
  cout<<"Enter your choice: ";
  cin>>choice;
  switch(choice)
  {
    case 1:
        cout<<num1<<" + "<<num2<<" = "<<num1+num2;
        break;
    case 2:
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        break;
    case 3:
        cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        break;
    case 4:
        cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        break;
    default:
        cout<<"Invalid choice";
  }
  cout<<"\n\nDo you want use calculator again(yes/no): ";
  cin>>calc;
  if(calc=="no")
  {
    break;
  }
}


  return 0;
}
