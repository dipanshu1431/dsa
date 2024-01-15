//**********************************************************
//	PROJECT DELHI METRO CO-ORDINATION SYSTEM
//**********************************************************

//**********************************************************
//	INCLUDED HEADER FILES
//**********************************************************

#include<iostream>
//#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <string.h>
//#include <fstream.h>
#include <process.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

//**********************************************************
//	CLASS NAME : DMRC  MENU
//	DETAILS    : IT CONTROLLS OVER ALL THE FUNCTIONS
//**********************************************************

class menu
{
public:
    void main_menu(void);
    void startup(void);
    void box(void);
    void line_hor(int, int, int, char);
    void line_ver(int, int, int, char);
};

//**********************************************************
//	CLASS NAME : DIARY DMRC
//	DETAILS    : IT CONTROLLS OVER ALL THE FUNCTIONS
//			   RELATED TO DIARY
//**********************************************************

class diary
{
public:
    diary(void);
    ~diary(void);
    void add(void);
    void search(void);
    void modify(void);
    void deletion(void);
    void display_list(void);

private:
    void sort(void);
    void display_record(int);
    int found_record(int);
    void delete_record(int);
    void modify_record(int);
    int recordno(int);
    int last_code(void);
    int code;
    char name[20], phone1[10], phone2[10], address[45];
};

//**********************************************************
//	CLASS NAME    : MENU DMRC
//	FUNCTION NAME : LINE_HOR
//	DETAILS       : IT ACCEPTS THE ROWS AND COLUMNS AND
//				 DRAW THE HORIZONTAL LINE
//**********************************************************

void menu ::line_hor(int column1, int column2, int row, char c)
{
    for (column1; column1 <= column2; column1++)
    {
        gotoxy(column1, row);
          cout << c;
    }
}

//**********************************************************
//	CLASS NAME    : MENU DMRC
//	FUNCTION NAME : LINE_VER
//	DETAILS       : IT ACCEPTS THE ROWS AND COLUMNS AND
//				 DRAW THE VERTICAL LINE
//**********************************************************

void menu ::line_ver(int row1, int row2, int column, char c)
{
    for (row1; row1 <= row2; row1++)
    {
        gotoxy(column, row1);
        cout << c;
    }
}

//**********************************************************
//	CLASS NAME    : MENU FAIR
//	FUNCTION NAME : STARTUP
//	DETAILS       : IT CREATS THE STARTING SCREEN
//**********************************************************

void menu ::startup(void)
{
    clrscr();
    int i, j, s;
    char a[] = "D M R C";
    char b[] = "    M A N A G E M E N T";
    char c[] = "             ->DELHI ";
    char d[] = " METRO<-";
    for (i = 1; i <= 79; i++)
        line_ver(1, 25, i, 179);
    gotoxy(1, 11);
    clreol();
    gotoxy(1, 13);
    clreol();
    j = 63;
    s = 100;
    for (i = 1; i <= 43; i++)
    {
        sound(s);
        s = s + 20;
        delay(50);
        gotoxy(1, 12);
        clreol();
        gotoxy(1, 11);
        clreol();
        gotoxy(i, 12);
        cout << b;
        gotoxy(i, 11);
        cout << d;
        gotoxy(j, 12);
        cout << a;
        gotoxy(j, 11);
        cout << c;
        j--;
        gotoxy(1, 1);
    }
    nosound();
    delay(100);
    char ch = 219;
    s = 500;
    for (i = 1; i <= 79; i++)
    {
        sound(s);
        s = s + 10;
        gotoxy(i, 10);
        cout << ch;
        delay(5);
    }
    nosound();
    delay(200);
    ch = 219;
    s = 1290;
    for (i = 79; i >= 1; i--)
    {
        sound(s);
        s = s - 10;
        gotoxy(i, 14);
        cout << ch;
        delay(5);
    }
    nosound();
    delay(1000);
}

//**********************************************************
//	CLASS NAME    : DMRC CONTROL
//	FUNCTION NAME : BOX
//	DETAILS       : IT CREATES BOX FOR THE MENU
//**********************************************************

void menu ::box(void)
{
    line_hor(2, 39, 1, 219);
    line_hor(2, 39, 24, 219);
    line_ver(1, 24, 2, 219);
    line_ver(1, 24, 39, 219);
}

