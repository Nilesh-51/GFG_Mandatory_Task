#include<iostream>
#include<stdlib.h>
using namespace std;
/*This is a program for Digital Clock which I have made using C++. Here I have used basic concepts of programming i.e loops,if-else,etc.*/
int main(){
    int h=0,m=0,s=0,ms=0;                                  //Initialized hour, minute, second and millisecond with zero
    cout<<"Enter time in hh:mm:ss format"<<endl;           //Take time as an input from user
    cin>>h>>m>>s;
    start:                                                //using this keyword for resetting time to 00:00:00 AM if loop reaches its end
    for(h;h<24;h++){                                      //loop will end if hour is equal to 24
        for(m;m<60;m++){                                  //loop will end if minute is equal to 60
            for(s;s<60;s++){                              //loop will end if second is equal to 60
                for(ms;ms<100;ms++){                      //loop will end if millisecond is equal to 100
                 system("cls");                           // system fuction to clear screen
                cout<<h<<":"<<m<<":"<<s;                  //displaying time
                if(h<12)                                  //condition for AM and PM
                cout<<" AM";
                else
                cout<<" PM";   
                }
                ms=0;                                      //resetting millsecond to 0
            }
            
            s=0;                                           //resetting second to 0
        }
        m=0;                                               //resetting minute to 0
    }
    h=0;                                                   //resetting hour to 0
    goto start;                                            //using goto keyword to invoke start
    return 0;
}
