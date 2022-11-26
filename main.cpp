#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Welcome to Stardew Helper" << endl;

    //while(1){

        cout << "1: Plant\n2: Person\n3: Item Lookup" << endl;
        int selection;
        cin >> selection;
        switch (selection){
            case 1:
                cout << "\nPlant! Select the season:\n1: Spring\n2: Summer\n3: Fall\n4: Winter" << endl;
                cin >> selection; // read input
                switch (selection){
                    case 1:
                        cout << "Spring Crops:\npotato\nplant\nthings" << endl;
                        break;
                    case 2:
                        cout << "Summer Crops:\npotato\nplant\nthings" << endl;
                        break;
                    case 3:
                        cout << "Fall Crops:\npotato\nplant\nthings" << endl;
                        break;
                    case 4:
                        cout << "Winter Crops:\npotato\nplant\nthings" << endl;
                        break;
                    default:
                        cout << "Bad entry, try again!" << endl;
                }
                break;
            case 2:
                cout << "\nPerson! Looking for a gift or looking for them?:\n1: Gift\n2: Location" << endl;
                cin >> selection; // read input
                switch (selection) {
                    case 1:
                        cout << "Gift!" << endl;
                        break;
                    case 2:
                        cout << "Location!" << endl;
                        break;
                    default:
                        break;
                }
                break;
            case 3:
                cout << "Item Lookup!" << endl;
                char input[80];
                cin >> input;
                cout << "Looking for ..." << input << "..." << endl;
                break;
            default:
                cout << "Bad entry! Try again!" << endl << endl;
                break;
        }
    //}




    return 0;
}