//**********************************************************
//	CLASS NAME    : DMRC CONTROL
//	FUNCTION NAME : MAIN_MENU
//	DETAILS       : IT CREATS MENU AND CONTROL OTHER
//                   FUNCTIONS
//**********************************************************

void menu ::main_menu(void)
{
    char ch;
    while (1)
    {
        clrscr();
        textmode(C40);
        clrscr();
        box();
        gotoxy(12, 5);
        cout << "DMRC CONTROL SYSTEM";
        gotoxy(12, 6);
        cout << "-------------------";
        gotoxy(12, 10);
        cout << "1: ADD RECORDS";
        gotoxy(12, 11);
        cout << "2: DISPLAY LIST";
        gotoxy(12, 12);
        cout << "3: DELETE RECORD";
        gotoxy(12, 13);
        cout << "4: MODIFY RECORD";
        gotoxy(12, 14);
        cout << "5: SEARCH RECORD";
        gotoxy(12, 15);
        cout << "0: QUIT";
        gotoxy(11, 18);
        cout << "Enter your choice:";
        ch = getch();
        textmode(C80);
        clrscr();
        if (ch == '1')
        {
            diary d;
            d.add();
        }
        else if (ch == '2')
        {
            diary d;
            d.display_list();
        }
        else if (ch == '3')
        {
            diary d;
            d.deletion();
        }
        else if (ch == '4')
        {
            diary d;
            d.modify();
        }
        else if (ch == '5')
        {
            diary d;
            d.search();
        }
        else if (ch == '0')
            exit(0);
    }
}

//**********************************************************
//	CLASS NAME    : DMRC CONTROL
//	FUNCTION NAME : DIARY (CONSTRUCTOR)
//	DETAILS       : IT IS CONSTRUCTOR FUNCTION, GIVING
//                   DEFAULT VALUES
//**********************************************************

diary ::diary(void)
{
    code = 0;
    name[0] = '\0';
    phone1[0] = '\0';
    phone2[0] = '\0';
    address[0] = '\0';
}

//**********************************************************
//	CLASS NAME    : DMRC CONTROL
//	FUNCTION NAME : ~DIARY (DISTRUCTOR)
//	DETAILS       : IT IS DISTRUCTOR FUNCTION
//**********************************************************

diary ::~diary(void)
{
}

//**********************************************************
//	CLASS NAME    : DIARY
//	FUNCTION NAME : DISPLAY_LIST
//	DETAILS       : IT DISPLAYS LIST OF THE PERSON'S
//                   RECORDS
//**********************************************************

void diary ::display_list(void)
{
    clrscr();
    menu m;
    char t_name[20], t1_name[20];
    gotoxy(3, 5);
    cout << "Enter character(s) for selective list";
    gotoxy(3, 6);
    cout << "or press <ENTER> for whole list or `0' for exit : ";
    gets(t_name);
    if (t_name[0] == '0')
        return;
    int len = strlen(t_name);
    clrscr();
    fstream file;
    file.open("TDIARY.DAT", ios::in);
    file.seekg(0, ios::beg);
    int row = 4;
    int found = 0;
    int pageno = 1;
    int flag = 1;
    char ch;
    gotoxy(1, 2);
    cout << " CODE   NO. ";
    m.line_hor(1, 79, 3, 196);
    m.line_hor(1, 79, 24, 196);
    while (file.read((char *)this, sizeof(diary)))
    {
        flag = 1;
        for (int i = 0; i < len; i++)
            t1_name[i] = name[i];
        t1_name[len] = '\0';
        if (strcmpi(t_name, t1_name) == 0)
        {
            delay(20);
            found = 1;
            gotoxy(1, row);
            cout << code;
            gotoxy(7, row);
            puts(name);
            gotoxy(27, row);
            cout << "STATION CODE: " << phone1 << ", " << phone2;
            gotoxy(27, row + 1);
            cout << "ROUTE NO.   : ";
            puts(address);
            if (row == 22)
            {
                flag = 0;
                row = 4;
                gotoxy(66, 1);
                cout << "Page no. : " << pageno;
                pageno++;
                gotoxy(1, 25);
                cout << "Press <ESC> to exit or any other key to continue...";
                ch = getch();
                if (ch == 27)
                    return;
                clrscr();
                gotoxy(1, 2);
                cout << " CODE   NO. ";
                m.line_hor(1, 79, 3, 196);
                m.line_hor(1, 79, 24, 196);
            }
            else
                row = row + 2;
        }
    }
    if (!found)
    {
        sound(500);
        delay(100);
        nosound();
        gotoxy(1, 5);
        cout << "Records not found";
    }
    if (flag)
    {
        gotoxy(66, 1);
        cout << "Page no. : " << pageno;
        gotoxy(1, 25);
        cout << "Press any key to continue...";
        getch();
    }
    file.close();
}

