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
         {'?', {" *** ", "    *", "  ** ", "     ", "  *  "}}};
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
          }
     }

     return 0;
}