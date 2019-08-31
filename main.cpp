// Name:Bryan Cortes
// This program calculates and displays business expenses.

#include <iostream>

int main()
{

int businness_trip_location, days;
double hotel_expense, meal_expense, total;

//write introduction and questions.

std::cout<< "Welcome to the Business Trip Tracker!\n";

std::cout<< "What is the business trip location?\n";
std::cin>> businness_trip_location;
std::cout<< "How many days will the trip take?\n";
std::cin>> days;
std::cout<< "What is the total hotel expense?\n";
std::cin>> hotel_expense;
std::cout<< "What is the total meal expense?\n";
std::cin>> meal_expense;

//Calculate the  trip location, days, and total costs.

total = hotel_expense + meal_expense;

return 0;

}