//**********************************************************
//	CLASS NAME    : DMRC CONTROL
//	FUNCTION NAME : DISPLAY_RECORD
//	DETAILS       : IT DISPLAYS SINGLE RECORD FOR THE
//                   GIVEN RECORD
//**********************************************************

void diary ::display_record(int t_code)
{
    fstream file;
    file.open("TDIARY.DAT", ios::in);
    file.seekg(0, ios::beg);
    while (file.read((char *)this, sizeof(diary)))
    {
        if (t_code == code)
        {
            gotoxy(3, 3);
            cout << "Code # " << code;
            gotoxy(3, 5);
            cout << "Train No: ";
            puts(name);
            gotoxy(3, 6);
            cout << "Station : " << phone1;
            gotoxy(3, 7);
            cout << "Route No: " << phone2;
            gotoxy(3, 10);
            cout << "A/D Time: ";
            puts(address);
            break;
        }
    }
    file.close();
}

/**********************************************************
    CLASS NAME    : DMRC CONTROL
    FUNCTION NAME : LAST_CODE
    DETAILS       : IT COUNTS THE RECORD IN THE FILE AND
            RETURN THE LAST CODE NO.
**********************************************************/

int diary ::last_code()
{
    fstream file;
    file.open("TDIARY.DAT", ios::in);
    file.seekg(0, ios::beg);
    int t = 0;
    while (file.read((char *)this, sizeof(diary)))
        t++;
    file.close();
    return t;
}

//**********************************************************
//	CLASS NAME    : DMRC CONTROL
//	FUNCTION NAME : FOUND_RECORD
//	DETAILS       : IT RETURNS THAT RECORD IS FOUND FOR
//                   THE GIVEN CODE NO. OR NOT
//**********************************************************

int diary ::found_record(int t_code)
{
    fstream file;
    file.open("TDIARY.DAT", ios::in);
    file.seekg(0, ios::beg);
    int found = 0;
    while (file.read((char *)this, sizeof(diary)))
    {
        if (t_code == code)
        {
            found++;
            break;
        }
    }
    file.close();
    return found;
}

//**********************************************************
//	CLASS NAME    : DMRC CONTROL
//	FUNCTION NAME : ADD
//	DETAILS       : IT ADDS THE RECORDS IN THE DIARY'S
//                   FILE (TDIARY.DAT)
//**********************************************************

