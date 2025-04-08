#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <limits>
using namespace std;

void pass(string pass)
{
    string word = "learning123";

    if (pass == word)
    {
        cout << "\033[32m\t\t\t*******************************************************************************\033[32m\n\n\n\n\n\n\n";
        cout << "\n\033[32m\t\t\t\t\t\t\tOPENING FILE\033[32m\n";
        cout << "\t\t\t\t\t\t\tLOADING...";
        cout << "\n\n\n\n\n\n\n";
        cout << "\t\t\t*******************************************************************************\n";
    }

    else
    {
        cout << "\033[31m\t\t************************************************************************\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\tINVALID\033[31m";
        cout << "\n\n\n\n\n\n";

        cout << "\033[31m\t\t*************************************************************************\n";
    }
}

void printPatternWord(const string &word, const map<char, vector<string>> &patterns)
{
    // Convert input to uppercase for case-insensitive matching
    string upperWord;
    for (char c : word)
    {
        upperWord += toupper(c);
    }

    // Each character pattern has 5 lines
    for (int line = 0; line < 5; line++)
    {
        for (char c : upperWord)
        {
            // Check if character exists in our patterns
            if (patterns.find(c) != patterns.end())
            {
                cout << patterns.at(c)[line] << " ";
            }
            else
            {
                // Print empty space for unsupported characters
                cout << string(patterns.at('A')[0].length(), ' ') << " ";
            }
        }
        cout << endl;
    }
}

void printPatternWord(const string &word, const map<char, vector<string>> &patterns, int height = 5)
{
    for (int line = 0; line < height; line++)
    {
        for (char c : word)
        {
            char upperC = toupper(c);
            if (patterns.find(upperC) != patterns.end() && line < patterns.at(upperC).size())
            {
                cout << patterns.at(upperC)[line] << " ";
            }
            else
            {
                cout << string(patterns.begin()->second[0].length(), ' ') << " ";
            }
        }
        cout << endl;
    }
}

void printColoredPattern(const string &word, const map<char, vector<string>> &patterns, string colorCode)
{
    for (int line = 0; line < 5; line++)
    {
        for (char c : word)
        {
            char upperC = toupper(c);
            if (patterns.find(upperC) != patterns.end())
            {
                cout << colorCode << patterns.at(upperC)[line] << "\033[0m ";
            }
            else
            {
                cout << string(patterns.begin()->second[0].length(), ' ') << " ";
            }
        }
        cout << endl;
    }
}

// Usage:
// printColoredPattern("HELLO", patternLibrary, "\033[31m"); // Red text

bool isWordSupported(const string &word, const map<char, vector<string>> &patterns)
{
    for (char c : word)
    {
        char upperC = toupper(c);
        if (patterns.find(upperC) == patterns.end())
        {
            return false;
        }
    }
    return true;
}

void quizA()
{

    char a, b, c, d, e;
    int count = 0;
    cout << "\n\nQues 1) Choose the odd one out(choose vowels in the below mentioned questions):\n";

    cout << "a) a, b, c, d" << endl;
    cin >> a;
    if (a == 'a')
    {
        count++;
    }
    cout << "b) r, s, t, e, v" << endl;
    cin >> b;
    if (b == 'e')
    {
        count++;
    }
    cout << "c) k, i, l, m, p" << endl;
    cin >> c;
    if (c == 'i')
    {
        count++;
    }
    cout << "d) h, o, l, f, m" << endl;
    cin >> d;
    if (d == 'o')
    {
        count++;
    }
    cout << "e) k, r, u, s, h" << endl;
    cin >> e;
    if (e == 'u')
    {
        count++;
    }

    cout << "\n\n\n\n\nWELL DONE YOU PERFOREMED THE TEST!!!\n\n\n\n\n";

    cout << "YOUR SCORE IS ---------->\n\n\n";

    if (count >= 4)
    {
        cout << "Excellent!!!" << endl
             << "You scored : " << count;
    }
    else if (count >= 3 && count < 4)
    {
        cout << "GOOD JOB!!!" << endl
             << "You scored : " << count;
    }

    else if (count < 3)
    {
        cout << "Your score is: " << count << endl;
    }

    cout << "\n\n\nQues 2) count the number of consonants in the following: " << endl;
    int l, m, n, o, p;
    int count2 = 0;

    cout << "1) Hello, how are you?\n";
    cin >> l;
    if (l == 7)
    {
        count2++;
    }
    cout << "2) Are you sure?\n";
    cin >> m;
    if (m == 4)
    {
        count2++;
    }

    cout << "3) Is it okay?\n";
    cin >> n;
    if (n == 4)
    {
        count2++;
    }

    cout << "4) I am good\n";
    cin >> o;
    if (o == 3)
    {
        count2++;
    }

    cout << "5) Understood\n";
    cin >> p;
    if (p == 6)
    {
        count2++;
    }

    cout << "\n\n\n\n\nWELL DONE YOU PERFOREMED THE TEST!!!\n\n\n\n\n";

    cout << "YOUR SCORE IS ---------->\n\n\n";

    if (count2 >= 4)
    {
        cout << "Excellent!!!" << endl
             << "You scored : " << count2;
    }
    else if (count2 >= 3 && count2 < 4)
    {
        cout << "GOOD JOB!!!" << endl
             << "You scored : " << count2;
    }

    else if (count2 < 3)
    {
        cout << "Your score is: " << count2 << endl;
    }

    cout << "\n\n\n\nYOUR TOTAL SCORE IS: " << count + count2 << endl
         << endl;
}

