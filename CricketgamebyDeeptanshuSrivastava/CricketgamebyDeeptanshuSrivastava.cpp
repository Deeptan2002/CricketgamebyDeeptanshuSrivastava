// CricketgamebyDeeptanshuSrivastava.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>   //getch();
#include <windows.h> //sleep();
#include <random>

using namespace std;

int computerscore;
int userscore;
void userbatting();
int userbowling(int score);
void compbatting();
int compbowling(int scores);


void userbatting()
{
    // function call up for user 1st batting 
    system("cls");
    int runs[5] = { 1,2,3,4,6 };

    srand((unsigned)time(NULL));
    int compguess = 1 + rand() % 4;

    int comptguess = 1,userguess = 0;

    
    userscore = -1;
    int flag = 1;
        while (userguess != comptguess)
        {
            srand((unsigned)time(NULL));
            compguess = rand() % 5;
            comptguess = runs[compguess];


            if (flag)
            {
                userscore = 0;
                flag = 0;
            }
            
            label:
                cout << "Enter the runs between 1/2/3/4/6:  ";
                cin >> userguess;

                if (userguess == comptguess)
                {
                    goto label199;
                }
                else
                {

                    switch (userguess)
                    {
                    case 1:userscore += 1; break;
                    case 2:userscore += 2; break;
                    case 3:userscore += 3; break;
                    case 4:userscore += 4; break;
                    case 6:userscore += 6; break;
                    default: cout << " Invalid Keys "; goto label;
                    }
                    cout << " Runs till Now: " << userscore << endl;
                }
            

        }
        label199:
        cout << "\t \t \t \t User Scored: " << userscore<<endl;
        Sleep(10000);
        userbowling(userscore);

   

}