void diary ::add(void)
{
    menu m;
    int valid, saved = 0;
    int t_code;
    t_code = last_code();
    t_code++;
    if (t_code == 1)
    {
        code = t_code;
        strcpy(name, "abc");
        strcpy(phone1, "-");
        strcpy(phone2, "-");
        strcpy(address, "xyz");
        fstream file;
        file.open("TDIARY.DAT", ios::out | ios::app);
        file.write((char *)this, sizeof(diary));
        file.close();
        delete_record(t_code);
    }
    char ch;
    do
    {
        clrscr();
        gotoxy(3, 3);
        cout << "Code # " << t_code;
        gotoxy(3, 5);
        cout << "Train No: ";
        gotoxy(3, 6);
        cout << "Station : ";
        gotoxy(3, 7);
        cout << "Route No: ";
        gotoxy(3, 8);
        cout << "A/D Time: ";
        m.line_hor(1, 79, 23, 196);
        do
        {
            valid = 1;
            gotoxy(1, 25);
            clreol();
            gotoxy(3, 25);
            cout << "ENTER TRAIN NO.";
            gotoxy(13, 5);
            gets(name);
            strupr(name);
            if (strlen(name) > 19 || strlen(name) == 0)
            {
                valid = 0;
                sound(500);
                delay(100);
                nosound();
                gotoxy(1, 25);
                clreol();
                gotoxy(1, 24);
                cout << "LENGTH SHOULD NOT BLANK OR GREATER THAN 19";
                gotoxy(1, 25);
                cout << "Press any key to continue...";
                getch();
                gotoxy(1, 24);
                clreol();
                gotoxy(1, 25);
                clreol();
                gotoxy(13, 5);
                clreol();
            }
        } while (!valid);
        do
        {
            valid = 1;
            gotoxy(1, 25);
            clreol();
            gotoxy(3, 25);
            cout << "ENTER THE STATION CODE OF THE STATION, <ENTER> FOR BLANK";
            gotoxy(13, 6);
            gets(phone1);
            if ((strlen(phone1) < 7 && strlen(phone1) > 0) || (strlen(phone1) > 9))
            {
                valid = 0;
                sound(500);
                delay(100);
                nosound();
                gotoxy(1, 25);
                clreol();
                gotoxy(1, 24);
                cout << "LENGTH SHOULD NOT GREATER THAN 9 OR LESS THAN 7";
                gotoxy(1, 25);
                cout << "Press any key to continue...";
                getch();
                gotoxy(1, 24);
                clreol();
                gotoxy(1, 25);
                clreol();
                gotoxy(13, 6);
                clreol();
            }
        } while (!valid);
        if (strlen(phone1) == 0)
            strcpy(phone1, "-");
        do
        {
            valid = 1;
            gotoxy(1, 25);
            clreol();
            gotoxy(3, 25);
            cout << "ENTER THE ROUTE NO. OF THE DMRC, <ENTER> FOR BLANK";
            gotoxy(13, 7);
            gets(phone2);
            if ((strlen(phone2) < 7 && strlen(phone2) > 0) || (strlen(phone2) > 9))
            {
                valid = 0;
                sound(500);
                delay(100);
                nosound();
                gotoxy(1, 25);
                clreol();
                gotoxy(1, 24);
                cout << "LENGTH SHOULD NOT GREATER THAN 9 OR LESS THAN 7";
                gotoxy(1, 25);
                cout << "Press any key to continue...";
                getch();
                gotoxy(1, 24);
                clreol();
                gotoxy(1, 25);
                clreol();
                gotoxy(13, 7);
                clreol();
            }
        } while (!valid);
        if (strlen(phone2) == 0)
            strcpy(phone2, "-");

        do
        {
            valid = 1;
            gotoxy(1, 25);
            clreol();
            gotoxy(3, 25);
            cout << "ENTER ARIVAL TIME & DEP. TIME OF THE TRAIN LIKE A-7:00 PM, D-5:00 PM";
            gotoxy(13, 8);
            gets(address);
            strupr(address);
            if (strlen(address) > 43 || strlen(address) == 0)
            {
                valid = 0;
                sound(500);
                delay(100);
                nosound();
                gotoxy(1, 25);
                clreol();
                gotoxy(1, 24);
                cout << "SHOULD NOT BLANK OR GREATER THAN 48";
                gotoxy(1, 25);
                cout << "Press any key to continue...";
                getch();
                gotoxy(1, 24);
                clreol();
                gotoxy(1, 25);
                clreol();
                gotoxy(13, 10);
                clreol();
            }
        } while (!valid);
        gotoxy(1, 25);
        clreol();
        gotoxy(1, 23);
        clreol();
        gotoxy(1, 13);
        cout << "Do you want to save the record (y/n)  : ";
        do
        {
            valid = 1;
            gotoxy(41, 13);
            ch = getche();
            ch = toupper(ch);
            if (ch != 'Y' && ch != 'N')
            {
                valid = 0;
                sound(500);
                delay(100);
                nosound();
                gotoxy(41, 13);
                clreol();
            }
        } while (!valid);
        if (ch == 'Y')
        {
            saved = 1;
            code = t_code;
            fstream file;
            file.open("TDIARY.DAT", ios::out | ios::app);
            file.write((char *)this, sizeof(diary));
            file.close();
            t_code++;
        }
        gotoxy(1, 14);
        cout << "Do you want to add more records (y/n) : ";
        do
        {
            valid = 1;
            gotoxy(41, 14);
            ch = getche();
            ch = toupper(ch);
            if (ch != 'Y' && ch != 'N')
            {
                valid = 0;
                sound(500);
                delay(100);
                nosound();
                gotoxy(41, 14);
                clreol();
            }
        } while (!valid);
    } while (ch == 'Y');
    if (saved)
        sort();
}

