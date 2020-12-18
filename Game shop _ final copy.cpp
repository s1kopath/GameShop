#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <conio.h>
#include <windows.h>
using namespace std;

struct game
{
    string gname;
    string gprice;

    float processor,ram,rom,graphics;

}gamedata,requirements;



int main()
{
    int i=0,j;
    int cost=0;
    char choice;
    int p;
    string finddata;

    //system("color F2");
    system("color 0D");
    cout<<"\n\t\t                 ______          ";
    cout<<"\n\t\t                |_    _|             ";
    cout<<"\n\t\t    *------*       |  |       *------*";
    cout<<"\n\t\t    *-*  *-*       |  |       *-*  *-*";
    cout<<"\n\t\t      *  *    _____|__|_____    *  *       ";
    cout<<"\n\t\t      *  *   |  ___    ___  |   *  *       ";
    cout<<"\n\t\t      *  *   |_|   |  |   |_|   *  *       ";
    cout<<"\n\t\t      *  *       B |  | A       *  *       ";
    cout<<"\n\t\t      *  *        _|  |_        *  *       ";
    cout<<"\n\t\t      *  *       |______|       *  *       ";
    cout<<"\n\t\t      *  *_________|  |_________*  *       ";
    cout<<"\n\t\t      *____________|  |____________*       ";
    cout<<"\n\t\t                  _|  |_                  ";
    cout<<"\n\t\t                 |______|                \n\n\n\n";
    Sleep(2000);
    system("Cls");
    cout<<"\n\n\t\t\t\t WELCOME"<<endl;
    cout<<"\n\t\t\t\t   TO"<<endl;
    cout<<"\n\t\t\t\tGame Shop"<<endl;
    Sleep(2000);
    system("Cls");


    while(1)  //outer loop start
    {

        system("cls");
        cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
        cout<<"\n\n\tVIDEO GAME SHOP MANAGEMENT PROGRAM\n\n";
        cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
        cout<<"\n\n\tMAIN SCREEN\n\n";
        cout<<"Enter your choice: "<<endl;
        cout<<"1.See available games"<<endl;
        cout<<"2.Enter new game or Find game"<<endl;
        cout<<"3.Buy games"<<endl;
        cout<<"4.Check out"<<endl;
        cout<<"5.Exit program"<<endl;
        cout<<"Enter your choice: ";
        //cin>>choice;
        choice=getch();


        system("cls");


        switch(choice)
        {
            case '1'://see available games
                {
                while(1)
                {
                    system("cls");
                    cout<<"Game list Menu"<<endl<<endl;
                    cout<<"1.Show list"<<endl;
                    cout<<"2.Jump to main menu"<<endl;
                    cout<<"Enter your choice: "<<endl;
                    //cin>>choice;
                    choice=getch();

                    switch(choice)
                    {
                    case '1':
                        {
                            ifstream in("gname.txt",ios::app);
                            ifstream in1("gprice.txt",ios::app);
                            for(int j=0;(j<i)||(!in.eof())||(!in1.eof());j++)
                            {


                            getline(in,gamedata.gname);
                            getline(in1,gamedata.gprice);

                            cout<<"Name: "<<gamedata.gname<<endl;
                            cout<<"Price: "<<gamedata.gprice<<" Tk"<<endl;
                            }
                            in.close();
                            in1.close();
                            cout<<"Press any key two times to proceed...";

                            getch();
                            getch();

                        }



                    case '2':
                        {
                            break;
                        }
                        break;

                    }
                    break;


                }
                    break;

                }

            case '2'://add and search
                while(1)
                {
                    system("cls");
                    cout<<"New Game Menu"<<endl<<endl;
                    cout<<"1.Enter game"<<endl;
                    cout<<"2.Find a Game"<<endl;
                    cout<<"3.Jump to main menu"<<endl;
                    cout<<"Enter your choice: "<<endl;
                    cin>>choice;
                    //choice=getch();

                    switch(choice)
                    {
                    case '1':
                        {
                        ofstream f1("gname.txt",ios::app);
                        ofstream f2("gprice.txt",ios::app);

                        ofstream rq1("processor.txt",ios::app);
                        ofstream rq2("ram.txt",ios::app);
                        ofstream rq3("rom.txt",ios::app);
                        ofstream rq4("graphics.txt",ios::app);

                        for(i=0;choice!='n';i++)
                        {
                            if(choice=='y'||choice=='Y'||choice=='1')
                            {

                                cout<<"Enter name: ";
                                cin.ignore();
                                getline(cin,gamedata.gname);
                                cout<<"Enter price: ";
                                cin>>gamedata.gprice;

                                cout<<"PC Requirements"<<endl;
                                cout<<"Processor: ";
                                cin>>requirements.processor;
                                cout<<"Ram: ";
                                cin>>requirements.ram;
                                cout<<"Rom: ";
                                cin>>requirements.rom;
                                cout<<"Graphics: ";
                                cin>>requirements.graphics;

                                f1<<gamedata.gname<<endl;
                                f2<<gamedata.gprice<<endl;
                                rq1<<requirements.processor<<endl;
                                rq2<<requirements.ram<<endl;
                                rq3<<requirements.rom<<endl;
                                rq4<<requirements.graphics<<endl;

                                cout<<"if you want to continue entering data press y "<<endl;
                                cout<<"if you want to finish press n "<<endl;
                                cin>>choice;
                                //choice=getch();
                            }
                        }
                        f1.close();
                        f2.close();
                        rq1.close();
                        rq2.close();
                        rq3.close();
                        rq4.close();
                        }
                    continue;//control back to inner loop -1


                    case '2':
                        {
                            ifstream f3("gname.txt",ios::app);
                            ifstream f7("gprice.txt",ios::app);

                            ifstream rq5("processor.txt",ios::app);
                            ifstream rq6("ram.txt",ios::app);
                            ifstream rq7("rom.txt",ios::app);
                            ifstream rq8("graphics.txt",ios::app);

                            cout<<"Enter name to be displayed: ";
                            cin.ignore();
                            getline(cin,finddata);
                            cout<<endl<<endl;
                            int notfound=0;

                            for(j=0;(j<i)||(!f3.eof())||(!rq5.eof())||(!rq6.eof())||(!rq7.eof())||(!rq8.eof());j++)
                            {
                                getline(f3,gamedata.gname);
                                getline(f7,gamedata.gprice);

                                rq5>>requirements.processor;
                                rq6>>requirements.ram;
                                rq7>>requirements.rom;
                                rq8>>requirements.graphics;

                                if(gamedata.gname==finddata)
                                {
                                    notfound=1;
                                    cout<<"Name: "<<gamedata.gname<<endl;
                                    cout<<"Price: "<<gamedata.gprice<<"  Tk"<<endl;

                                    cout<<"Recommended System Requirements"<<endl;
                                    cout<<"1. Core i5 "<<requirements.processor<<" Ghz."<<endl;
                                    cout<<"2. "<<requirements.ram<<" GB Ram. "<<endl;
                                    cout<<"3. "<<requirements.graphics<<" GB HD Graphics."<<endl;
                                    cout<<"4. "<<requirements.rom<<" GB of free hard disc storage."<<endl;
                                }

                            }
                            if(notfound==0)
                            {
                                cout<<"No Record Found"<<endl;
                            }
                            f3.close();
                            f7.close();

                            rq5.close();
                            rq6.close();
                            rq7.close();
                            rq8.close();

                            cout<<"Press any key two times to proceed...";
                            getch();
                            getch();
                        }


                    case '3':
                        {
                            break;
                        }




                }
                break;


        }
        break;







        case '3'://buy games
            {

                while(1)
                {
                    system("cls");
                    cout<<"Buy Menu"<<endl<<endl;
                    cout<<"1.Buy a game"<<endl;
                    cout<<"2.Jump to main menu"<<endl;
                    cout<<"Enter your choice: "<<endl;
                    cin>>choice;
                    //choice=getch();

                    switch(choice)
                    {
                    case '1':
                        {
                            while(1)
                            {
                                system("cls");

                            ifstream in7("gname.txt",ios::app);
                            ifstream in8("gprice.txt",ios::app);
                            for(int j=0;(j<i)||(!in7.eof())||(!in8.eof());j++)
                            {


                            getline(in7,gamedata.gname);
                            getline(in8,gamedata.gprice);

                            cout<<"Name: "<<gamedata.gname<<endl;
                            cout<<"Price: "<<gamedata.gprice<<" Tk"<<endl;
                            }
                            in7.close();
                            in8.close();


                            cout<<endl<<endl;
                            cout<<"Type the name you want to buy: ";
                            cin.ignore();
                            getline(cin,finddata);
                            ifstream f10("gname.txt",ios::app);
                            ifstream f11("gprice.txt",ios::app);


                            ifstream rq9("processor.txt",ios::app);
                            ifstream rq10("ram.txt",ios::app);
                            ifstream rq11("rom.txt",ios::app);
                            ifstream rq12("graphics.txt",ios::app);


                            cout<<endl;
                            int notfound=0;

                            for(j=0;(j<i)||(!f10.eof())||(!f11.eof());j++)
                            {
                                getline(f10,gamedata.gname);
                                getline(f11,gamedata.gprice);

                                rq9>>requirements.processor;
                                rq10>>requirements.ram;
                                rq11>>requirements.rom;
                                rq12>>requirements.graphics;

                                if(gamedata.gname==finddata)
                                {
                                    stringstream(gamedata.gprice)>>p;

                                    char c;
                                    notfound=1;

                                    cout<<"Name: "<<gamedata.gname<<endl;
                                    cout<<"Price: "<<gamedata.gprice<<"  Tk"<<endl;

                                    cout<<"Recommended System Requirements"<<endl;
                                    cout<<"1. Core i5 "<<requirements.processor<<" Ghz."<<endl;
                                    cout<<"2. "<<requirements.ram<<" GB Ram. "<<endl;
                                    cout<<"3. "<<requirements.graphics<<" GB HD Graphics."<<endl;
                                    cout<<"4. "<<requirements.rom<<" GB of free hard disc storage."<<endl;
                                    cout<<endl;

                                    cout<<"Add to cart ?"<<endl<<"press y/n "<<endl;
                                    cin>>c;
                                  //  c=getch();
                                    if(c=='y')
                                    {
                                            cost=cost+p;
                                            cout<<gamedata.gname<<" added to cart";
                                            cout<<" total spent "<<cost<<" Tk"<<endl;
                                    }
                                    else
                                    {
                                        continue;
                                    }


                                }


                            }
                            if(notfound==0)
                            {
                                cout<<"No Record Found"<<endl;
                            }
                            f10.close();
                            f11.close();

                            rq9.close();
                            rq10.close();
                            rq11.close();
                            rq12.close();

                            char a;
                            cout<<endl;
                            cout<<"if you want to buy another game press y "<<endl<<"if you want to jump to main press n"<<endl;
                            cin>>a;
                            //a=getch();
                            if(a=='n')
                            {
                                break;
                            }


                            }



                        }




                    case '2':
                        {
                            break;
                        }




                    }
                    break;




                }
                break;

            }


        case '4':
            {
                while(1)
                {
                    cout<<"Billing Menu"<<endl<<endl;
                    cout<<"1.Show bill"<<endl;
                    cout<<"2.Jump to main menu"<<endl;
                    cout<<"Enter your choice: "<<endl;
                    //cin>>choice;
                    choice=getch();

                    switch(choice)
                    {
                    case '1':
                        {
                            if(cost==0)
                            {
                                cout<<"You have't bought any games, go back and buy a game"<<endl;
                                Sleep(2000);
                            }
                            else
                            {
                                char c;
                                cout<<"You spent "<<cost<<" Tk"<<endl<<endl;
                                cout<<"if you want to check out press y"<<endl;
                                cout<<"if you want to buy more games press n"<<endl;
                                //cin>>c;
                                c=getch();
                                if(c=='y')
                                {
                                    string name;
                                    cout<<"Enter your name: ";
                                    cin.ignore();
                                    getline(cin,name);


                                    cout<<endl;
                                    system("cls");
                                    cout<<endl<<endl<<endl;
                                    cout<<"\t\t\tThank you "<<name<<" for shopping with us."<<endl<<endl;
                                    cout<<"\t\t\tTotal Bill: "<<cost<<" Tk."<<endl<<endl;
                                    cout<<"\t\t\tPlease pay your bill."<<endl<<endl;
                                    cout<<"\t\t\tEnjoy your new games.."<<endl<<endl;
                                    return 0;

                                }
                                else
                                {
                                    break;
                                }


                            }

                        }
                    case '2':
                        {
                            break;
                        }

                    }
                    break;


                }
                break;



            }



        case '5'://exit
                {

                    cout<<endl<<endl<<endl<<"Thanks for visiting :) .."<<endl<<endl<<endl;
                    return 0;
                    break;
                }
                break;
        default:
            {
                cout<<"error"<<endl;
                break;
            }

    } //1st switch end

}//outer loop end

}
