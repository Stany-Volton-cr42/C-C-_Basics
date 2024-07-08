// #include <iostream>
// #include <cctype> // for toupper() and tolower()

// using namespace std;

// int main()
// {
//     char vowel;
//     cout << "Enter the alphabet: ";
//     cin >> vowel;

//     // Convert the input character to uppercase or lowercase

//     switch (vowel)
//     {
//     case 'a':
//     case 'A':
//         cout << vowel <<" is a vowel";
//         break;
//     case 'e':
//     case 'E':
//         cout << vowel <<" is a vowel";
//         break;
//     case 'i':
//     case 'I':
//         cout << vowel <<" is a vowel";
//         break;
//     case 'o':
//     case 'O':
//         cout << vowel <<" is a vowel";
//         break;
//     case 'u':
//     case 'U':
//         cout << vowel << " is a vowel";
//         break;
//     default:
//         cout << vowel << " is a consonant";
//         break;
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    char vowel;
    cout << "Enter the alphabet: ";
    cin >> vowel;

    // tolower() dunxtion Convert the input character to uppercase into lowercase
    vowel = tolower(vowel);

    switch (vowel)
    {
    case 'a':
        cout << vowel <<" is a vowel";
        break;
    case 'e':
        cout << vowel<<" is a vowel";
        break;
    case 'i':
        cout << vowel<<" is a vowel";
        break;
    case 'o':
        cout << vowel<<" is a vowel";
        break;
    case 'u':
        cout << vowel<< " is a vowel";
        break;
    default:
        cout << vowel << " is a consonant";
        break;
    }

    return 0;
}