//**********************************************************
//	CLASS NAME    : DMRC CONTROL
//	FUNCTION NAME : DELETE_RECORD
//	DETAILS       : IT DELETES THE RECORD IN THE DIARY'S
//                   FILE (TDIARY.DAT) FOR THE GIVEN CODE
//**********************************************************

void diary ::delete_record(int t_code)
{
    fstream file;
    file.open("TDIARY.DAT", ios::in);
    fstream temp;
    temp.open("temp.dat", ios::out);
    file.seekg(0, ios::beg);
    while (!file.eof())
    {
        file.read((char *)this, sizeof(diary));
        if (file.eof())
            break;
        if (code != t_code)
            temp.write((char *)this, sizeof(diary));
    }
    file.close();
    temp.close();
    file.open("TDIARY.DAT", ios::out);
    temp.open("temp.dat", ios::in);
    temp.seekg(0, ios::beg);
    t_code = 1;
    while (!temp.eof())
    {
        temp.read((char *)this, sizeof(diary));
        code = t_code;
        if (temp.eof())
            break;
        file.write((char *)this, sizeof(diary));
        t_code++;
    }
    file.close();
    temp.close();
}

//**********************************************************
//	CLASS NAME    : DMRC
//	FUNCTION NAME : DELETION
//	DETAILS       : IT GIVES THE CODE NO. TO DELETE THE
//                   RECORD IN DIARY'S FILE (TDIARY.DAT)
//**********************************************************

void diary ::deletion(void)
{
    menu m;
    clrscr();
    int valid;
    int t_code = 0, t;
    char t1_code[5], t2_code[5];
    char ch;
    gotoxy(3, 3);
    cout << "Enter Code no. of the record to be deleted ";
    gotoxy(3, 4);
    cout << "or Press <ENTER> to see from the list or `0' to exit : ";
    gets(t1_code);
    t = atoi(t1_code);
    t_code = t;
    if (t1_code[0] == '0')
        return;
    if (t1_code[0] != '\0')
    {
        clrscr();
        if (!found_record(t_code))
        {
            sound(500);
            delay(100);
            nosound();
            gotoxy(3, 15);
            cout << "Record not found";
            m.line_hor(1, 79, 24, 196);
            gotoxy(1, 25);
            cout << "Press any key to continue...";
            getch();
            return;
        }
        display_record(t_code);
        gotoxy(3, 12);
        cout << "Do you want to delete this Record (y/n) : ";
        do
        {
            valid = 1;
            gotoxy(45, 12);
            ch = getche();
            ch = toupper(ch);
            if (ch != 'Y' && ch != 'N')
            {
                valid = 0;
                sound(500);
                delay(100);
                nosound();
                gotoxy(45, 12);
                clreol();
            }
        } while (!valid);
        if (ch == 'N')
            return;
        gotoxy(1, 25);
        cout << "Wait...";
        delete_record(t_code);
        clrscr();
        gotoxy(1, 14);
        cout << "Record Deleted\n";
        m.line_hor(1, 79, 24, 196);
        gotoxy(1, 25);
        cout << "Press any key to continue...";
        getch();
        return;
    }
    display_list();
    gotoxy(1, 25);
    clreol();
    gotoxy(3, 25);
    cout << "Enter Code no. of the record or <ENTER> to exit ";
    gets(t2_code);
    t = atoi(t2_code);
    t_code = t;
    if (t2_code[0] == '\0')
        return;
    clrscr();
    if (!found_record(t_code))
    {
        sound(500);
        delay(100);
        nosound();
        gotoxy(3, 15);
        cout << "Record not found";
        m.line_hor(1, 79, 24, 196);
        gotoxy(1, 25);
        cout << "Press any key to continue...";
        getch();
        return;
    }
    display_record(t_code);
    gotoxy(3, 12);
    cout << "Do you want to delete this Record (y/n) : ";
    do
    {
        valid = 1;
        gotoxy(45, 12);
        ch = getche();
        ch = toupper(ch);
        if (ch != 'Y' && ch != 'N')
        {
            valid = 0;
            sound(500);
            delay(100);
            nosound();
            gotoxy(45, 12);
            clreol();
        }
    } while (!valid);
    if (ch == 'N')
        return;
    gotoxy(1, 25);
    cout << "Wait...";
    delete_record(t_code);
    clrscr();
    sound(500);
    delay(100);
    nosound();
    gotoxy(3, 14);
    cout << "Record Deleted";
    m.line_hor(1, 79, 24, 196);
    gotoxy(1, 25);
    cout << "Press any key to continue....";
    getch();
}

