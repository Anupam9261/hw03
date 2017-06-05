//  Chris Luafau
//  CS 121-15
//  hw03
//  Asks user for two inputs and performs choice of math operation. 1st time through, it doesn't include the quit option. Anytime after, it does. To do this, I used variable i and incremented it after the first run through. So when i=0, it prints without quit option. When i>0, it prints with the quit option.


#include <iostream>
using namespace std;

int main()
{
    double usr_in1 =0; //first user input
    double usr_in2 =0; //second user input
    int usr_choice =0; //user choice of operation
    int i =0; //index;
    /*allows me to run through the program once without the quit option. after the first run through, i increments and then prints the quit
    option*/
    
    do //using do while loop to continuously run the program until the user chooses to exit the program
    {
        if (i==0) //first time through
        {
            cout <<"1) Addition\n"<<"2) Subtration\n"<<"3) Multiplication\n"<<"4) Division\n";
        }
        else //after first time, i increments and prints quit option
        {
            cout <<"1) Addition\n"<<"2) Subtration\n"<<"3) Multiplication\n"<<"4) Division\n"<<"5) Quit.\n";

        }
        cin >>usr_choice; //stores which operation the user wants to perform
        
        if (usr_choice > 0 && usr_choice < 5) //makes sure user doesn't input an incorrect integer
        {
            cout <<"1st term.\n";
            cin >>usr_in1;
    
            cout <<"2nd term.\n";
            cin >>usr_in2;
            
            //math
            if (usr_choice ==1)//addition
            {
                double add = usr_in1 + usr_in2;
                cout << add<<endl;
            }
            else if (usr_choice ==2)//subtraction
            {
                double sub = usr_in1 - usr_in2;
                cout <<sub<<endl;
            }
            else if (usr_choice ==3)//multiplication
            {
                double multi = usr_in1 * usr_in2;
                cout <<multi<<endl;
            }
            else if (usr_choice ==4)//division
            {
                double divi = usr_in1 / usr_in2;
                cout <<divi<<endl;
            }
            i++;//increment i
        }
        else // If user enters an invalid input
        {
            cout<<"Invalid Input, Please retry from the given choices";
        }
    }
    while (usr_choice < 5);

    return 0;
}
