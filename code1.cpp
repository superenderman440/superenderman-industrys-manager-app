#include <iostream>
#include <string>
using namespace std;

// Global state (mirrors the Python module-level variables)
string t = "true";
string anymore;
string called;
string name;

// Mirrors Python's input(prompt): prints the prompt without a newline, then reads a line
string input(const string& prompt) {
    cout << prompt;
    string value;
    getline(cin, value);
    return value;
}

void helpme() {
    if (name == "secondarymainDEV") {
        cout << "position : highest DEV" << endl;
    } else {
        cout << "position : founder / extreme highest DEV" << endl;
    }
}

void callmewhenneeded() {
    cout << "when needed call me" << endl;
    cout << "" << endl;
    cout << "" << endl;
    called = input("");
}

void ask() {
    if (anymore == "yes") {
        string request = input("reason ");
        string request2 = input("who    ");

        if (request == "computer@pt$ insult") {
            cout << "robert i dont like dis human, well his name is " << request2
                 << " robert he has no intellect" << endl;
        }
        if (request == "computer@pt$ hire") {
            if (request2 == "gunther" || request2 == "patrick grimm") {
                cout << "system emergency overide" << endl;
            } else {
                cout << "adding " << request2 << " to team" << endl;
            }
        }
        if (request == "computer@pt$ fire") {
            cout << request2 << " fired" << endl;
        }
        if (request == "computer@pt$ quest!0n should i hire") {
            if (request2 == "gunther" || request2 == "patrick grimm") {
                cout << "no dont hire " << request2 << endl;
            } else {
                cout << "maybe hire " << request2 << endl;
            }
        }
        t = "true";
    } else {
        t = "false";
    }
}

int main() {
    name = input("username  ");
    t = "true";

    cout << endl;
    cout << endl;
    cout << "hello " << name << " im superenderman industrys's ai computer " << endl;

    if (name == "superendermanDEV" || name == "notmainhtsnDEV" ||
        name == "negmaintannerDEV" || name == "notmaintmsnDEV" ||
        name == "notmainduckDEV" || name == "inmainbentlynDEV" ||
        name == "secondarymainDEV") {
        if (name == "superendermanDEV" || name == "secondarymainDEV") {
            helpme();
        } else {
            cout << "position : DEV" << endl;
        }
    }

    string request = input("reason ");
    string request2 = input("who    ");

    if (request == "computer@pt$ insult") {
        cout << "robert i dont like dis human, well his name is " << request2
             << " robert he has no intellect" << endl;
    }
    if (request == "computer@pt$ hire") {
        if (request2 == "gunther" || request2 == "patrick grimm") {
            cout << "system emergency overide" << endl;
        } else {
            cout << "adding " << request2 << " to team" << endl;
        }
    }
    if (request == "computer@pt$ fire") {
        cout << request2 << " fired" << endl;
    }
    if (request == "computer@pt$ quest!0n should i hire") {
        if (request2 == "gunther" || request2 == "patrick grimm") {
            cout << "no dont hire " << request2 << endl;
        } else {
            cout << "maybe hire " << request2 << endl;
        }
    }

    anymore = input("anymore?   ");
    ask();

    if (anymore == "no") {
        called = input("");
    }

    while (t == "true" || called == "computer") {
        anymore = input("anymore?   ");
        ask();

        if (t == "false") {
            called = input("");
        }
        if (called == "computer") {
            t = "true";
        } else {
            called = input("");
        }
    }

    return 0;
}