int userbowling(int userscored)
{
    system("cls");
    int runs[5] = { 1,2,3,4,6 };
    srand((unsigned)time(NULL));
    int compguess = 1 + rand() % 4;

    int comptguess = 1, userguess = 0;

    computerscore = -1;
    int flag = 1;

    while ((userguess != comptguess) and (computerscore < userscored))
    {
        srand((unsigned)time(NULL));
        compguess = rand() % 5;
        comptguess = runs[compguess];
        
        if (flag)
        {
            computerscore = 0;
            flag = 0;
        }
       
        label:

            cout << "Enter the ball number between 1/2/3/4/6:  ";
            cin >> userguess;
            if (userguess == comptguess)
            {
                goto label299;
            }
            else
            {

                switch (comptguess)
                {
                case 1:computerscore += 1; break;
                case 2:computerscore += 2; break;
                case 3:computerscore += 3; break;
                case 4:computerscore += 4; break;
                case 6:computerscore += 6; break;
                default: cout << " Invalid Keys "; goto label;
                }
                cout << " Runs till Now: " << computerscore << endl;
                cout << " Runs needed Now: " << userscored - computerscore << endl;
            }


        



    }
    if (computerscore <= userscored)
    {
        if (userguess == comptguess)
        {
            label299:
            cout << "You Won you Bowled Out the computer...Superb. ";
            Sleep(10000);
            return 1;
        }
    
    }
    
    else
    {
        cout << "Computer Won...Better Luck Next Time. ";
        Sleep(10000);
        return 1;
    }
    return 1;


}
void compbatting()
{
    // function call up for computer 1st batting
    system("cls");
    int runs[5] = { 1,2,3,4,6 };
    srand((unsigned)time(NULL));
    int compguess = 1 + rand() % 4;

    int comptguess = 1,userguess = 0;

    computerscore = -1;
    int flag = 1;


    while (userguess != comptguess)
    {
        srand((unsigned)time(NULL));
        compguess = rand() % 5;
        comptguess = runs[compguess];

        if (flag)
        {
            computerscore = 0;
            flag = 0;
        }
       
        label:
            cout << "Enter the ball number between 1/2/3/4/6:  ";
            cin >> userguess;
            if (userguess == comptguess)
            {
                goto label499;
            }
            else
            {

                switch (comptguess)
                {
                case 1:computerscore += 1; break;
                case 2:computerscore += 2; break;
                case 3:computerscore += 3; break;
                case 4:computerscore += 4; break;
                case 6:computerscore += 6; break;
                default: cout << " Invalid Keys "; goto label;
                }
                cout << " Runs till Now: " << computerscore << endl;
            }
        
    }

    label499:
    cout << "\t \t \t \t Computer Scored: " << computerscore<< endl;
    Sleep(1000);
    compbowling(computerscore);//if comp gets then to remove that score from runs.


}
int compbowling(int comscored)
{
    system("cls");
    int runs[5] = { 1,2,3,4,6 };
    srand((unsigned)time(NULL));
    int compguess = 1 + rand() % 4;

    int comptguess = 1, userguess = 0;
    cout <<endl<<endl << "\t\t Your target is: " << comscored<<endl<<endl;
    userscore = -1;
    int flag = 1;

    while ((userguess != comptguess) and (userscore < comscored))
    {
        srand((unsigned)time(NULL));
        compguess = rand() % 5;
        comptguess = runs[compguess];

        if (flag)
        {
            userscore = 0;
            flag = 0;
        }
        

        label:

            cout << "Enter the runs number between 1/2/3/4/6:  ";
            cin >> userguess;

            if (userguess == comptguess)
            {
                goto label99;
            }
            else
            {
                switch (userguess)
                {
                case 1:userscore += 1; break;
                case 2:userscore += 2; break;
                case 3:userscore += 3; break;
                case 4:userscore += 4; break;
                case 6:userscore += 6; break;
                default: cout << " Invalid Keys "; goto label;
                }

                cout << "Runs till Now: " << userscore << endl;
                cout << " Runs needed Now: " << comscored - userscore << endl;
            }


        
        
    }
    if (userscore <= comscored)
    {
        
        if (userguess == comptguess)
        {
        label99:
            cout << "I Won, You Bowled Out by the computer...Superb Me. ";
            Sleep(10000);
            return 1;
        }

    }

    else
    {
        cout << "You Won.......You did it Master. ";
        Sleep(10000);
        return 1;
    }
    return 1;

}
/*
int batting(int user)
{
    int runs[5] = { 1,2,3,4,6};
    srand((unsigned)time(NULL));
    int compguess = 1 + rand() % 4;
    
    int userguess = 0;
    
    if (user == 1)
    {

        while (userguess != compguess)
        {
            srand((unsigned)time(NULL));
            compguess = 1 + rand() % 4;
            compguess = runs[compguess];
        label:
            cout << "Enter the runs between 1/2/3/4/6";
            cin >> userguess;
            switch (userguess)
            {
            case 1:userscore += 1; break;
            case 2:userscore += 2; break;
            case 3:userscore += 3; break;
            case 4:userscore += 4; break;
            case 6:userscore += 6; break;
            default: cout << " Invalid Keys "; goto label;
            }
            cout << " Runs till Now: " << userscore;

        }
    

    }
    else
    {
        while (userguess != compguess)
        {
            srand((unsigned)time(NULL));
            compguess = 1 + rand() % 4;
            compguess = runs[compguess];
        label:
            cout << "Enter the balls between 1/2/3/4/6";
            cin >> userguess;
            switch (compguess)
            {
            case 1:computerscore += 1; break;
            case 2:computerscore += 2; break;
            case 3:computerscore += 3; break;
            case 4:computerscore += 4; break;
            case 6:computerscore += 6; break;
            default: cout << " Invalid Keys "; goto label;
            }
        }
    }



    


    return 0;
}
int bowling(int user)
{
    return 0;
}
bool compare()
{

    return 0;
}

*/

