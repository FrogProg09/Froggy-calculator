// libs
#include <iostream>

// This file is for writing functions for +, -, *, /.

class SimpelOperations{
  public:

  void calculateAddition(double a, double b){
    double result = 0;
    result = a + b;

    std::cout << result << std::endl;
  }

  void calculateSubtraction(double a, double b){
    double result = 0;
    result = a - b;

    std::cout << result << std::endl;
  }

  void calculateMultiplication(double a, double b){
    double result = 0;
    result = a * b;

    std::cout << result << std::endl;
  }

  void calculateDivision(double a, double b){
    double result = 0;
    result = a / b;

    std::cout << result << std::endl;
  } 
};


