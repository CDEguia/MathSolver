/* ----------------------
/ A) Parse incoming text
/ B) Solve for y
/
/
/
/
-----------------------*/
#include <iostream>
#include <cmath>
#include <stdbool.h>

#include "Continue.h"
#include "isNumber.h"

using namespace std;

int main()
{
    char line[50];

    do {
        cout << "Enter equation: ";
        cin.getline(line, 50);

        int i = 0;
        while (line[i] != '\0')				//loop through the lines in the text file
        {
            if (line[i] == ' ')
            {
                    //does nothing but get next char
            }
            else if (isNumber(line[i])) // Integer check
            {
                int number = 0;
                number += (line[i]-'0');

                while(isNumber(line[++i])){
                        number = number * 10 + (line[i]-'0');
                }
                --i;
                cout << number;
            }
            /*     else if (isLetter(w[i])) {
                        char word[10];
                        int n = 0;
                        while (!isSpecial(w[i], special) && w[i] != ' ') {
                            word[n] = w[i];
                            i++; n++;
                        }
                        i--;
                        word[n] = char(0);
                        int check = isReserved(word, reservedWords);
                        if (check != -1) {
                            cout << reservedWords[check];
                        }
                        else
                        {
                            outp << word;
                        }
                        cout << " ";
                }
                else
                {
                    //cout << "Special\n";
                    if (w[i] == ';') {
                        cout << w[i] << endl;
                    }
                    else {
                        cout << w[i] << " ";
                    }
                }
                */
            i++;
        }

    }while(cont());

    return 0;
}
