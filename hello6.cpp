#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <unistd.h>
using namespace std;
float trent = 0;
int tcar = 0;
char first_name[20];
char last_name[20];
char contact[10];
int days;

class car
{
public:
    int n;
    char ch;

    static int cfigo, critz, cbrio, cfortuner, cscorpio, cinnova, cindigo, cethios, cverna;

    void cust_details()
    {
        if (trent == 0)
        {
            cout << "\t-------------------------------------------------------------------------------------\n";
            cout << "\tPlease provide cumstomer details\n\n";
            sleep(5);
            cout << "\tEnter first name : ";
            cin >> first_name;
            cout << "\n";
            cout << "\tEnter last name : ";
            cin >> last_name;
            cout << "\n";
            cout << "\tEnter contact no. : ";
            cin >> contact;
            cout << "\t-------------------------------------------------------------------------------------\n";
            cout << "\n";
        }
    }

};
int car::cfigo = 1;
int car::critz = 2;
int car::cbrio = 3;
int car::cfortuner = 3;
int car::cscorpio = 2;
int car::cinnova = 4;
int car::cindigo = 2;
int car::cethios = 1;
int car::cverna = 3;

class hatchback : public car
{
public:
    void get_data()
    {
        cout << "\t\t\t\t\t FORD FIGO \t\tRITZ \t\t BRIO" << endl;
        cout << "\t\t\t MODEL NO. \t 5687 \t\t\t7980 \t\t 3434" << endl;
        cout << "\t\t\t MILEAGE \t 12 \t\t\t11 \t\t 14" << endl;
        cout << "\t\t\t COLOR \t\t RED \t\t\tBLUE \t\t VIOLET" << endl;
        cout << "\t\t\t COST \t\t 1000/day \t\t1500/day \t 1800/day" << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
    }
    void display()
    {
        cout << "\t--------------------------DETAILS OF HATCHBACK CARS--------------------------\n\n";
    }
    void buy_car()
    {
        cout << "\tDo you want to rent a Hatchback car? If yes press 'Y' or press 'N' : ";
        cin >> ch;
        if (ch == 'N' || ch == 'n')
        {
            return;
        }
        else
        {
            cout << "\n";
            cust_details();
            cout << "\tEnter \n\t1.To rent Ford Figo\n\t2.To rent Ritz \n\t3.To rent Brio \n\t";
            cin >> n;
            cout << "\tEnter the number of days : ";
            cin >> days;
            cout << "\n";
            switch (n)
            {
            case 1:
                if (cfigo == 0)
                {
                    cout << "\tSorry no cars available in this category, Pick another car\n";
                }
                else
                {
                    tcar = 1;
                    cout << "\tTotal amount = " << 1000 * days << endl
                         << endl;
                    trent += 1000 * days;
                    cfigo--;
                }
                break;
            case 2:
                if (critz == 0)
                {
                    cout << "\tSorry no cars available in this category, Pick another car\n";
                }
                else
                {
                    tcar = 2;
                    cout << "\tTotal amount = " << 1500 * days << endl
                         << endl;
                    trent += 1500 * days;
                    critz--;
                }
                break;
            case 3:
                if (cbrio == 0)
                {
                    cout << "\tSorry no cars available in this category, Pick another car\n";
                }
                else
                {
                    tcar = 3;
                    cout << "\tTotal amount = " << 1800 * days << endl
                         << endl;
                    trent += 1800 * days;
                    cbrio--;
                }
                break;
            default:
                cout << "\tEnter a valid input \n";
                break;
            }
        }
    }
};

