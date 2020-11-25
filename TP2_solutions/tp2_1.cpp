//Calculator menu
# include <iostream>
using namespace std;

int main()
{
    int menu;
    char choice;
    float num1, num2;
    bool run = true;
    
    while(run)
    {
        cout << "      MENU    \n";
        cout << "  1. Add \n  2. Subtract \n  3. Multiply \n  4. Divide \n  5. Modulus \n ";
        cout << "Enter your choice: ";
        cin >> menu;
    
        cout << "Enter your two numbers: \n";
        cin >> num1 >> num2;
    
        int n1 = static_cast<int>(num1);
        int n2 = static_cast<int>(num2);
    
        switch(menu)
        {
            case 1:
                cout << num1+num2;
                break;

            case 2:
                cout << num1-num2;
                break;

            case 3:
                cout << num1*num2;
                break;

            case 4:
                cout << num1/num2;
                break;

            case 5:
                cout << n1%n2;
                break;
        
            default:
                cout << "Error! operation is not correct";
                break;
        }
    
        do{
            cout<<"Would you like to perform other calculation?(Y/N)"<<endl;
            cin >> choice;
            choice = tolower(choice);
        }while (choice != 'n' && choice != 'y');
        if(choice =='n'){
            run = false;
        }
        
    }  
return 0;
}
