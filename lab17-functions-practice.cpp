// Program used to illustrate the usage of functions
// Gets three exam scores from the user and shows them 
// their letter grades
// Started by: Caitlin Snyder
// Edited by: [Liam Bernhard and Mouhameth Ba]

#include <iostream>
using namespace std;

/****************************************************************
 *  Function Name: getScore
 *  Purpose: Ask the user for a test score, validate the input,
 *          and return the valid score.
 *  Parameters: None
 *  Return Value: A double representing a valid test score (0–100)
 ****************************************************************/

// [TO DO: ADD getScore function HERE]
    // Ask the user for a score and validate input.
    // Keep asking until the score is between 0 and 100.
    // Return the valid score.
// The function getScore's purpose is to recive a test score fro mthe user and validate in and store in into a variabe in the main funtion to use later.
// There is no input parameter in this function but it will output the validated test score.
double getScore() {
    // We initalized score0 so the user could enter a test score number.
    double score0;
    // We used a do while to validate that the user enters a valid test score between (0 and 100)
    do {
        cout << "Enter a test score with a grade ranging from (0 - 100) here: ";
        cin >> score0;
        

            
    } while (score0 < 0 || score0 > 100);
    // This line returns the validated score to the getscore() in the main function.
    return score0;
}




/****************************************************************
 * Function Name: displayLetterGrade
 * Purpose: Determine and display the letter grade 
 *          corresponding to the numeric score.
 * Parameters: score (double) – the numeric test score
 * Return Value: None (displays the letter grade to the screen)
 ****************************************************************/


// [TO DO : ADD getScore function HERE]
    // Determine the letter grade and display it.
    // Example grading scale:
    // 90–100: A
    // 80–89:  B
    // 70–79:  C
    // 60–69:  D
    // Below 60: F
// This is the void function called dipslayLetterGrade that will display the letter grade based on the score entered.
// The inputed parameter of the function is the score entered previously. There is nothing returned in this function.
// This is a series of if, else if, and else statements were used to assign a letter to its appropriate score.
void displayLetterGrade(double score) {
    if (score >= 90) {
        cout << "You have A " << endl;
    }
    else if (score >= 80 && score <= 89) {
    cout << "You have B " << endl;
}
    else if (score >= 70 && score <= 79) {
        cout << "You have C " << endl;
    }
    else if (score >= 60 && score <= 69) {
        cout << "You have D " << endl;
    }
     else {
         cout << "You are a failure" << endl;
     }
 }




// You should not need to edit main for your program to run 
// correctly. Only edit it to add cout statements or comment
// out code to test your functions.
int main() {
    double score1, score2, score3;

    cout << "Enter your three exam scores below.\n";

    // Call getScore three times to get and validate each test score
    score1 = getScore();
    score2 = getScore();
    score3 = getScore();

    // Display letter grades for each exam
    cout << "\nLetter grades:\n";
    cout << "Exam 1: ";
    displayLetterGrade(score1);

    cout << "Exam 2: ";
    displayLetterGrade(score2);

    cout << "Exam 3: ";
    displayLetterGrade(score3);

    return 0;
}


