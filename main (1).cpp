#include <iostream>


int main()
{
    //initializing the 1000$ budget;
    int budget = 1000;
    
    //initializing our three variables;
    int rent;
    int groceries;
    int entertaiment;
    
    //asking user for prompt;
    std::cout << "Welocome to the Monthly Expence Tracker! " << std::endl;
    std::cout << "Enter your rent expense: " << std::endl;
    std::cin >> rent;
    std::cout << "Enter your groceries expense: " << std::endl;
    std::cin >> groceries;
    std::cout << "Enter your entertaiment expense: " << std::endl;
    std::cin >> entertaiment;
    
    //adding all the variables; 
    int expense = rent + groceries + entertaiment;
    
    
    //if else statement or our deciion making;
    if (expense > budget) {
        std::cout << "Oops! You have over spent by : " << (expense - budget) << "$.";
    } else if (expense == budget) {
        std::cout << "You are exactly on zero. you've used up you budget! ";
    } else if (expense < budget) {
        std::cout << "Good Job! you saved some money, your remaining amount is: " << ( budget - expense) << "$.";
    } else {
        std::cout << "You have entered invalid input please try again. Thank you!";
    }
    
    
    
    
    
} //I hope I did everything right.