void quizNum()
{
    int a, b, c, d, e, f, g, i, j, h;
    int count = 0;

    cout << "LET'S LEARN ADDITION" << endl
         << endl
         << endl;

    cout << "ques) Perform the required operations in the following questions\n\n";
    cout << "1) 5+4 : ";
    cin >> a;
    if (a == 9)
    {
        count++;
    }

    cout << "2) 10+5 : ";
    cin >> b;
    if (b == 15)
    {
        count++;
    }

    cout << "3) 10-3 : ";
    cin >> c;

    if (c == 7)
    {
        count++;
    }
    cout << "4) 19-9 : ";
    cin >> d;
    if (d == 10)
    {
        count++;
    }

    cout << "5) 10/2 : ";
    cin >> e;
    if (e == 5)
    {
        count++;
    }

    cout << "6) 100/20 : ";
    cin >> f;
    if (d == 5)
    {
        count++;
    }

    cout << "7) 4*2 : ";
    cin >> g;
    if (g == 8)
    {
        count++;
    }

    cout << "8) 1*1 : ";
    cin >> h;
    if (h == 1)
    {
        count++;
    }

    cout << "9) (6+4)*2 : ";
    cin >> i;
    if (i == 20)
    {
        count++;
    }

    cout << "10) 7*7 : ";
    cin >> j;
    if (j == 49)
    {
        count++;
    }

    cout << "\n\n\n\n\nWELL DONE YOU PERFOREMED THE TEST!!!\n\n\n\n\n";

    cout << "YOUR SCORE IS ---------->\n\n\n";

    if (count >= 8)
    {
        cout << "Excellent!!!" << endl
             << "You scored : " << count;
    }
    else if (count >= 7 && count < 8)
    {
        cout << "GOOD JOB!!!" << endl
             << "You scored : " << count;
    }

    else if (count < 5)
    {
        cout << "Your score is: " << count << endl;
    }
}