class SUV : public car
{
public:
    void get_data()
    {
        cout << "\t\t\t\t\t FORTUNER \t\tINNOVA \t\t SCORPIO" << endl;
        cout << "\t\t\t MODEL NO. \t 5684 \t\t\t7970 \t\t 3474" << endl;
        cout << "\t\t\t MILEAGE \t 12 \t\t\t11 \t\t 14" << endl;
        cout << "\t\t\t COLOR \t\t RED \t\t\tBLUE \t\t VIOLET" << endl;
        cout << "\t\t\t COST \t\t 1500/day \t\t2000/day \t 2500/day" << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
    }
    void display()
    {
        cout << "\t--------------------------DETAILS OF HATCHBACK CARS--------------------------\n\n";
    }
    void buy_car()
    {
        cout << "\tDo you want to rent a SUV car? If yes press 'Y' or press 'N' : ";
        cin >> ch;
        if (ch == 'N' || ch == 'n')
        {
            return;
        }
        else
        {
            cout << "\n";
            cust_details();
            cout << "\t-------------------------------------------------------------------------------------\n";
            cout << "\tEnter \n\t1.To rent Fortuner\n\t2.To rent Innova \n\t3.To rent Scorpio \n\t";
            cin >> n;
            cout << "\tEnter the number of days : ";
            cin >> days;
            cout << "\n";
            switch (n)
            {
            case 1:
                if (cfortuner == 0)
                {
                    cout << "\tSorry no cars available in this category, Pick another car\n";
                }
                else
                {
                    tcar = 7;
                    cout << "\tTotal amount = " << 4800 * days << endl
                         << endl;
                    ;
                    trent += 4800 * days;
                    cfortuner--;
                    cout << "\t-------------------------------------------------------------------------------------\n";
                }
                break;
            case 2:
                if (cinnova == 0)
                {
                    cout << "\tSorry no cars available in this category, Pick another car\n";
                }
                else
                {
                    tcar = 8;
                    cout << "\tTotal amount = " << 4500 * days << endl
                         << endl;
                    trent += 4500 * days;
                    cinnova--;
                    cout << "\t-------------------------------------------------------------------------------------\n";
                }
                break;
            case 3:
                if (cscorpio == 0)
                {
                    cout << "\tSorry no cars available in this category, Pick another car\n";
                }
                else
                {
                    tcar = 9;
                    cout << "\tTotal amount = " << 4000 * days << endl
                         << endl;
                    trent += 4000 * days;
                    cscorpio--;
                    cout << "\t-------------------------------------------------------------------------------------\n";
                }
                break;
            default:
                cout << "\tEnter a valid input \n";
                cout << "\t-------------------------------------------------------------------------------------\n";
                break;
            }
        }
    }
};
class Sedan : public car
{
public:
    void get_data()
    {
        cout << "\t\t\t\t\t INDIGO \t\tETHIOS \t\t VERNA" << endl;
        cout << "\t\t\t MODEL NO. \t 5687 \t\t\t7570 \t\t 3574" << endl;
        cout << "\t\t\t MILEAGE \t 15 \t\t\t12 \t\t 11" << endl;
        cout << "\t\t\t COLOR \t\t RED \t\t\tBLUE \t\t PINK" << endl;
        cout << "\t\t\t COST \t\t 1000/day \t\t1500/day \t 1800/day" << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
    }
    void display()
    {
        cout << "\t--------------------------DETAILS OF HATCHBACK CARS--------------------------\n\n";
    }
    void buy_car()
    {

        cout << "\tDo you wanna rent a Sedan car? If yes press 'Y' or press 'N' : ";
        cin >> ch;
        if (ch == 'N' || ch == 'n')
        {
            return;
        }
        else
        {
            cout << "\n";
            cust_details();
            cout << "\t-------------------------------------------------------------------------------------\n";
            cout << "\tEnter \n\t1.To rent Indigo\n\t2.To rent Ethios \n\t3.To rent Verna \n\t";
            cin >> n;
            cout << "\tEnter the number of days : ";
            cin >> days;
            cout << "\n";
            switch (n)
            {
            case 1:
                if (cindigo == 0)
                {
                    cout << "\tSorry no cars available in this category, Pick another car\n";
                }
                else
                {
                    tcar = 4;
                    cout << "\tTotal amount = " << 3000 * days << endl
                         << endl;
                    trent += 3000 * days;
                    cindigo--;
                    cout << "\t-------------------------------------------------------------------------------------\n";
                }
                break;
            case 2:
                if (cethios == 0)
                {
                    cout << "\tSorry no cars available in this category, Pick another car\n";
                }
                else
                {
                    tcar = 5;
                    cout << "\tTotal amount = " << 3500 * days << endl
                         << endl;
                    trent += 3500 * days;
                    cethios--;
                    cout << "\t-------------------------------------------------------------------------------------\n";
                }
                break;
            case 3:
                if (cverna == 0)
                {
                    cout << "\tSorry no cars available in this category, Pick another car\n";
                }
                else
                {
                    tcar = 6;
                    cout << "\tTotal amount = " << 3800 * days << endl
                         << endl;
                    trent += 3800 * days;
                    cverna--;
                    cout << "\t-------------------------------------------------------------------------------------\n";
                }
                break;
            default:
                cout << "\tEnter a valid input \n";
                cout << "\t-------------------------------------------------------------------------------------\n";
                break;
            }
        }
    }
};

