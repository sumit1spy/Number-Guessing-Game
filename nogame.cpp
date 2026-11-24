#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<conio.h>
using namespace std;
int main()
{

    int a,b,sc,c=0,i,guess,guesss,k=0,scc,p,d=0,g=0;
    top:
    cout<<endl<<endl<<endl;

    system("color F4");
    cout<<"==========================================================================================="<<endl<<endl;
    cout<<"\t\t\t\t\t*****************************"<<endl;
    cout<<"\t\t\t\t\tWELCOME TO GUESS NUMBER GAME"<<endl;
    cout<<"\t\t\t\t\t*****************************"<<endl<<endl;
    cout<<"============================================================================================="<<endl<<endl;
    cout<<"\t\t\t\t\t--------------------"<<endl;
    cout<<"\t\t\t\t\t GUESSING GAME MENU"<<endl;
    cout<<"\t\t\t\t\t--------------------"<<endl<<endl;


    cout<<"  1. Limited Attempt Game"<<endl;
    cout<<"  2. Unlimited Attempt Game"<<endl;
    cout<<"  3. Help"<<endl;
    cout<<"  4. Score"<<endl;
    cout<<"  5. Exit"<<endl<<endl;
    cout<<"Enter your Choice : ";
    cin>>a;

    system("cls");
    switch(a)
    {
    case 1 :
        {
            system("color 02");
            cout<<"============================================================================================="<<endl<<endl;
            cout<<"\t\t\t\t\tGuess Number Between 1 to 50"<<endl;
            cout<<"============================================================================================="<<endl<<endl;
            cout<<"\t\t\t\t\t------------------------"<<endl;
            cout<<"\t\t\t\t\t You have only 5 attempt"<<endl;
            cout<<"\t\t\t\t\t-------------------------"<<endl<<endl;
            srand(time(0));
            sc = rand() % 50 + 1;

            for(i = 1; i <= 5; i++)
            {
                cout << "Guess your number : ";
                cin >> guess;

                c = c + 1;

                if(guess > sc)
                {
                    cout << "  too high! try again" << endl << endl;
                }
                else if(guess < sc)
                {
                    cout << "  too low! try again" << endl << endl;
                }
                else
                {
                    cout << "  Congratulations You guessed the right number" << endl << endl;
                    cout << "  Guess " << sc << " in " << c << " attempts" << endl;
                    d=d+1;
                    break;

                }

                }
                if(guess != sc)
                {
                    cout << "Sorry! Your 5 attempts are over." << endl;
                    cout << "The correct number was: " << sc << endl;


                }


        }
        system("pause");
        system("cls");
        goto top;
    case 3 :
        {
            system("color 0B");
            cout<<"1. pahle tum menu pe '1' type karo fir 5 attempt milenge thume number guess karne ke liye "<<endl;
            cout<<"her attempt me jo bhi number guess karenge uske baad pata chalega ki apko wo number ke upr"<<endl;
            cout<<"guess karna hai ya niche."<<endl<<endl;
            cout<<"2. ab tum '2' pe click karoge to isme apke pass attempt unlimited honge aur 1 to 200 ke bich ke "<<endl;
            cout<<" number honge bss jaldi guess karna hai isme bhi apko pata chalega her attempt me ki upr guess karna hai"<<endl;
            cout<<"ya niche fir last me apke total attempt bata diye jayega "<<endl<<endl;
            cout<<"4. ispe click karte hi ap exit ho jayenge."<<endl<<endl;
            cout<<"\t\t\t\t===================THANK YOU ==============="<<endl;
        }
        system("pause");
        system("cls");
        goto top;
        case 2 :
        {
            system("color 02");
            cout<<"============================================================================================="<<endl<<endl;
            cout<<"\t\t\t\t\tGuess Number Between 1 to 200"<<endl;
            cout<<"============================================================================================="<<endl<<endl;
            cout<<"\t\t\t\t\t------------------------"<<endl;
            cout<<"\t\t\t\t\t You have unlimitd attempt"<<endl;
            cout<<"\t\t\t\t\t-------------------------"<<endl<<endl;
            srand(time(0));
            scc = rand() % 200 + 1;

            for(p = 1; i <= scc; p++)
            {
                cout << "Guess your number : ";
                cin >> guesss;

                k = k + 1;

                if(guesss > scc)
                {
                    cout << "  too high! try again" << endl << endl;
                }
                else if(guesss < scc)
                {
                    cout << "  too low! try again" << endl << endl;
                }
                else
                {
                    cout << "  Congratulations You guessed the right number" << endl << endl;
                    cout << "  Guess " << scc << " in " << k << " attempts" << endl;
                    g=g+1;
                    break;

                }

                }
                if(guesss != scc)
                {
                    cout << "Sorry! Your 5 attempts are over." << endl;
                    cout << "The correct number was: " << sc << endl;


                }


        }
        system("pause");
        system("cls");
        goto top;
        case 5:
            {
                 cout<<"============================================================================================="<<endl<<endl;
            cout<<"\t\t\t\t\t THANK YOU FOR COME "<<endl;
            cout<<"============================================================================================="<<endl<<endl;

            }
            case 4:
            {
                system("color E3");
                    cout<<"============================================================================================="<<endl<<endl;
            cout<<"\t\t\t\t\t Total Score  "<<endl;
            cout<<"============================================================================================="<<endl<<endl<<endl;
            cout<<"\t\t\t\t\t*******************"<<endl;
            cout<<"\t\t\t\t\t Limited Game Score"<<endl;
            cout<<"\t\t\t\t\t*******************"<<endl;
            cout<< "Limited Game score : "<<d<<endl<<endl<<endl;
            cout<<"\t\t\t\t\t*******************"<<endl;
            cout<<"\t\t\t\t\t unlimited Game Score"<<endl;
            cout<<"\t\t\t\t\t*******************"<<endl;
            cout<< "unimited Game score : "<<g<<endl<<endl<<endl;
            system("pause");
           system("cls");
        goto top;



            }


    }



}
