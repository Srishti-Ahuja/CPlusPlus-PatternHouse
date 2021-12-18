#include <iostream>
using namespace std;

void printPattern (int);
void printWhitespaces (int);

int main () {

    int totalLines;

    cout << "How many lines to be printed? -- ";
    fflush(stdout);
    cin >> totalLines;

    cout << "\nYour pattern looks like this:\n";
    cout << "\n";

    printPattern (totalLines);

    cout << "\n";
    return 0;
}

void printPattern (int totalLines) {

    int whiteSpace, printAlphabet;
    char alphabet = (64 + totalLines);

    for (int i = totalLines; i >= 1; i--) {

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);

        printAlphabet = ((2 * i) - 1);

        for (int j = 1; j <= printAlphabet; j++) {

            if (j & 1) {

                cout << alphabet << " ";
            } else {

                cout << "  ";
            }
        }

        alphabet--;
        cout << endl;
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        cout << "  ";
    }
}