class rent : virtual public hatchback, virtual public Sedan, virtual public SUV
{
public:
    int m;
    void display()
    {

        cout << "\tPlease enter the kind of car u wamt \n";
        cout << "\t1.Hatchback \n\t2.Sedan \n\t3.SUV\n\t";
        cin >> m;

        switch (m)
        {
        case 1:
            hatchback::display();
            hatchback::get_data();
            hatchback::buy_car();
            break;
        case 2:
            Sedan::display();
            Sedan::get_data();
            Sedan::buy_car();
            break;
        case 3:
            SUV::display();
            SUV::get_data();
            SUV::buy_car();
            break;
        }
    }
};
int main()
{
    
    char ch;
    rent r;

    cout << "\t-------------------------------WELCOME TO DriveOut RENTALS-----------------------------\n";
    r.display();

    ofstream file;
    file.open("Customer_details.txt");
    file << "\n\n\t*********** DriveOut Rentals ***********\n";
    file << "\t               RECEIPT                                    \n\n";
    file << "\t CUSTOMER DETAILS: \n\n";
    file << "\t CUSTOMER NAME : " << first_name << "  " << last_name << endl
         << endl;
    file << "\t CONTACT : " << contact << endl
         << endl;
    file << "\t____________________________\n\n";
    file << left << setw(20) << "\t TYPE OF CAR ";
    file << left << setw(20) << " DAYS ";
    file << left << setw(20) << " COST ";
    file << left << setw(17) << " TOTAL  \n";
    file << "____________________________\n\n\t";

    for (;;)
    {

        do
        {
            cout << "\n";

            if (tcar == 1)
            {
                file << left << setw(20) << " FORD FIGO :";
                file << left << setw(20) << days;
                file << left << setw(20) << "Rs.1000";
                file << left << setw(20) << 1000 * days << "\n\t";
            }

            if (tcar == 2)
            {
                file << left << setw(20) << " RITZ :";
                file << left << setw(20) << days;
                file << left << setw(20) << "Rs.1500";
                file << left << setw(20) << 1500 * days << "\n\t";
            }

            if (tcar == 3)
            {
                file << left << setw(20) << " BRIO :";
                file << left << setw(20) << days;
                file << left << setw(20) << "Rs.1800";
                file << left << setw(20) << 1800 * days << "\n\t";
            }
            if (tcar == 4)
            {
                file << left << setw(20) << " INDIGO :";
                file << left << setw(20) << days;
                file << left << setw(20) << "Rs.3000";
                file << left << setw(20) << 3000 * days << "\n\t";
            }
            if (tcar == 5)
            {
                file << left << setw(20) << " ETHIOS :";
                file << left << setw(20) << days;
                file << left << setw(20) << "Rs.3500";
                file << left << setw(20) << 3500 * days << "\n\t";
            }
            if (tcar == 6)
            {
                file << left << setw(20) << " VERNA :";
                file << left << setw(20) << days;
                file << left << setw(20) << "Rs.3800";
                file << left << setw(20) << 3800 * days << "\n\t";
            }
            if (tcar == 7)
            {
                file << left << setw(20) << " FORTUNER :";
                file << left << setw(20) << days;
                file << left << setw(20) << "Rs.4800";
                file << left << setw(20) << 4800 * days << "\n\t";
            }
            if (tcar == 8)
            {
                file << left << setw(20) << " INNOVA :";
                file << left << setw(20) << days;
                file << left << setw(20) << "Rs.4500";
                file << left << setw(20) << 4500 * days << "\n\t";
            }
            if (tcar == 9)
            {
                file << left << setw(20) << " SCORPIO :";
                file << left << setw(20) << days;
                file << left << setw(20) << "Rs.4000";
                file << left << setw(20) << 4000 * days << "\n\t";
            }

            cout << "\tDo you want to rent another car? If yes press 'Y' or press 'N' : ";
            cin >> ch;
            if (ch == 'n' || ch == 'N')
                break;

            r.display();
        } while (ch == 'y' || ch == 'Y');
        file.close();

        string linesread;
        ifstream infile("Customer_details.txt");
        if (infile.is_open())
        {
            while (getline(infile, linesread))
            {
                cout << linesread << endl;
            }
            infile.close();
        }
        else
            cout << "File cannot be read";
        cout << "\tThank You for visiting\n";
        cout << "\tTOTAL RENT : " << trent << endl;
        exit(0);
    }
    return 0;
}
