/******************************************************************************
# Author:            Ari P.
# Assignment:        Midterm
# Date:              May 1, 2025
# Description:       This program will rank three participants in the Rock
                     Collecting Championship as first, second, and third place,
                     declaring any ties that occur.
# Input:             player1 (string), player2 (string), player3 (string),
                     numRocks1 (int), numRocks2 (int), numRocks3 (int)
# Output:            player1 (string), player2 (string), player3 (string),
                     avgRocks (double)
# Sources:           Midterm specifications, zyBooks reference
#*****************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Declare and initialize constant variable for calculating the average
const int NUM_PLAYERS = 3;

int main() {
   // Declare variables for input and output
   string player1 = "";
   string player2 = "";
   string player3 = "";
   int numRocks1 = 0;
   int numRocks2 = 0;
   int numRocks3 = 0;
   double avgRocks = 0.00;

   // Set float precision to 2 decimal places for output
   cout << fixed << setprecision(2);

   // Print a welcome message
   cout << "Welcome to the Rock Collecting Championship!" << endl << endl;

   // Prompt for input
   // Player 1
   cout << "Enter player 1 name: ";
   getline(cin, player1);
   cout << "How many rocks did " << player1 << " collect? ";
   cin >> numRocks1;
   cin.ignore(100, '\n');
   // Make sure it's not less than 0
   if (numRocks1 < 0) {
      cout << "Invalid amount. 0 will be entered.";
      numRocks1 = 0;
   }
   cout << endl << endl;
   // Player 2
   cout << "Enter player 2 name: ";
   getline(cin, player2);
   cout << "How many rocks did " << player2 << " collect? ";
   cin >> numRocks2;
   cin.ignore(100, '\n');
   // Make sure it's not less than 0
   if (numRocks2 < 0) {
      cout << "Invalid amount. 0 will be entered.";
      numRocks2 = 0;
   }
   cout << endl << endl;
   // Player 3
   cout << "Enter player 3 name: ";
   getline(cin, player3);
   cout << "How many rocks did " << player3 << " collect? ";
   cin >> numRocks3;
   cin.ignore(100, '\n');
   // Make sure it's not less than 0
   if (numRocks3 < 0) {
      cout << "Invalid amount. 0 will be entered.";
      numRocks3 = 0;
   }
   cout << endl << endl;

   // Perform a complicated set of logical tests to determine first, second,
   // and third place (including possible ties).
   if (numRocks1 > numRocks2) {
      if (numRocks1 > numRocks3) {
         cout << player1 << " is in first place!" << endl;
         if (numRocks2 > numRocks3) {
            cout << player2 << " is in second place." << endl;
            cout << player3 << " is in third place." << endl << endl;
         }
         else if (numRocks2 < numRocks3) {
            cout << player3 << " is in second place." << endl;
            cout << player2 << " is in third place." << endl << endl;
         }
         else if (numRocks2 == numRocks3) {
            cout << player2 << " and " << player3 << " are tied for third place.\
" << endl << endl;
         }
      }
      else if (numRocks1 == numRocks3) {
         cout << player1 << " and " << player3 << " are tied for first place!" \
<< endl;
         cout << player2 << " is in second place." << endl << endl;
      }
      else if (numRocks1 < numRocks3) {
         cout << player3 << " is in first place!" << endl;
         cout << player1 << " is in second place." << endl;
         cout << player3 << " is in third place." << endl;
      }
   }
   else if (numRocks1 == numRocks2) {
      if (numRocks1 > numRocks3) {
         cout << player1 << " and " << player2 << " are tied for first place!" \
<< endl;
         cout << player3 << " is in second place." << endl << endl;
      }
      else if (numRocks1 == numRocks3) {
         cout << "It is a three way tie!" << endl << endl;
      }
      else if (numRocks1 < numRocks3) {
         cout << player3 << " is in first place!" << endl;
         cout << player1 << " and " << player2 << " are tied for second place." \
<< endl << endl;
      }
   }
   else if (numRocks1 < numRocks2) {
      if (numRocks2 > numRocks3) {
         cout << player2 << " is in first place!" << endl;
         if (numRocks1 > numRocks3) {
            cout << player1 << " is in second place." << endl;
            cout << player3 << " is in third place." << endl;
         }
         else if (numRocks1 < numRocks3) {
            cout << player3 << " is in second place." << endl;
            cout << player1 << " is in third place." << endl;
         }
         else if (numRocks1 == numRocks3) {
            cout << player1 << " and " << player3 << " are tied for second \
place." << endl << endl;
         }
      }
      else if (numRocks2 == numRocks3) {
         cout << player2 << " and " << player3 << " are tied for first place!\
" << endl;
         cout << player1 << " is in second place." << endl << endl;
      }
      else if (numRocks2 < numRocks3) {
         cout << player3 << " is in first place!" << endl;
         cout << player2 << " is in second place." << endl;
         cout << player1 << " is in third place." << endl << endl;
      }
   }

   // Calculate the average number of rocks collected
   avgRocks = (static_cast<double>(numRocks1) + static_cast<double>(numRocks2)\
 + static_cast<double>(numRocks3)) / static_cast<double>(NUM_PLAYERS);
   
   // Print the average number of rocks collected
   cout << "The average number of rocks collected by the top three players is \
" << avgRocks << " rocks!" << endl << endl;

   // Print a goodbye message
   cout << "Congratulations, Rock Collectors!" << endl;
   return 0;
   }