#include <iostream>
#include <fstream>
#include <string>
using namespace std; 


// Variables
string PlayerName="";

int PlayerScore=0;

int main()
{
    cout << "Enter player name: ";
    cin >> PlayerName;
    cout << "Enter player's score";
    cin >> PlayerScore;
	ofstream HighScoreFile;
	HighScoreFile.open("highscores.txt");
	HighScoreFile << "\t\t  " << PlayerName << ", " << PlayerScore << "\n";
	HighScoreFile.close();

	HighScoreFile.seekp(200,std::ios::end); //to ensure the put pointer is at the end
	HighScoreFile<<"\t"<<PlayerName<<", "<<PlayerScore;

return 0;
}