#include <iostream>
#include <string>

int main() {
    // Declare a variable to store the user's favorite number
    int favoriteNumber;

    // Prompt the user to enter their favorite integer
    std::cout << "Please enter your favorite number: ";

    // Read the integer from the user and store it in 'favoriteNumber'
    std::cin >> favoriteNumber;

    // Perform the sequence of "magic" calculations
    // Use a separate variable to store the intermediate and final results
    int magicResult = favoriteNumber;

    // Multiply the number by 2
    magicResult *= 2; // Equivalent to magicResult = magicResult * 2;

    // Add 10 to the result
    magicResult += 10; // Equivalent to magicResult = magicResult + 10;

    // Divide the result by 2
    magicResult /= 2; // Equivalent to magicResult = magicResult / 2;

    // Subtract the original favorite number from the result
    magicResult -= favoriteNumber; // Equivalent to magicResult = magicResult - favoriteNumber;

    // Display the final result to the user with a fun message
    std::cout << "Your magic number is... " << magicResult << "!" << std::endl;

    return 0;
}



/* @skillznathan ➜ /workspaces/LAB2-Part2 (main) $ g++ MagicNumber.cpp -o Magic
@skillznathan ➜ /workspaces/LAB2-Part2 (main) $ ./Magic
Please enter your favorite number: 8
Your magic number is... 5! */