//**********************************************************
//	CLASS NAME    : DMRC
//	FUNCTION NAME : MODIFY_RECORD
//	DETAILS       : IT MODIFIES THE RECORD IN THE DIARY'S
//                   FILE (TDIARY.DAT) FOR THE GIVEN CODE
//**********************************************************

void diary ::modify_record(int t_code)
{
    menu m;
    int valid, modified = 0;
    char ch;
    m.line_hor(1, 79, 12, 196);
    gotoxy(3, 14);
    cout << "Code # " << t_code;
    gotoxy(3, 16);
    cout << "Train No. : ";
    gotoxy(3, 17);
    cout << "Staion Cd : ";
    gotoxy(3, 18);
    cout << "Route No. : ";
    gotoxy(3, 19);
    cout << "A/D Time  : ";
    gotoxy(1, 25);
    clreol();
    m.line_hor(1, 79, 23, 196);
    gotoxy(13, 16);
    cout << "Change (y/n) : ";
    do
    {
        valid = 1;
        gotoxy(28, 16);
        ch = getche();
        ch = toupper(ch);
        if (ch != 'Y' && ch != 'N')
        {
            valid = 0;
            sound(500);
            delay(100);
            nosound();
            gotoxy(28, 16);
            clreol();
        }
    } while (!valid);
    valid = 0;
    while (!valid && ch == 'Y')
    {
        modified = 1;
        valid = 1;
        gotoxy(13, 16);
        clreol();
        gotoxy(3, 25);
        cout << "ENTER TRAIN NO. OF THE DMRC";
        gotoxy(13, 16);
        gets(name);
        strupr(name);
        if (strlen(name) > 19 || strlen(name) == 0)
        {
            valid = 0;
            sound(500);
            delay(100);
            nosound();
            gotoxy(1, 25);
            clreol();
            gotoxy(1, 24);
            cout << "LENGTH SHOULD NOT BLANK OR GREATER THAN 19";
            gotoxy(1, 25);
            cout << "Press any key to continue...";
            getch();
            gotoxy(1, 24);
            clreol();
            gotoxy(1, 25);
            clreol();
            gotoxy(13, 16);
            clreol();
        }
    }
    gotoxy(1, 25);
    clreol();
    gotoxy(13, 17);
    cout << "Change (y/n) : ";
    do
    {
        valid = 1;
        gotoxy(28, 17);
        ch = getche();
        ch = toupper(ch);
        if (ch != 'Y' && ch != 'N')
        {
            valid = 0;
            sound(500);
            delay(100);
            nosound();
            gotoxy(28, 17);
            clreol();
        }
    } while (!valid);
    valid = 0;
    while (!valid && ch == 'Y')
    {
        modified = 1;
        valid = 1;
        gotoxy(13, 17);
        clreol();
        gotoxy(3, 25);
        cout << "ENTER THE STATION NO. OF THE STATION, <ENTER> FOR BLANK";
        gotoxy(13, 17);
        gets(phone1);
        if ((strlen(phone1) < 7 && strlen(phone1) > 0) || (strlen(phone1) > 9))
        {
            valid = 0;
            sound(500);
            delay(100);
            nosound();
            gotoxy(1, 25);
            clreol();
            gotoxy(1, 24);
            cout << "LENGTH SHOULD NOT GREATER THAN 9 OR LESS THAN 7";
            gotoxy(1, 25);
            cout << "Press any key to continue...";
            getch();
            gotoxy(1, 24);
            clreol();
            gotoxy(1, 25);
            clreol();
            gotoxy(13, 17);
            clreol();
        }
        if (strlen(phone1) == 0)
            strcpy(phone1, "-");
    }
    gotoxy(1, 25);
    clreol();
    gotoxy(13, 18);
    cout << "Change (y/n) : ";
    do
    {
        valid = 1;
        gotoxy(28, 18);
        ch = getche();
        ch = toupper(ch);
        if (ch != 'Y' && ch != 'N')
        {
            valid = 0;
            sound(500);
            delay(100);
            nosound();
            gotoxy(28, 18);
            clreol();
        }
    } while (!valid);
    valid = 0;
    while (!valid && ch == 'Y')
    {
        modified = 1;
        valid = 1;
        gotoxy(13, 18);
        clreol();
        gotoxy(3, 25);
        cout << "ENTER THE ROUTE NO. OF THE ROUTE, <ENTER> FOR BLANK";
        gotoxy(13, 18);
        gets(phone2);
        if ((strlen(phone2) < 7 && strlen(phone2) > 0) || (strlen(phone2) > 9))
        {
            valid = 0;
            sound(500);
            delay(100);
            nosound();
            gotoxy(1, 25);
            clreol();
            gotoxy(1, 24);
            cout << "LENGTH SHOULD NOT GREATER THAN 9 OR LESS THAN 7";
            gotoxy(1, 25);
            cout << "Press any key to continue...";
            getch();
            gotoxy(1, 24);
            clreol();
            gotoxy(1, 25);
            clreol();
            gotoxy(13, 18);
            clreol();
        }
        if (strlen(phone2) == 0)
            strcpy(phone2, "-");
    }
    gotoxy(1, 25);
    clreol();
    gotoxy(13, 19);
    cout << "Change (y/n) : ";
    do
    {
        valid = 1;
        gotoxy(28, 19);
        ch = getche();
        ch = toupper(ch);
        if (ch != 'Y' && ch != 'N')
        {
            valid = 0;
            sound(500);
            delay(100);
            nosound();
            gotoxy(28, 19);
            clreol();
        }
    } while (!valid);
    valid = 0;

    while (!valid && ch == 'Y')
    {
        modified = 1;
        valid = 1;
        gotoxy(13, 19);
        clreol();
        gotoxy(3, 25);
        cout << "ENTER ARIVAL/DEP. TIME OF THE TRAIN";
        gotoxy(13, 19);
        gets(address);
        strupr(address);
        if (strlen(address) > 43 || strlen(address) == 0)
        {
            valid = 0;
            sound(500);
            delay(100);
            nosound();
            gotoxy(1, 25);
            clreol();
            gotoxy(1, 24);
            cout << "SHOULD NOT BLANK OR GREATER THAN 48";
            gotoxy(1, 25);
            cout << "Press any key to continue...";
            getch();
            gotoxy(1, 24);
            clreol();
            gotoxy(1, 25);
            clreol();
            gotoxy(13, 21);
            clreol();
        }
    }
    if (!modified)
        return;
    gotoxy(1, 25);
    clreol();
    gotoxy(1, 23);
    clreol();
    gotoxy(1, 23);
    cout << "Do you want to save the record (y/n)  : ";
    do
    {
        valid = 1;
        gotoxy(41, 23);
        ch = getche();
        ch = toupper(ch);
        if (ch != 'Y' && ch != 'N')
        {
            valid = 0;
            sound(500);
            delay(100);
            nosound();
            gotoxy(41, 23);
            clreol();
        }
    } while (!valid);
    if (ch == 'N')
        return;
    fstream file;
    file.open("TDIARY.DAT", ios::out | ios::ate);
    int recno;
    recno = t_code;
    int location;
    location = (recno - 1) * sizeof(diary);
    file.seekp(location);
    file.write((char *)this, sizeof(diary));
    file.close();
    sort();
    clrscr();
    sound(500);
    delay(100);
    nosound();
    gotoxy(1, 14);
    cout << "Record Modified";
    m.line_hor(1, 79, 24, 196);
    gotoxy(1, 25);
    cout << "Press any key to continue...";
    getch();
}

