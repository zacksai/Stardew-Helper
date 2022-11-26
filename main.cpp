#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Welcome to Stardew Helper" << endl;

    while(1){

        cout << "1: Plant\n2: Person\n3: Item Lookup" << endl;
        int a;
        cin >> a;
        switch (a){
            case 1:
                cout << "Plant!" << endl;
                break;
            case 2:
                cout << "Person!" << endl;
                break;
            case 3:
                break;
                cout << "Item Lookup!" << endl;
            default:
                cout << "Bad entry! Try again!" << endl << endl;
                break;
        }
    }




    return 0;
}
