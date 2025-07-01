#include <iostream>
using namespace std;

int main()
{
    // giving system command and storing return value
    int returnCode = system("echo Hello, World!");

    // checking if the command was executed successfully
    if (returnCode == 0) {
        cout << "Command executed successfully." << endl;
    }
    else {
        cout << "Command execution failed or returned "
                "non-zero: "
             << returnCode << endl;
    }

    return 0;
}