bool play()
{
    system("cls");
    string username;
    char toss,choice;
    int i = 10;
    cout << endl << endl;
    cout<<"\t \t Hello User, Please Enter Your Name: ";
    cin >> username;
    cout << endl << "\t \t Hello " << username;
    cout << endl << "\t \t Go for Toss (Press H/T): ";
    cin >> toss;
    cout << endl << endl;
    while (i--)
    {
        Sleep(100);
        cout << "Head " << "Tail ";
    }

    srand((unsigned)time(NULL));
    int check = 1 + rand() % 9;
    int checkcomputer = 1 + rand() % 2;

    
    //cout << check << checkcomputer;//for detemining the random number of toss and computer
    Sleep(1000/2);
    

    if ((check < 3) and (toss == 'T' or toss == 't'))
    {
        system("cls");
        cout << endl <<  "\t \t \t \t " << username << ": You won the toss ";
        cout << endl << "\t \t \t \t Enter your choice for Batting(B) or Bowling(O): ";
        cin >> choice;
        cout << endl << "\t \t \t \t " << username << " Your choice is " << choice;
        Sleep(1000);
        
        if (choice == 'B')
        {
            userbatting();
            

        }
        else
        {
            
            compbatting();
        }
        goto label;
    }

    else if((check >= 3 and check <6) and (toss == 'H' or toss == 'h'))
    {
        system("cls");
        cout << endl << "\t \t \t \t " << username << ": You won the toss ";
        cout << endl << "\t \t \t \t " << "Enter your choice for Batting(B) or Bowling(O): ";
        cin >> choice;
        cout << endl<< "\t \t \t \t " << username << " Your choice is " << choice;
        Sleep(1000);

        if (choice == 'B')
        {
            
            userbatting();

        }
        else
        {
           
            compbatting();
        }
        
        goto label;
    }
    else 
    {
        system("cls");

        cout << endl << "\t \t \t \t" << username << ": You lose the toss ";
        cout << endl << "\t \t \t \t" << "Computer choice for Batting(B) or Bowling(O): ";
        
        if (checkcomputer == 2)
            choice = 'B';
        else
            choice = 'O';

        cout << endl << "\t \t \t \tComputer choice is " << choice;
        Sleep(1000);

        if (choice == 'B')
        {
            
            compbatting();
        }
        else
        {
            userbatting();
        }

        goto label;

    }



label:

    return 1;

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////done down code
bool instructions()
{
    system("cls");
    int back;

    cout << endl << endl << endl << endl << endl;
    cout << " \t \t This is the simple Cricket game as user need to follow some rules:-   " << endl<<endl<<endl;
    cout << " \t \t       1. User need to enter his/her name.         " << endl;
    cout << " \t \t       2. User need to call for head/tails.        " << endl;
    cout << " \t \t       3. If user wins the toss then user need to select the batting/bowing option." << endl;
    cout << " \t \t       4. For batting/bowling user need to select random number between 1/2/3/4/6. " << endl;
    cout << " \t \t       5. Here Computer also guess the number between 1/2/3/4/6. " << endl;
    cout << " \t \t       6. Number guessed by Computer and user number get matched the user get out or computer get bowled." << endl;
    cout << " \t \t       7. Then the whole process get repeated for next batsmen and bowler." << endl;
    cout << endl << endl << endl << endl;

    cout << " \t \t \t Press Key 2 to Go Back:";

    cin >> back;
    if (back == 2)
        return 1;
    else
        return 0;

}
bool aboutus()
{
    system("cls");
    int back;
    
    cout << endl << endl << endl << endl << endl;
    cout << " \t \t This is the simple Cricket game, created using the basic concept of development as this game "        << endl;
    cout << " \t \t           is very simple to play for anyone and i hope that everyone enjoy playing this game.     "   << endl;
    cout << " \t \t \t                                     Lots of Love and Regards.                                     "<< endl;
    cout << " \t \t \t                                      Deeptanshu Srivastava.                                      " << endl;
    
    cout << endl << endl << endl << endl;
    
    cout << " \t \t \t Press Key 2 to Go Back: ";

    cin >> back;
    if (back == 2)
        return 1;
    else
        return 0;
}



int main()
{
    int ch;
    cout << endl << endl << endl << endl;
    cout << "\t \t \t \t \t \t Welcome to World of Cricket \t \t";
    
label:
    cout << endl << endl << endl << endl;
    cout << "\t \t \t \t \t \t Select your Choice (1/2/3/4) \t \t"<<endl;
    cout << "\t \t \t \t \t \t 1. Play \t \t" << endl;
    cout << "\t \t \t \t \t \t 2. Instructions \t \t" << endl;
    cout << "\t \t \t \t \t \t 3. About Us \t \t" << endl;
    cout << "\t \t \t \t \t \t 4. Exit \t \t" << endl<<endl<<endl;
    cout << "\t \t \t \t \t \t Enter your choice: ";
    cin >> ch;

    bool aboutreturn;
    bool playreturn;
    bool instructionsreturn;

    switch (ch)
    {
    case 1: { cout << "\t \t \t \t \t \t Play"; 
        playreturn = play();
        system("cls");
        goto label;
        break; }
    
    case 2: { cout << "\t \t \t \t \t \t Instructions"; 
        instructionsreturn = instructions();
        system("cls");
        goto label;
        break;}

    case 3: {cout << "\t \t \t \t \t \t About Us";
        aboutreturn = aboutus();
        system("cls");
        goto label;
        break; }
    
    case 4: {
            cout << "\t \t \t \t \t \t Bye Bye Player";
            exit(0);
            }
    
    default: { cout << "\t \t \t \t \t \t Entered the Wrong Choice Please select between (1 to 4) ";
        system("cls");//used to clear the screen
        goto label; }
    
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