//**********************************************************
//	CLASS NAME    : DMRC CONTROL
//	FUNCTION NAME : MODIFY
//	DETAILS       : IT GIVES THE CODE NO. TO MODIFY THE
//                   RECORD IN DIARY'S FILE (TDIARY.DAT)
//**********************************************************

void diary ::modify(void)
{
    menu m;
    clrscr();
    int valid;
    int t_code = 0, t;
    char t1_code[5], t2_code[5];
    char ch;
    gotoxy(3, 3);
    cout << "Enter Code no. of the record to be modify ";
    gotoxy(3, 4);
    cout << "or Press <ENTER> to see from the list or `0' to exit : ";
    gets(t1_code);
    t = atoi(t1_code);
    t_code = t;
    if (t1_code[0] == '0')
        return;
    if (t1_code[0] != '\0')
    {
        clrscr();
        if (!found_record(t_code))
        {
            sound(500);
            delay(100);
            nosound();
            gotoxy(3, 15);
            cout << "Record not found";
            m.line_hor(1, 79, 24, 196);
            gotoxy(1, 25);
            cout << "Press any key to continue...";
            getch();
            return;
        }
        display_record(t_code);
        gotoxy(3, 12);
        cout << "Do you want to modify this Record (y/n) : ";
        do
        {
            valid = 1;
            gotoxy(45, 12);
            ch = getche();
            ch = toupper(ch);
            if (ch != 'Y' && ch != 'N')
            {
                valid = 0;
                sound(500);
                delay(100);
                nosound();
                gotoxy(45, 12);
                clreol();
            }
        } while (!valid);
        if (ch == 'N')
            return;
        modify_record(t_code);
        return;
    }
    display_list();
    gotoxy(1, 25);
    clreol();
    gotoxy(3, 25);
    cout << "Enter Code no. of the record or <ENTER> to exit ";
    gets(t2_code);
    t = atoi(t2_code);
    t_code = t;
    if (t2_code[0] == '\0')
        return;
    clrscr();
    if (!found_record(t_code))
    {
        sound(500);
        delay(100);
        nosound();
        gotoxy(3, 15);
        cout << "Record not found";
        m.line_hor(1, 79, 24, 196);
        gotoxy(1, 25);
        cout << "Press any key to continue...";
        getch();
        return;
    }
    display_record(t_code);
    gotoxy(3, 12);
    cout << "Do you want to modify this Record (y/n) : ";
    do
    {
        valid = 1;
        gotoxy(45, 12);
        ch = getche();
        ch = toupper(ch);
        if (ch != 'Y' && ch != 'N')
        {
            valid = 0;
            sound(500);
            delay(100);
            nosound();
            gotoxy(45, 12);
            clreol();
        }
    } while (!valid);
    if (ch == 'N')
        return;
    modify_record(t_code);
}

