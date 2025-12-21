#include <iostream>
#include <string>
using namespace std;

int windows = 0;
int macos = 0;
int linux = 0;

void addpoint(string os) {
    if (os == "Linux")
    {
        linux++;
    }
    else if (os == "Windows")
    {
        windows++;
    }
    else if (os == "macOS")
    {
        macos++;
    }
    else
    {
        cout << "WTF?" << endl;
    }
    
}

int question(string question) {
    string answer;
    cout << question;
    cin >> answer;

    if (answer=="y")
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main() {
    cout << "Hello and welcome to cPPdistro! Answer these questions with 'y' or 'n', we'll select a operating system for you." << endl;

    if (question("Do you do coding?: ") == 1)                       {addpoint("Linux"); addpoint("macOS");}
    if (question("Do you love breaking your system: ") == 1)        {addpoint("Linux");}
    if (question("Do you love using terminal: ") == 1)              {addpoint("Linux"); addpoint("macOS");}
    if (question("Are you a gamer: ") == 1)                         {addpoint("Windows");}
    if (question("Is your system old: ") == 1)                      {addpoint("Linux");}
    if (question("Do you use Apple devices: ") == 1)                {addpoint("macOS");}
    if (question("Do you love open-source: ") == 1)                 {addpoint("Linux");}
    if (question("Do you have privacy concerns: ") == 1)            {addpoint("Linux");}
    if (question("Do you do video editing: ") == 1)                 {addpoint("macOS");}
    if (question("Is battery very important for you: ") == 1)       {addpoint("macOS");}
    if (question("Do you love customization: ") == 1)               {addpoint("Linux");}
    if (question("Do you fear viruses: ") == 1)                     {addpoint("Linux"); addpoint("macOS");}
    if (question("Do you use Microsoft Office: ") == 1)             {addpoint("Windows"); addpoint("macOS");}
    if (question("Do you make apps for Apple devices: ") == 1)      {addpoint("macOS");}
    


    cout << "\nLinux: " << linux << "\nmacOS: " << macos << "\nWindows: " << windows << endl;

    cout << "Thanks for using this app. If you want to give a review about this, you can use GitHub Issues." << endl;

    return 0;
}