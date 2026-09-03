#include <iostream>
using namespace std;

void files() {
    system("C++ Make_files.cpp -o temp_file");
    system("./temp_file");
    system("rm temp_file");
}

int main(int argc, char *argv[]) {
    int input_choice;
    // Checks if there are too many argments.
    if (argc > 2) {
        cout << "Too many argments.";
    }

    // Checks of the user needs help.
    if (string(argv[2]) == "help") {
        cout << "Enter a name of a script to run it.";
    }
    
    //Checks if you need to enter file name.
    if (argc == 1 or string(argv[2]) == "help") {
        cout << "1. Lots of folders." << endl
            << "-> ";
        cin >> input_choice;
    }

    // If user puts files or selects one it runs.
    if (input_choice == 1 or string(argv[2]) == "files") {
        files();
    }
    return 0;
}