//**********************************************************
//	CLASS NAME    : DMRC
//	FUNCTION NAME : SORT
//	DETAILS       : IT SORTS THE RECORD IN THE DIARY'S
//                   FILE (TDIARY.DAT)
//**********************************************************

void diary ::sort(void)
{
    int i = 0, j;
    diary arr[100];
    diary temp;
    fstream file;
    file.open("TDIARY.DAT", ios::in);
    file.seekg(0, ios::beg);
    while (file.read((char *)&arr[i], sizeof(diary)))
        i++;
    int size;
    size = i;
    file.close();
    for (i = 1; i < size; i++)
        for (j = 0; j < size - i; j++)
        {
            if (strcmp(arr[j].name, arr[j + 1].name) > 0)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    int t_code = 1;
    for (i = 0; i < size; i++)
    {
        arr[i].code = t_code;
        t_code++;
    }
    file.open("TDIARY.DAT", ios::out);
    for (i = 0; i < size; i++)
        file.write((char *)&arr[i], sizeof(diary));
    file.close();
}

//**********************************************************
//	CLASS NAME    : DMRC
//	FUNCTION NAME : SEARCH
//	DETAILS       : IT SEARCHES A RECORD IN THE DIARY'S
//                      FILE (TDIARY.DAT)
//**********************************************************

void diary ::search(void)
{
    int i = 0, j = 0;
    diary arr[100];
    diary temp;
    fstream file;
    file.open("TDIARY.DAT", ios::in);

    char n[30];
    int eof;
    file.seekg(0, ios::end);
    eof = file.tellg();
    file.seekg(0, ios::beg);
    cout << "Enter The Name to search";
    gets(n);
    strupr(n);
    delay(1000);
    do
    {
        file.read((char *)&arr[i], sizeof(diary));
        i++;

        if (strcmp(arr[i - 1].name, n) == 0)
        {
            j = i;
        }
    } while (file.tellg() != eof);
    file.close();
    display_record(j);

    delay(2000);
}
//**********************************************************
//	FUNCTION NAME : MAIN DMRC
//	DETAILS       : IT CALLS THE STARTUP FUNCTION AND
//                   MENU FUNCTION.
//**********************************************************

void main(void)
{
    menu m;
    m.startup();
    m.main_menu();
}