map<char, vector<string>> createCompletePatternLibrary()
{
    return {
        {'A', {"  *  ", " * * ", "*****", "*   *", "*   *"}},
        {'B', {"**** ", "*   *", "**** ", "*   *", "**** "}},
        {'C', {" ****", "*    ", "*    ", "*    ", " ****"}},
        {'D', {"**** ", "*   *", "*   *", "*   *", "**** "}},
        {'E', {"*****", "*    ", "*****", "*    ", "*****"}},
        {'F', {"*****", "*    ", "*****", "*    ", "*    "}},
        {'G', {" ****", "*    ", "*  **", "*   *", " ****"}},
        {'H', {"*   *", "*   *", "*****", "*   *", "*   *"}},
        {'I', {"*****", "  *  ", "  *  ", "  *  ", "*****"}},
        {'J', {"*****", "   * ", "   * ", "*  * ", " **  "}},
        {'K', {"*   *", "*  * ", "***  ", "*  * ", "*   *"}},
        {'L', {"*    ", "*    ", "*    ", "*    ", "*****"}},
        {'M', {"*   *", "** **", "* * *", "*   *", "*   *"}},
        {'N', {"*   *", "**  *", "* * *", "*  **", "*   *"}},
        {'O', {" *** ", "*   *", "*   *", "*   *", " *** "}},
        {'P', {"**** ", "*   *", "**** ", "*    ", "*    "}},
        {'Q', {" *** ", "*   *", "*   *", "*  **", " ****"}},
        {'R', {"**** ", "*   *", "**** ", "*  * ", "*   *"}},
        {'S', {" ****", "*    ", " *** ", "    *", "**** "}},
        {'T', {"*****", "  *  ", "  *  ", "  *  ", "  *  "}},
        {'U', {"*   *", "*   *", "*   *", "*   *", " *** "}},
        {'V', {"*   *", "*   *", "*   *", " * * ", "  *  "}},
        {'W', {"*   *", "*   *", "* * *", "** **", "*   *"}},
        {'X', {"*   *", " * * ", "  *  ", " * * ", "*   *"}},
        {'Y', {"*   *", " * * ", "  *  ", "  *  ", "  *  "}},
        {'Z', {"*****", "   * ", "  *  ", " *   ", "*****"}},
        {'0', {" *** ", "*   *", "*   *", "*   *", " *** "}},
        {'1', {"  *  ", " **  ", "  *  ", "  *  ", " *** "}},
        {'2', {" *** ", "    *", "  ** ", " *   ", "*****"}},
        {'3', {" *** ", "    *", "  ** ", "    *", " *** "}},
        {'4', {"   * ", "  ** ", " * * ", "*****", "   * "}},
        {'5', {"*****", "*    ", "**** ", "    *", "**** "}},
        {'6', {" ****", "*    ", "**** ", "*   *", " *** "}},
        {'7', {"*****", "    *", "   * ", "  *  ", " *   "}},
        {'8', {" *** ", "*   *", " *** ", "*   *", " *** "}},
        {'9', {" *** ", "*   *", " ****", "    *", " *** "}},
        {' ', {"     ", "     ", "     ", "     ", "     "}},
        {'!', {"  *  ", "  *  ", "  *  ", "     ", "  *  "}},
        {'?', {" *** ", "    *", "  ** ", "     ", "  *  "}},
        {'_', {"     ", "     ", "     ", "     ", "*****"}}};
}

void fillInTheBlanks(){
    map<char, vector<string>> patternLibrary = createCompletePatternLibrary();
    int count = 0;

    string answer;

    cout << "Q1)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tA__LE", patternLibrary, "\033[91m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letter?\n";

    cin.ignore();
    getline(cin, answer);

    if (answer == "PP")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q2)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tBA__", patternLibrary, "\033[92m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "LL")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q3)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tC_T", patternLibrary, "\033[93m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "A")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q4)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\t_OG", patternLibrary, "\033[94m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "D")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q5)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tELE____T", patternLibrary, "\033[95m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "PHAN")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q6)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tF__H", patternLibrary, "\033[96m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "IS")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q7)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tGR___S", patternLibrary, "\033[91m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "APE")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q8)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\t__RSE", patternLibrary, "\033[92m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "HO")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q9)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\t___POT", patternLibrary, "\033[93m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "INK")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q10)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tJ_G", patternLibrary, "\033[94m");
    cout << "\n\n\n"
         << endl;

    cout<<"What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "U")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q11)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tK__E", patternLibrary, "\033[95m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "IT")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q12)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tLI__", patternLibrary, "\033[96m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "ON")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q13)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tMON___", patternLibrary, "\033[91m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "KEY")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q14)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tN__T", patternLibrary, "\033[92m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "ES")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q15)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tO_L", patternLibrary, "\033[93m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "W")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q16)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tP___OT", patternLibrary, "\033[94m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "ARR")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q17)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tQU__N", patternLibrary, "\033[95m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "EE")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q18)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tR_T", patternLibrary, "\033[96m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "A")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q19)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tS_N", patternLibrary, "\033[91m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "U")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q20)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\t____PHONE", patternLibrary, "\033[92m");
    cout << "\n\n\n"
         << endl;

    cout << "What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "TELE")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q21)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tUMBR____", patternLibrary, "\033[93m");
    cout << "\n\n\n"
         << endl;

    cout<<"What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "ELLA")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q22)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tV_N", patternLibrary, "\033[94m");
    cout << "\n\n\n"
         << endl;

    cout<<"What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "A")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q23)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tW__CH", patternLibrary, "\033[95m");
    cout << "\n\n\n"
         << endl;

    cout<<"What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "AT")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q24)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tX__S", patternLibrary, "\033[96m");
    cout << "\n\n\n"
         << endl;

    cout<<"What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "MA")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q25)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tY_K", patternLibrary, "\033[91m");
    cout << "\n\n\n"
         << endl;

    cout<<"What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "A")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "Q26)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tZ__RA", patternLibrary, "\033[92m");
    cout << "\n\n\n"
         << endl;

    cout<<"What are the missing letters?\n";

    getline(cin, answer);

    if (answer == "EB")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
    }

    cout << "\n\n\n\n\nWELL DONE YOU PERFOREMED THE TEST!!!\n\n\n\n\n";

    cout << "YOUR SCORE IS ---------->\n\n\n";

    if (count >= 21)
    {
        cout << "Excellent!!!" << endl
             << "You scored : " << count;
    }
    else if (count >= 15 && count < 21)
    {
        cout << "GOOD JOB!!!" << endl
             << "You scored : " << count;
    }

    else if (count < 15)
    {
        cout << "Your score is: " << count << endl;
    }

}

