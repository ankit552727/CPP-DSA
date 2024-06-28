//Ritik wants a magic board which dislay a character for a corresponding number for this subject project.help him to develop such an application. example when the digit 65,66,67,68 and entered, the alphabet ABC are to be displayed. assume the number of input should be always 4




//chaman planned to choose a four digit lucky number for his car.his lucky number are  3,5 and 7 help to find the number whose sum is divisible by 3or 5 or 7. provide a valid car number , failed to provid a valid then display that number is not valid car number 
  


 #include <iostream>
using namespace std;
bool isValidCarNumber(int number) {
    int sum = 0;
    int digits[4];
    for (int i = 3; i >= 0; i--) {
        digits[i] = number % 10;
        number /= 10;
        sum += digits[i]; 
           

    }
    
    return (sum % 3 == 0 || sum % 5 == 0 || sum % 7 == 0);
}



int main() {
    int carNumber;
   bool foundValidCarNumber = false;
    for (int i = 1000; i <= 9999; i++) {
        if (isValidCarNumber(i)) { carNumber = i;
            foundValidCarNumber = true;
            break; }
    }
    if (foundValidCarNumber) {
         cout << "Valid car number: " << carNumber <<  endl;
    } else {
         cout << "No valid car number found." << endl;
    }
    return 0;
}