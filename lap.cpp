#include<iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
    system("color 3"); system("cls");
    cout<<"\n\t\t\t\t 1. Start (lap) STOP-WATCH\n\t\t\t\t 2. Return main menu";char choice=getch();
    switch(choice)
     {
        case '1':

     for(int loop=0;;){
           reset: system("cls"); cout<<"\n\t\t\t\tEnter any key to start "<<"\n\n\n\n\n\n\t\t\t\t00 : 00 : 00 : 00"; Sleep(100);
                while(kbhit()){
                        system("cls");
                    int h=0, m=0, s=0, ns=0, c=0, r=0; cout<<"\n\n\t\t\t Press (p) to pause & (Enter) continue\n\n\n\n\n";

        while(1)
            {
            for(int i=0; i<24; i++);
                {
                m=0;
                    for(int j=0; j<60; j++)
                        {
                        s=0;
                        for(int k=0; k<60; k++)
                            {
                            ns=0;
                            for(int l=0; l<60; l++)
                                {
                                    cout<<"\t\t\t\t";
                                    if(h<10){cout<<"0";}
                                        cout<<h<<" : ";
                                        if(m<10){cout<<"0";}
                                            cout<<m<<" : ";
                                            if(s<10){cout<<"0";}
                                                cout<<s<<" : ";
                                                  if(ns<10){cout<<"0";}
                                                    cout<<ns<<"\r";
                                                       ns++; Sleep(10);
                                                           while(kbhit()){ char ch=getch();
                                                                             switch(ch){
                                                                                case 'p':
                                                                                case 'P':
                                                                                        c++; cout<<" \t\t\t\t\t\t\tlap "<<c;
                                                                                        if(r==0||r%5==0){
                                                                                        cout<<"       Press (R/r)Reset           "; }r++;
                                                                                        cout<<"\n\n";
                                                                                           char ch1=getch();
                                                                                           switch(ch1){
                                                                                             case 'r':
                                                                                             case 'R':
                                                                                                goto reset; ch1='0';
                                                                                           } break;

                                                                                    }             }

                        }
                        s++;
                      }
                     m++;
                   }
                  h++;
                }

              }

            return 1;
          }
        }
    case '2':
    return 0;
     }
}