void jumbledWords()
{
    map<char, vector<string>> patternLibrary = createCompletePatternLibrary();

    int count = 0;

    string answer;

    cout << "Q1)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tLEPPA", patternLibrary, "\033[91m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    cin.ignore();
    getline(cin, answer);

    if (answer == "APPLE")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was APPLE\n";
    }

    cout << "Q2)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tLBAL", patternLibrary, "\033[92m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "BALL")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was BALL\n";
    }

    cout << "Q3)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tTCA", patternLibrary, "\033[93m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "CAT")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was CAT\n";
    }

    cout << "Q4)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tGDO", patternLibrary, "\033[94m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "DOG")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was DOG\n";
    }

    cout << "Q5)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tLTANHEPE", patternLibrary, "\033[95m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "ELEPHANT")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was ELEPHANT\n";
    }

    cout << "Q6)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tSIFH", patternLibrary, "\033[96m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "FISH")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was FISH\n";
    }

    cout << "Q7)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tSAPEGR", patternLibrary, "\033[91m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "GRAPES")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was GRAPES\n";
    }

    cout << "Q8)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tRSOHE", patternLibrary, "\033[92m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "HORSE")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was HORSE\n";
    }

    cout << "Q9)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tTPONKI", patternLibrary, "\033[93m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "INKPOT")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was INKPOT\n";
    }

    cout << "Q10)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tUJG", patternLibrary, "\033[94m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "JUG")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was JUG\n";
    }

    cout << "Q11)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tEIKT", patternLibrary, "\033[95m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "KITE")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was KITE\n";
    }

    cout << "Q12)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tOILN", patternLibrary, "\033[96m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "LION")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was LION\n";
    }

    cout << "Q13)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tNYKEMO", patternLibrary, "\033[91m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "MONKEY")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was MONKEY\n";
    }

    cout << "Q14)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tTNSE", patternLibrary, "\033[92m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "NEST")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was NEST\n";
    }

    cout << "Q15)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tWOL", patternLibrary, "\033[93m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "OWL")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was OWL\n";
    }

    cout << "Q16)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tTRRAPO", patternLibrary, "\033[94m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "PARROT")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was PARROT\n";
    }

    cout << "Q17)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tENUEQ", patternLibrary, "\033[95m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "QUEEN")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was QUEEN\n";
    }

    cout << "Q18)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tTAR", patternLibrary, "\033[96m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "RAT")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was RAT\n";
    }

    cout << "Q19)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tUSN", patternLibrary, "\033[91m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "SUN")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was SUN\n";
    }

    cout << "Q20)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tEELTHNPOE", patternLibrary, "\033[92m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "TELEPHONE")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was TELEPHONE\n";
    }

    cout << "Q21)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tLBMURELA", patternLibrary, "\033[93m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "UMBRELLA")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was UMBRELLA\n";
    }

    cout << "Q22)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tAVN", patternLibrary, "\033[94m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "VAN")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was VAN\n";
    }

    cout << "Q23)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tTAWCH", patternLibrary, "\033[95m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "WATCH")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was WATCH\n";
    }

    cout << "Q24)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tSMAX", patternLibrary, "\033[96m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "XMAS")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was XMAS\n";
    }

    cout << "Q25)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tKAY", patternLibrary, "\033[91m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "YAK")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was YAK\n";
    }

    cout << "Q26)\n";

    printColoredPattern("\t\t\t\t\t\t\t\t\tRZBEA", patternLibrary, "\033[92m");
    cout << "\n\n\n"
         << endl;

    cout << "What is the word?\n";

    getline(cin, answer);

    if (answer == "ZEBRA")
    {
        cout << "CORRECT :)\n";
        count++;
    }
    else
    {
        cout << "WRONG :(\n";
        cout << "The word was ZEBRA\n";
    }

    cout << "\n\n\n\n\nWELL DONE YOU PERFOREMED THE TEST!!!\n\n\n\n\n";

    cout << "YOUR SCORE IS ---------->\n\n\n";

    if (count >= 21)
    {
        cout << "Excellent!!!" << endl
             << "You scored : " << count;
    }
    else if (count >= 15 && count < 21)
    {
        cout << "GOOD JOB!!!" << endl
             << "You scored : " << count;
    }

    else if (count < 15)
    {
        cout << "Your score is: " << count << endl;
    }
}

