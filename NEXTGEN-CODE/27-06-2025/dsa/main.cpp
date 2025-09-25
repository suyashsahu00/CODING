#include <iostream>
using namespace std;

bool login()
{
    string username;
    string password;

    cout << "\nEnter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == "Suyash" && password == "suy@sh321")
    {
        cout << "\nLogin Successful. Welcome, Suyash!\n";
        return true;
    }
    else
    {
        cout << "\nLogin Failed. Please check your credentials.\n";
        return false;
    }
}

int main()
{
    int apiKey;

    cout << "Enter API Key to continue: ";
    cin >> apiKey;

    if (apiKey == 2706)
    {
        if (login())
        {
            cout << "\nAccess Granted. Initializing the system...\n";
            
        }
        else
        {
            cout << "Access Denied.\n";
            return -1;
        }
    }
    else
    {
        cout << "\nInvalid API Key. Terminating program.\n";
        return -1;
    }

    return 0;
}
