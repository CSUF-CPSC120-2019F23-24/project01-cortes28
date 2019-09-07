// Name:Bryan Cortes
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>

int main()
{

std::string businness_trip_location;
int  days;
double hotel_expense, meal_expense, total;

//write introduction and questions.

std::cout<< "Welcome to the Business Trip Tracker!\n";

std::cout<< "What is the business trip location? ";
std::cin>> businness_trip_location;
std::cout<< "How many days will the trip take? ";
std::cin>> days;
std::cout<< "What is the total hotel expense? $";
std::cin>> hotel_expense;
std::cout<< "What is the total meal expense? $";
std::cin>> meal_expense;

//Calculate the  trip location, days, and total costs.

total = hotel_expense + meal_expense;

std::cout<<std::setw(12) << "Location"
    <<std::setw(8) << "Days"
    <<std::setw(9) << "Hotel"
    <<std::setw(8) << "Meal"
    <<std::setw(9) << "Total" << std::endl;

std::cout << std::setw(12) << businness_trip_location
      <<std::setw(8) << days
      <<std::setw(6) << "$" << hotel_expense
      <<std::setw(6) << "$" << meal_expense
      <<std::setw(5) << "$" << total <<std::endl;


return 0;

}
