/*******************************************
 *              "result.h"                 *
 *     result.h is a custom header file    *
 *     which contians some user defined    *
 *  functions made for use in this project *
 *******************************************
 *       Author:-Prashant Bhandari         *
 *******************************************/
#ifndef RESULT_H
#define RESULT_H

//This function is used to print the program banner.
void banner();
//This fuction shows the loading animation in the screen. 
void loading();
//This function is used to print table of students marks in appropriate format...
void printtable(char *name,int roll,int _class,char sec,int m1,int m2,int m3, int m4,int m5,int t,int p);
   
#endif