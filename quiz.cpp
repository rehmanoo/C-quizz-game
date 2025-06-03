#include "quiz.h"
#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

bool askQuestion(const string& question, const string options[4], char correctAnswer) {
    cout << question << endl;
    for (char opt = 'A'; opt <= 'D'; opt++) {
        cout << opt << ") " << options[opt - 'A'] << endl;
    }

    char userAnswer;
    cout << "Your answer (A/B/C/D): ";
    cin >> userAnswer;
    userAnswer = toupper(userAnswer);

    if (userAnswer == correctAnswer) {
        cout << "Correct!\n\n";
        return true;
    } else {
        cout << "Wrong. Correct answer was " << correctAnswer << ".\n\n";
        return false;
    }
}

int startQuiz() {
    int score = 0;
    string q1_opts[4] = {"Charles Dickens", "William Shakespeare", "Jane Austen", "Mark Twain"};
    string q2_opts[4] = {"Venus", "Mars", "Jupiter", "Saturn"};
    string q3_opts[4] = {"African Elephant", "Giraffe", "Blue Whale", "Hippopotamus"};

    if (askQuestion("1. Who wrote the play Romeo and Juliet?", q1_opts, 'B')) score++;
    if (askQuestion("2. What planet is known as the Red Planet"?, q2_opts, 'B')) score++;
    if (askQuestion("3. What is the largest mammal in the world?", q3_opts, 'C')) score++;

    return score;
}