int main()
{

    map<char, vector<string>> patternLibrary = createCompletePatternLibrary();

    printColoredPattern("THE LEARNING SYSTEM", patternLibrary, "\033[33m");

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    string password;
    cout << "-------------------------------------WELCOME TO THE LEARNING BOOK------------------------------------" << endl;
    cout << "\t\t\t\t\tEnter password: ";
    getline(cin, password);
    pass(password);

    cout << "\n\n\n\n\n";

    if (password == "learning123")
    {

        printColoredPattern("WELCOME!!!", patternLibrary, "\033[37m");
        cout << "\n\n\n\n\n\n";

        int choice;
        int choice2;

        cout << "FROM THE MAIN MENU CHOOSE, WHAT WOULD YOU LIKE TO DO FIRST?" << endl;
        cout << "1) Learn aplhabets using a song" << endl;

        cout << "2) Learn Words using alphabets" << endl;
        cout << "3) FUN TIME(lets play a game?)" << endl;
        cout << "4) Quit" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "LET'S LEARN OR QUIZ FIRST?" << endl;
            cout << "1) Learn alphabets\n";
            cout << "2) Quizzzz time" << endl;
            cin >> choice2;
            switch (choice2)
            {
            case 1:
                printColoredPattern("\t\t\t\t\tLEARNING TIME!!!", patternLibrary, "\033[37m");
                cout << "\n\n\n\n";

                cout << "=================================================================================" << endl;
                int m;
                cout << "\n\n\n\n\n";

                cout << "Well, what would you like to learn first?" << endl;
                cout << "1) English alphabets" << endl;
                cout << "2) Numbers" << endl;
                cin >> m;

                cout << "\n\n\n\n\n";
                cout << "=================================================================================" << endl;

                cout << "\n\n\n\n\n\n";

                switch (m)
                {

                case 1:

                    cout << "-----------------------------LET'S PLAY WITH LETTERS-----------------------------";

                    cout << "\n\n\n\n";

                    printColoredPattern("\t\t\t\t\t\t\t\t\tA B C D", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t\tE F G", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\tH I J K", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\tL M N O P Q", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t\tR S T", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t\tU V W", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t\tX Y Z", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;

                    cout << "-------------------------------------------------------------------------------------";

                    break;

                case 2:

                    cout << "\n\n\n\n\n\n";

                    cout << "\t\t-----------------------------LET'S PLAY WITH NUMBERS----------------------------";

                    cout << "\n\n\n\n";

                    printColoredPattern("\t\t\t\t\t\t\t\t\t1", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t2", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t3", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t4", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t5", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t6", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t7", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t8", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t9", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t10", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t11", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t12", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t13", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t14", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t15", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t16", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t17", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t18", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t19", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t20", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t21", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t22", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t23", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t24", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t25", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t26", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t27", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t28", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t29", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t30", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t31", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t32", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t33", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t34", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t35", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t36", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t37", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t38", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t39", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t40", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t41", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t42", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t43", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t44", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t45", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t46", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t47", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t48", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    printColoredPattern("\t\t\t\t\t\t\t\t\t49", patternLibrary, "\033[33m");
                    cout << "\n\n\n"
                         << endl;
                    printColoredPattern("\t\t\t\t\t\t\t\t\t50", patternLibrary, "\033[32m");
                    cout << "\n\n\n"
                         << endl;

                    break;
                }

                cout << "\t\t------------------------------------------------------------------------------------";

                break;

            case 2:
                printColoredPattern("QUIZZZ TIME!!!", patternLibrary, "\033[33m");

                cout << "\n\n\n\n";
                cout << "===========================================================================================";
                cout << "\n\n\n\n";

                int choice2;

                cout << "What would you like to test first?" << endl;
                cout << "1) Learn more about/with alphabets?";
                cout << "\n2) Learn more with numbers?";
                cin >> choice2;

                switch (choice2)
                {
                case 1:
                    quizA();

                case 2:
                    quizNum();
                }

                cout << "\n\n\n\n";
                cout << "===========================================================================================";
                cout << "\n\n\n\n";
            }

            break;

        case 2: // learning word using alphabets

            int ch;

            cout << "LET'S LEARN WORDS OR QUIZ?" << endl;
            cout << "1) Learn Words\n";
            cout << "2) Quiz time" << endl;
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << "-----------------------------LET'S LEARN NEW WORDS-----------------------------" << endl;
                cout << "\n\n\n\n";

                printColoredPattern("\t\t\t\t\t\t\t\t\tA FOR APPLE", patternLibrary, "\033[91m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tB FOR BALL", patternLibrary, "\033[92m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tC FOR CAT", patternLibrary, "\033[93m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tD FOR DOG", patternLibrary, "\033[94m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tE FOR ELEPHANT", patternLibrary, "\033[95m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tF FOR FISH", patternLibrary, "\033[96m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tG FOR GRAPES", patternLibrary, "\033[91m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tH FOR HORSE", patternLibrary, "\033[92m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tI FOR INKPOT", patternLibrary, "\033[93m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tJ FOR JUG", patternLibrary, "\033[94m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tK FOR KITE", patternLibrary, "\033[95m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tL FOR LION", patternLibrary, "\033[96m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tM FOR MONKEY", patternLibrary, "\033[91m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tN FOR NEST", patternLibrary, "\033[92m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tO FOR OWL", patternLibrary, "\033[93m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tP FOR PARROT", patternLibrary, "\033[94m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tQ FOR QUEEN", patternLibrary, "\033[95m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tR FOR RAT", patternLibrary, "\033[96m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tS FOR SUN", patternLibrary, "\033[91m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tT FOR TELEPHONE", patternLibrary, "\033[92m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tU FOR UMBRELLA", patternLibrary, "\033[93m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tV FOR VAN", patternLibrary, "\033[94m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tW FOR WATCH", patternLibrary, "\033[95m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tX FOR XMAS", patternLibrary, "\033[96m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tY FOR YAK", patternLibrary, "\033[91m");
                cout << "\n\n\n"
                     << endl;

                printColoredPattern("\t\t\t\t\t\t\t\t\tZ FOR ZEBRA", patternLibrary, "\033[92m");
                cout << "\n\n\n"
                     << endl;

                break;

            case 2:

                printColoredPattern("QUIZ TIME!!!", patternLibrary, "\033[33m");

                cout << "\n\n\n\n";
                cout << "===========================================================================================";
                cout << "\n\n\n\n";

                cout<<"Do you want to:\n";
                cout<<"\t1. Guess the word from jumbled letters?\n";
                cout<<"\t2. Fill in the blank with missing letters of the word?\n";

                int ch2;
                cin>>ch2;

                switch(ch2){
                    case 1:
                    jumbledWords();
                    break;

                    case 2:
                    fillInTheBlanks();
                    break;
                }
                break;
            }
            break;
        }
    }

    return 0;
}
