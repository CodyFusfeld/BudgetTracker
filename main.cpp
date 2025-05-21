#include <iostream>
#include <string>


void ProgramGreeting() {
    std::cout << "Welcome to the Budget Tracker" << std::endl;
    std::cout << "Developer by Cody Fusfeld" << std::endl;
    std::cout << std::endl;
}




int main() {
    ProgramGreeting();

    int choice;
    bool SwitchLoop = true;

    while (SwitchLoop) {
        std::cout << "Main Menu" << std::endl;
        std::cout << "Add Transaction" << std::endl;
        std::cout << "View Transaction" << std::endl;
        std::cout << "Exit Program" << std::endl;
        std::cout << "Enter a choice(1-3) " << std::endl;
        std::cin >> choice;

    switch(choice){
        case 1:
           //addTransaction();
            break;
        case 2:

            break;
        case 3:

            break;


        default:
            std::cout << "Invalid Choice, Please Select (1-3): " << std::endl;


    }

        
    }
    



    switch(choice){
        case 1:
            
            break;
        case 2:

            break;
        case 3:

            break;



        default:
            std::cout << "Invalid Choice, Please Select (1-3): " << std::endl;


    }




    return 0;
}