#include <iostream>
using namespace std;
int main()
{
    int hidden_numb = 3;
    int guessed_no = 0;
    for (int tries = 5; tries >= 0; tries--)
    {
        cout << "Type a value: " << endl;
        cin >> guessed_no;
        cout << "Wrong guess :(" << endl;
        cout << "You have " << tries << " tries left. " << endl;
        if (guessed_no == hidden_numb)
        {
            cout << "Congrats You win" << endl;
            break;
        }
        if (tries == 0)
        {
            cout << "You have finished all your tries." << endl;
            break;
        }
        continue;
    }

    return 0;
}