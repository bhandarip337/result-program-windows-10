#include <stdio.h>
#include <conio.h> 
#include <windows.h>
#include "result.h"
#include "drawing.h"

void banner()
{
    textcolor(RED);
    box_double_line(0,0,119,29);
	box_block(27,1,55,13);
	gotoxy(30,2);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
	gotoxy(30,3);printf("\xB1 ######  #######  #####  #     # #     ####### \xB1\n");
	gotoxy(30,4);printf("\xB1 #     # #       #     # #     # #        #    \xB1\n");
	gotoxy(30,5);printf("\xB1 #     # #       #       #     # #        #    \xB1\n");
	gotoxy(30,6);printf("\xB1 ######  #####    #####  #     # #        #    \xB1\n");
	gotoxy(30,7);printf("\xB1 #  #    #             # #     # #        #    \xB1\n");
	gotoxy(30,8);printf("\xB1 #   #   #       #     # #     # #        #    \xB1\n");
	gotoxy(30,9);printf("\xB1 #    #  #######  #####   #####  #######  #    \xB1\n");
	gotoxy(30,10);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 CALCULATOR \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
	gotoxy(40,12);printf("Enter any key to Continue.... ");
	getch();
}

void loading()
{
    textcolor(GREEN);
	clrscr();
	system("color 02");
	gotoxy(55,14);printf("LOADING...");
	gotoxy(40,15);printf("\xB1\xB1\xB1\xB1 [10%%]");
	Sleep(1000);
	clrscr();
	gotoxy(55,14);printf("LOADING...");
	gotoxy(40,15);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 [20%%]");
	Sleep(1000);
	clrscr();
	gotoxy(55,14);printf("PLEASE WAIT...");
	gotoxy(40,15);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 [35%%]");
	Sleep(1000);
	clrscr();
	gotoxy(55,14);printf("PLEASE WAIT...");
	gotoxy(40,15);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 [50%%]");
	Sleep(1000);
	clrscr();
	gotoxy(55,14);printf("OPENING...");
	gotoxy(40,15);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 [90%%]");
	Sleep(1000);
	clrscr();
	gotoxy(55,14);printf("OPENING...");
	gotoxy(40,15);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 [100%%]");
	Sleep(1000);
	clrscr();
}

void printtable(char *name,int roll,int _class,char sec,int m1,int m2,int m3, int m4,int m5,int t,int p)
{
	clrscr();
    textcolor(RED);
	box_block(1,0,116,29);
    textcolor(GREEN);
	box_single_line(4,7,30,3);
    textcolor(RED);
	gotoxy(6,8);puts(name);
	gotoxy(6,9);printf("Roll No:%d  Class:%d(%c)",roll,_class,sec);
    textcolor(WHITE);
	gotoxy(4,11);printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
	gotoxy(4,12);printf("\xBA   SUBJECTS  \xBA    FULL MARKS    \xBA  PASS MARKS     \xBA   MARKS OBTAINED     \xBA");
	gotoxy(4,13);printf("\xCC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xB9");
	gotoxy(4,14);printf("\xBA English     \xBA");
	gotoxy(4,15);printf("\xBA Nepali      \xBA");
	gotoxy(4,16);printf("\xBA Maths       \xBA");
	gotoxy(4,17);printf("\xBA Science     \xBA");
	gotoxy(4,18);printf("\xBA Opt.Maths   \xBA");
	gotoxy(27,14);printf("100       \xBA      35         \xBA         %d",m1);
	gotoxy(27,15);printf("100       \xBA      35         \xBA         %d",m2);
	gotoxy(27,16);printf("100       \xBA      35         \xBA         %d",m3);
	gotoxy(27,17);printf("100       \xBA      35         \xBA         %d",m4);
	gotoxy(27,18);printf("100       \xBA      35         \xBA         %d",m3);
	gotoxy(78,14);printf("\xBA");
	gotoxy(78,15);printf("\xBA");
	gotoxy(78,16);printf("\xBA");
	gotoxy(78,17);printf("\xBA");
	gotoxy(78,18);printf("\xBA");
	gotoxy(4,19);printf("\xCC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xB9");
	gotoxy(4,20);printf("\xBATotal Marks:%d",t);
	gotoxy(4,21);printf("\xBAPercentage:%d%%",p);
	gotoxy(78,20);printf("\xBA");
	gotoxy(78,21);printf("\xBA");
	gotoxy(4,22);printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
}