// idk, but this pretty fun...
// github.com/alf4ridzi

#include <iostream>
#include <random>
#include <vector>
#include <limits>
using namespace std;

// random ah bot pick whatever he/she  want..
int bot_pick(){
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> distr(1, 3);

   return distr(gen);
}

int main(){
    
    vector<string> jankenpon_list = {"rock", "paper", "scissors"};
    int choice;
    string result;
    char continue_yn = 'n';
    
    while (true){
        system("cls");
        printf("Welcome to JANKENPON game\n\nSelect your choice :\n[1] ROCK\n[2] PAPER\n[3] SCISSORS\n\n");
        cout << "Select : ";
        cin >> choice;
        if (choice > 3 || choice <= 0){
            cout << "Open your eyes my nigga. Please select 1, 2 or 3" << endl;
        }
        int bot_p = bot_pick();
        const string player_choice = jankenpon_list[choice - 1];
        const string bot_choice = jankenpon_list[bot_p - 1];

        cout << "You choice : " << player_choice << endl;
        cout << "Bot choice : " << bot_choice << endl;
        if (player_choice == bot_choice){
            result = "Seri";
        } else if (player_choice == "rock" && bot_choice == "scissors" || player_choice == "paper" && bot_choice == "rock" || player_choice == "scissors" && bot_choice == "paper"){
            result = "Menang lawan bot";
        } else {
            result = "Kalah melawan bot";
        }

        cout << "Result : " << result << endl;
        cout << "\nContinue? [y/n] ";
        cin >> continue_yn;

        if (continue_yn != 'y'){
            break;
        }

    }
    
    return 0;
}
