#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main()
{
    // srand(time(0));
    // int random = rand();
    cout<<"\n\t\t\tWelcome to the GuessTheNumber game!"<<endl;
    cout<<"You have to guess a number between 1 and 100. You will have limited choices based on the level you choose. Good LUck!"<<endl;

    while(true)
    {
        cout<<"\nEnter the difficulty level: \n";
        cout<<"1 for easy! \t";
        cout<<"2 for medium! \t";
        cout<<"3 for difficult! \t";
        cout<<"0 for ending the game!/";

        int difficultychoice ;
        cout<<"Enter the number: ";
        cin>>difficultychoice;

        srand(time(0));
        int secretNumber =1 + (rand()%100);
        int playerchoice;

        if(difficultychoice==1){
            cout<<"\nYou have 10 choice for finding the secret number between 1 and 100.";
            int choiceleft=10;
            for(int i=1;i<=10;i++)
            {
                cout<<"\n\nEnter the Number:";
                cin>>playerchoice;
                if(playerchoice==secretNumber){
                    cout<<"Well played! You won,"<<playerchoice<<" is the secret number"<<endl;
                    cout<<"\t\t\tThanks for playing....."<<endl;
                    cout<<"play the game again with us!\n\n"<<endl;
                    break;
                }
                else{
                    cout<<"Nope,"<<playerchoice<<" is not right answer\n";
                    if(playerchoice>secretNumber){
                        cout<<"The secret number is smaller than the number you have chosen "<<endl;
                    }
                    else{
                         cout<<"The secret number is greater than the number you have chosen "<<endl;
                    }
                    choiceleft--;
                    // choiceleft= choiceleft-1;
                    cout<<choiceleft <<"choices-left"<<endl;
                    if(choiceleft==0){
                        cout<<"You couldn't find the secret number, it was "<<secretNumber<<", You lose!!\n\n";
                        cout<<"Play the game again to win!!\n\n";
                    }
                }
            }
        }
        else if(difficultychoice==2){
            cout<<"\nYou have 7 choice for finding the secret number between 1 and 100.";
            int choiceleft=7;
            for(int i=1;i<=7;i++)
            {
                cout<<"\n\nEnter the Number:";
                cin>>playerchoice;
                if(playerchoice==secretNumber){
                    cout<<"Well played! You won,"<<playerchoice<<"is the secret number"<<endl;
                    cout<<"\t\t\tThanks for playing....."<<endl;
                    cout<<"play the game again with us!\n\n"<<endl;
                    break;
                }
                else{
                    cout<<"Nope,"<<playerchoice<<"is not right answer\n";
                    if(playerchoice>secretNumber){
                        cout<<"The secret number is smaller than the number you have chosen "<<endl;
                    }
                    else{
                         cout<<"The secret number is greater than the number you have chosen "<<endl;
                    }
                    choiceleft--;
                    // choiceleft= choiceleft-1;
                    cout<<choiceleft <<"choices-left"<<endl;
                    if(choiceleft==0){
                        cout<<"You couldn't find the secret number, it was "<<secretNumber<<", You lose!!\n\n";
                        cout<<"Play the game again to win!!\n\n";
                    }
                }
            }
        }
        
        else if(difficultychoice==3){
            cout<<"\nYou have 5 choice for finding the secret number between 1 and 100.";
            int choiceleft=5;
            for(int i=1;i<=5;i++)
            {
                cout<<"\n\nEnter the Number:";
                cin>>playerchoice;
                if(playerchoice==secretNumber){
                    cout<<"Well played! You won,"<<playerchoice<<"is the secret number"<<endl;
                    cout<<"\t\t\tThanks for playing....."<<endl;
                    cout<<"play the game again with us!\n\n"<<endl;
                    break;
                }
                else{
                    cout<<"Nope,"<<playerchoice<<"is not right answer\n";
                    if(playerchoice>secretNumber){
                        cout<<"The secret number is smaller than the number you have chosen "<<endl;
                    }
                    else{
                         cout<<"The secret number is greater than the number you have chosen "<<endl;
                    }
                    choiceleft--;
                    // choiceleft= choiceleft-1;
                    cout<<choiceleft <<"choices-left"<<endl;
                    if(choiceleft==0){
                        cout<<"You couldn't find the secret number, it was "<<secretNumber<<", You lose!!\n\n";
                        cout<<"Play the game again to win!!\n\n";
                    }
                }
            }
        }
        
        else if(difficultychoice==0){
            exit(0);
        }

        else{
            cout<<"Wrong choice, Enter valid choice to play the game! (0,1,2,3)"<<endl;
        }
    }
   return 0;

}