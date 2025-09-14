// libs and headers
#include <ostream>
#include "headers/basic-functions.h"
#include "headers/strings.h"

int main (int argc, char *argv[]) {
  
  int variation = 0;
  double number_1 = 0, number_2 = 0;
  SimpelOperations addition_of_2;
  SimpelOperations substraction_of_2;
  SimpelOperations multiplication_of_2;
  SimpelOperations division_of_2;

  std::cout << greeting << std::endl;
  std::cout << greeting_variation << std::endl; 
  std::cout << picking_option; 
  std::cin >> variation;
  std::cout << asking_numbers; 
  std::cin >> number_1 >> number_2;

  if(variation == 1){
    std::cout << result_of << addition << is;
    addition_of_2.calculateAddition(number_1, number_2);
  }

  if(variation == 2){
    std::cout << result_of << substraction << is;
    substraction_of_2.calculateSubtraction(number_1, number_2);
  }

  if(variation == 3){ 
    std::cout << result_of << multiplication << is;
    multiplication_of_2.calculateMultiplication(number_1, number_2);
  } 

  if(variation == 4){
    std::cout << result_of << division << is;
    division_of_2.calculateDivision(number_1, number_2);
  }


  return 0;
}
