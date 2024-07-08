#include <iostream>
using namespace std;

int main() {
    char c;
    int is_lowercase_vowel, is_uppercase_vowel;

    try {
        cout << "Enter any one Charctor: ";
        cin >> c;
    // we handle the exception through !isalpha(c) means if there is not and alphabet than
    // it throw the error and look at the ! sign which denote negation operator (not).
        if (!isalpha(c)) {
            throw "Invalid input! Please enter a character.";
        }
    // we are actually storing the boolean value in integer
    // because boolean is nothing but 0 and 1

        is_lowercase_vowel = (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o');
        is_uppercase_vowel = (c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O');
// so we spicify the condition and all the condition is give the boolena expresson
// that is True of False and stored in integer.
        if (is_lowercase_vowel || is_uppercase_vowel) {
            cout << c << " is a vowel ";
        } else {
            cout << c << " is a consonant ";
        }

    } catch (const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}
