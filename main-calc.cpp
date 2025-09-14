// libs and headers
#include "headers/basic-functions.h"
#include "headers/strings.h"

using namespace std;

int main (int argc, char *argv[]) {
  
  double number_1 = 0, number_2 = 0;
  SimpelOperations addition_of_2;

  cout << asking_numbers; 
  cin >> number_1 >> number_2;

  addition_of_2.calculateAddition(number_1, number_2);

  return 0;
}
