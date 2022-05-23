#include <iostream>
#include <string>
#include<conio.h>
#include <stdlib.h>
#include <ctime>
#include <fstream>

using namespace std;

int tossso, decision , choicehehe, choice, choice1, lol, lol1 , optionbowl1, optionbowl2, optionbatteamtwo, optionbatteamtoe;
int overs , balls, target, wickets, score, p_balls, innings=1;
int overs1, wickets1, score1, p_balls1;
float run_rate, run_rate1, c_overs, c_overs1;
int bat_first;
int name;
string ininteam, ininteaml;

string bowlerone, bowlertwo;
string stricker;
string non_stricker;
string winner;

string playteam1[11];
string playteam2[11];

string team1, team2;

int Team1 ();
int Team2 ();
void toss();
void cho_by_team1();
void cho_by_team2();
void strickerplayerteam1();
void non_strickerplayerteam1();
void strickerplayerteam2();
void non_strickerplayerteam2();
void team1_bowl();
void team2_bowl();
void first_inning();
void second_inning();
void match_summary();





int main() {
	
	
cout<<"\t\t\t\t\t|-------------------------------------|  "<<endl;	
cout<<"\t\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|  "<<endl;	
cout<<"\t\t\t\t\t|         CRICKET SCOREBOARD          | "<<endl;
cout<<"\t\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|  "<<endl;
cout<<"\t\t\t\t\t|-------------------------------------|  "<<endl;
cout<<endl<<endl<<endl;

cout<<"\t\t\t\t|*******LET'S HAVE A TRILLING MATCH*******!!!!|"<<endl<<endl;

cout<<"\t\t\t\t|*******# AIR UNIVERSITY SPORTS DEPARTMENT****|"<<endl<<endl;

cout<<"Press Enter to continue!!!!!!"<<endl;

getch();

system("cls");




	
		
Team1 ();

cout<<endl<<endl;


Team2 ();

cout<<endl<<endl;

cout<<"Enter number of overs: ";
cin>>overs;

cout<<"\t\t\t\t\t\t\tNow ready for the toss"<<endl;

system("cls");

toss();

cout<<endl<<endl;

first_inning();

cout<<endl<<endl;

second_inning();

cout<<endl<<endl;

cout<<"Press Enter to watch match summary:"<<endl<<endl;
getch();
system("cls");

match_summary();




		
	return 0;
}



int Team1 (){

int val,check1;

cout<<"\t\t\t\t\t\tEnter name of Team 1 :) : ";

getline (cin,team1);

cout<<endl<<endl;


for(int i=0;i<=1;i++){

cout<<"Enter size of your team: ";
cin>>val;
lol=val;
cout<<endl<<endl;
    if(val>1 && val<=11){
    	i++;
	}
	 else
	     {
	     	cout<<"Enter valid team size."<<endl;
	     	i--;
		 }

}

cout<<endl<<endl;

check1=val;

string playerteam1[check1];



for(int i=0; i<check1; i++)
{
	
cout<<"Enter name of player"<<i+1<<" : ";

cin.ignore();
getline(cin,playerteam1[i]);
playteam1[i]=playerteam1[i];
cout<<endl;	
	                
}
	
}


int Team2 (){
	
int val,check2;

 
	
cout<<"\t\t\t\t\t\tEnter name of Team 2 :) : ";
getline (cin,team2);

cout<<endl<<endl;




for(int i=0;i<=1;i++){

cout<<"Enter size of your team: ";
cin>>val;
cout<<endl<<endl;
    if(val>1 && val<=11){
    	i++;
	}
	 else
	     {
	     	cout<<"Enter valid team size."<<endl;
	     	i--;
		 }

}

cout<<endl<<endl;
check2=val;
lol1=val;
string playerteam2[check2];


for(int i=0; i<check2; i++)
{
	
cout<<"Enter name of player"<<i+1<<" : ";

cin.ignore();
getline(cin,playerteam2[i]);
playteam2[i]=playerteam2[i];
cout<<endl;	
	
}	
}




void toss()
{ 

cout<<"Who won the toss?"<<endl<<endl;

            cout<<"Press 1 for "<<team1<<" or press 2 for "<<team2<<" : ";
            cin>>tossso;
            cout<<endl<<endl;
            
            cout<<"What they choose? Bat or Ball?"<<endl<<endl;
            cout<<"Press 1 for bat and 2 for ball: ";
            
            cin>>choice;
            cout<<endl<<endl;
            
            if (tossso==1 && choice==1)
            {
            cout<<team1<<" have won the toss and elected to bat first!!!!"<<endl<<endl;
            getch();
            cho_by_team1();
            }
            else if (tossso==1 && choice==2)
            {
            cout<<team1<<" have won the toss and elected to bowl first!!!!"<<endl<<endl;
            getch();
            cho_by_team1();
            }
            else if (tossso==2 && choice==1)
            {
            cout<<team2<<" have won the toss and elected to bat first!!!!"<<endl<<endl;
            getch();
            cho_by_team2();
            }
            else if (tossso==2 && choice==2)
            {          
            cout<<team2<<" have won the toss and elected to bowl first!!!!"<<endl<<endl;
            getch();
            cho_by_team2();
            }	
}


void cho_by_team1(){
	
system("cls");

if (tossso==1 && choice==1)

{
	
cout<<"Select the name of players of team1 for batting: "<<endl<<endl;

for(int i=0; i<lol; i++)
{   
	cout<<i+1<<"."<<playteam1[i]<<endl<<endl;
	
	   }
	   
strickerplayerteam1();
non_strickerplayerteam1();
}


 
else if (tossso==1 && choice==2)

{
	
cout<<"Select the name of player of team1 for bowling: "<<endl<<endl;

for(int i=0; i<lol; i++)
{   
	cout<<i+1<<"."<<playteam1[i]<<endl<<endl;
	
	   }
cout<<"Bowler= ";    	
team1_bowl();	
}
}


void cho_by_team2(){
	
system("cls");

if (tossso==2 && choice==1) 

{
	
cout<<"Select the name of players of team2 for batting: "<<endl<<endl;

for(int i=0; i<lol; i++) 
{   
	cout<<i+1<<"."<<playteam2[i]<<endl<<endl;
	
	   }   	
strickerplayerteam2();
non_strickerplayerteam2();	
}
 
else if (tossso==2 && choice==2)

{
	
cout<<"Select the name of player of team2 for bowling: "<<endl<<endl;

for(int i=0; i<lol; i++)
{   
	cout<<i+1<<"."<<playteam2[i]<<endl<<endl;
	
	   }
cout<<"Bowler= "; 
team2_bowl();	
}
	
}


void strickerplayerteam1 ()
{

cout<<"Select stricker: ";
cin>>choicehehe;
cout<<endl;

if(choicehehe==1)
stricker=playteam1[0];

else if(choicehehe==2)
stricker=playteam1[1];

else if(choicehehe==3)
stricker=playteam1[2];

else if(choicehehe==4)
stricker=playteam1[3];

else if(choicehehe==5)
stricker=playteam1[4];

else if(choicehehe==6)
stricker=playteam1[5];

else if(choicehehe==7)
stricker=playteam1[6];

else if(choicehehe==8)
stricker=playteam1[7];

else if(choicehehe==9)
stricker=playteam1[8];

else if(choicehehe==10)
stricker=playteam1[9];

else if(choicehehe==11)
stricker=playteam1[10];
	
}		


void non_strickerplayerteam1 ()
{

cout<<"Select non_stricker: ";
cin>>choice1;
cout<<endl;

if(choice1!=choicehehe && choice1==1)
non_stricker=playteam1[0];

else if(choice1!=choicehehe && choice1==2)
non_stricker=playteam1[1];

else if(choice1!=choicehehe && choice1==3)
non_stricker=playteam1[2];

else if(choice1!=choicehehe && choice1==4)
non_stricker=playteam1[3];

else if(choice1!=choicehehe && choice1==5)
non_stricker=playteam1[4];

else if(choice1!=choicehehe && choice1==6)
non_stricker=playteam1[5];

else if(choice1!=choicehehe && choice1==7)
non_stricker=playteam1[6];

else if(choice1!=choicehehe && choice1==8)
non_stricker=playteam1[7];

else if(choice1!=choicehehe && choice1==9)
stricker=playteam1[8];

else if(choice1!=choicehehe && choice1==10)
non_stricker=playteam1[9];

else if(choice1!=choicehehe && choice1==11)
non_stricker=playteam1[10];
	
}	
	
void strickerplayerteam2 ()
{

cout<<"Select stricker: ";
cin>>optionbatteamtwo;
cout<<endl;

if(optionbatteamtwo==1)
stricker=playteam2[0];

else if(optionbatteamtwo==2)
stricker=playteam2[1];

else if(optionbatteamtwo==3)
stricker=playteam2[2];

else if(optionbatteamtwo==4)
stricker=playteam2[3];

else if(optionbatteamtwo==5)
stricker=playteam2[4];

else if(optionbatteamtwo==6)
stricker=playteam2[5];

else if(optionbatteamtwo==7)
stricker=playteam2[6];

else if(optionbatteamtwo==8)
stricker=playteam2[7];

else if(optionbatteamtwo==9)
stricker=playteam2[8];

else if(optionbatteamtwo==10)
stricker=playteam2[9];

else if(optionbatteamtwo==11)
stricker=playteam2[10];
	
}		


void non_strickerplayerteam2 ()
{

cout<<"Select non_stricker: ";
cin>>optionbatteamtoe;
cout<<endl;

if(optionbatteamtoe!=optionbatteamtwo && optionbatteamtoe==1)
non_stricker=playteam2[0];

else if(optionbatteamtoe!=optionbatteamtwo && optionbatteamtoe==2)
non_stricker=playteam2[1];

else if(optionbatteamtoe!=optionbatteamtwo && optionbatteamtoe==3)
non_stricker=playteam2[2];

else if(optionbatteamtoe!=optionbatteamtwo && optionbatteamtoe==4)
non_stricker=playteam2[3];

else if(optionbatteamtoe!=optionbatteamtwo && optionbatteamtoe==5)
non_stricker=playteam2[4];

else if(optionbatteamtoe!=optionbatteamtwo && optionbatteamtoe==6)
non_stricker=playteam2[5];

else if(optionbatteamtoe=optionbatteamtwo && optionbatteamtoe==7)
non_stricker=playteam2[6];

else if(optionbatteamtoe!=optionbatteamtwo && optionbatteamtoe==8)
non_stricker=playteam2[7];

else if(optionbatteamtoe!=optionbatteamtwo && optionbatteamtoe==9)
stricker=playteam2[8];

else if(optionbatteamtoe!=optionbatteamtwo &&optionbatteamtoe==10)
non_stricker=playteam2[9];

else if(optionbatteamtoe!=optionbatteamtwo && optionbatteamtoe==11)
non_stricker=playteam2[10];
	
}	

void team1_bowl(){

cin>>optionbowl1;

if(optionbowl1==1)
bowlerone=playteam1[0];

else if(optionbowl1==2)
bowlerone=playteam1[1];	

else if(optionbowl1==3)
bowlerone=playteam1[2];	

else if(optionbowl1==4)
bowlerone=playteam1[3];	

else if(optionbowl1==5)
bowlerone=playteam1[4];	

else if(optionbowl1==6)
bowlerone=playteam1[5];	

else if(optionbowl1==7)
bowlerone=playteam1[6];	

else if(optionbowl1==8)
bowlerone=playteam1[7];	

else if(optionbowl1==9)
bowlerone=playteam1[8];	

else if(optionbowl1==10)
bowlerone=playteam1[9];	

else if(optionbowl1==11)
bowlerone=playteam1[10];		
	
	
}


void team2_bowl(){

cin>>optionbowl2;

if(optionbowl2==1)
bowlertwo=playteam2[0];

else if(optionbowl2==2)
bowlertwo=playteam2[1];	

else if(optionbowl2==3)
bowlertwo=playteam2[2];	
	

else if(optionbowl2==4)
bowlertwo=playteam2[3];	


else if(optionbowl2==5)
bowlertwo=playteam2[4];	
	

else if(optionbowl2==6)
bowlertwo=playteam2[5];	
	

else if(optionbowl2==7)
bowlertwo=playteam2[6];	


else if(optionbowl2==8)
bowlertwo=playteam2[7];	
	

else if(optionbowl2==9)
bowlertwo=playteam2[8];	


else if(optionbowl2==10)
bowlertwo=playteam2[9];	
	

else if(optionbowl2==11)
bowlertwo=playteam2[10];	
		
}

void first_inning(){


balls=overs*6;

p_balls=0;
score=0;wickets=0;
c_overs1=0;
int scorer,r;

if(name==1)
cout<<team1;
else if (name==2)
cout<<team2;

	
	
cout<<"\t\t\t\t|~~~~~~~~~~~1st_inning~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t\t\t|~~~~~~~~~~~Fun begins~~~~~~~~~~~|"<<endl<<endl<<endl;


for(int j=0; j!=balls; j++)
{
label:	
cout<<"Last ball: "<<endl<<endl;	
cout<<"[1] Normal dilievery!!! "<<endl<<endl;
cout<<"[2] No ball/wide!!!!"<<endl<<endl;
cout<<"Please enter 1 or 2: ";
cin>>scorer;
cout<<"Runs on last ball: ";

cout<<"				--------------------------------- "<<endl;		
    cout<<"				*********** "<<endl;	
	cout<<"				--------------------------------- "<<endl;	
	cout<<"				|    Enter 0 for : DOT          | "<<endl;
	cout<<"				|    Enter 1 for : SINGLE       | "<<endl;
	cout<<"				|    Enter 2 for : DOUBLE       | "<<endl;
	cout<<"				|    Enter 3 for : TRIPLE       | "<<endl;
	cout<<"				|    Enter 4 for : FOUR         | "<<endl;
	cout<<"				|    Enter 5 for : SIX          | "<<endl;
	cout<<"				|    Enter 6 for : WICKET       | "<<endl;	
	cout<<"				--------------------------------- "<<endl;
    cout<<"				*********** "<<endl;			
	cout<<"				--------------------------------- "<<endl;		
	cout<<"			 "<<endl;		
cout<<"Enter a number according to what happened in match: ";	
cin>>r;
cout<<endl<<endl;
switch (scorer)
{   case 1:
    p_balls+=1;
    if(p_balls%6==0){
    c_overs1+=0.5;
    }
    else{
        c_overs1+=0.1;
    }
    break;
    case 2:
    score+=1;
default:
goto label;
    break;
}
switch (r)
{
case 0:
    break;
case 1:
    score+=1;
    break;
case 2:
    score+=2;
    break;
case 3:
    score+=3;
    break;
case 4:
    score+=4;
    break;
case 5:
    score+=6;
    break;
case 6:
    wickets+=1;
    break;
    

default:
    cout<<"Enter a valid choice!";
    goto label;
    break;
   
}
run_rate=score/overs;

cout<<"\t\t\t\t~~~~~~~~~~~~~~First innings~~~~~~~~~~~~~!!"<<endl<<endl;
cout<<"Score:"<<score<<"\t\tOvers: "<<c_overs1<<"\t\t\tWickets:"<<wickets<<endl<<endl;
cout<<"RunRate: "<<run_rate<<endl<<endl;

getch();
system("cls");

if(wickets==10||p_balls==balls){
    innings=2;
    if(innings==2){
        target=score+1;
        cout<<"\t\t\t\tTarget is: "<<target<<endl<<endl;
    }
    break;
}

}
}

void second_inning(){
	

	
p_balls=0;
c_overs=0;
score1=0, wickets=0;

int j, scorer1, r1;

if(name==1)
cout<<team1;
else if (name==2)
cout<<team2;


	
cout<<"\t\t\t\t|~~~~~~~~~~~2nd_inning~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t\t\t|~~~~~~~~~~~Fun begins~~~~~~~~~~~|"<<endl<<endl<<endl;

for(j=0; j!=balls; j++)
{

if (p_balls1<balls && score1>target)
{
	cout<<winner<<" won the match "<<endl<<endl;
}	


else {
	label:

cout<<"Last ball: "<<endl<<endl;	
cout<<"[1] Normal dilievery!!! "<<endl<<endl;
cout<<"[2] No ball/wide!!!!"<<endl<<endl;
cout<<"Please enter 1 or 2: ";
cin>>scorer1;
cout<<"Runs on last ball: ";	
	
cout<<"				--------------------------------- "<<endl;		
    cout<<"				*********** "<<endl;	
	cout<<"				--------------------------------- "<<endl;	
	cout<<"				|    Enter 0 for : DOT          | "<<endl;
	cout<<"				|    Enter 1 for : SINGLE       | "<<endl;
	cout<<"				|    Enter 2 for : DOUBLE       | "<<endl;
	cout<<"				|    Enter 3 for : TRIPLE       | "<<endl;
	cout<<"				|    Enter 4 for : FOUR         | "<<endl;
	cout<<"				|    Enter 5 for : SIX          | "<<endl;
	cout<<"				|    Enter 6 for : WICKET       | "<<endl;	
	cout<<"				--------------------------------- "<<endl;
    cout<<"				*********** "<<endl;			
	cout<<"				--------------------------------- "<<endl;		
	cout<<"			 "<<endl;		
cout<<"Enter a number according to what happened in match: ";	
cin>>r1;
cout<<endl<<endl;


switch (scorer1)
{   case 1:
    p_balls1+=1;
    if(p_balls1%6==0){
    c_overs+=0.5;
    }
    else{
        c_overs+=0.1;
    }
    break;
    case 2:
    score1+=1;
default:
    break;
}
switch (r1)
{
case 0:
    break;
case 1:
    score1+=1;
    break;
case 2:
    score1+=2;
   break;
case 3:
    score1+=3;
    break;
case 4:
    score1+=4;
   break;
case 5:
    score1+=6;
    break;
case 6:
    wickets1+=1;
    break;
    

default:
    printf("Enter a valid choice!");
   goto label;
   break;
   
}	
	

	
run_rate1=score1/overs;

cout<<"\t\t\t\t~~~~~~~~~~~~~~second innings~~~~~~~~~~~~~!!"<<endl<<endl;

cout<<"Score:"<<score1<<"\t\t\tWickets:"<<wickets1<<"\t\tOvers: "<<c_overs<<endl<<endl;
cout<<"                                                           Target"<<target<<endl<<endl;
cout<<"RunRate: "<<run_rate1<<endl<<endl;
cout<<"\t\t\t\t\tNeed  "<<target-score1<<"of  "<<balls-p_balls1<<"to win!!!";

}
getch();
system("cls");


if(wickets1==10||p_balls1==balls||score1>=target){
	
	if (tossso==1 && choice==1)
            {
            	
          ininteam=team1;
          ininteaml=team2;
            	
          if(target>score1){
         	
        winner=team1;	
       cout<<team1<<" Won the Match!"<<endl<<endl;
    }
    else{
    	winner=team2;
        cout<<team2<<" Won the Match!"<<endl<<endl;
    }  	
            
        
            }
	
	else if (tossso==1 && choice==2)
            {
          ininteam=team2;
          ininteaml=team1;
            
             if(score1>=target){
        
       winner=team1;	
       cout<<team1<<" Won the Match!"<<endl<<endl;
    }
    else{
    	winner=team2;
        cout<<team2<<" Won the Match!"<<endl<<endl;
    }  	
            
        
            }
	
	else if (tossso==2 && choice==1)
            {
            	
        ininteam=team2;
        ininteaml=team1;
            
         if(target>score1){
         	
       winner=team2;
    	
       cout<<team2<<" Won the Match!"<<endl<<endl;
    }
    else{
    	winner=team1;
        cout<<team1<<" Won the Match!"<<endl<<endl;
    }  	    
            
            
        
            }
	
	
	else if (tossso==2 && choice==2)
            {
            	
        ininteam=team1;
        ininteaml=team2;
            	
        if(score1>=target){
        	
       winner=team2;
       cout<<team2<<" Won the Match!"<<endl<<endl;
    }
    else{
    	winner=team1;
        cout<<team1<<" Won the Match!"<<endl<<endl;
    }  	        
            }   
}
}		
}

void match_summary(){

cout<<"\t\t\t\t|-------------------------------------|  "<<endl;	
cout<<"\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|  "<<endl;	
cout<<"\t\t\t\t|Match summary of this Thrilling Match|: "<<endl;
cout<<"\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|  "<<endl;
cout<<"\t\t\t\t|-------------------------------------|  "<<endl;

cout<<endl<<endl<<endl;

cout<<"\t\t\t\t|~~~~~~~~~~~~~~First innings~~~~~~~~~~~~~|!!"<<endl<<endl<<endl;
cout<<"\t\t\t\t|~~~~~~~~~~~~~~"<<ininteam<<"~~~~~~~~~~~~~~~~~~|!!"<<endl<<endl<<endl;

cout<<"Score:"<<score<<"\t\tOvers: "<<c_overs1<<"\t\tWickets:"<<wickets<<endl<<endl;
cout<<"RunRate: "<<run_rate<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\tTarget is:"<<target<<endl<<endl;

	
cout<<"\t\t\t\t|~~~~~~~~~~~~~~Second innings~~~~~~~~~~~~|!!"<<endl<<endl<<endl;
cout<<"\t\t\t\t|~~~~~~~~~~~~~~"<<ininteaml<<"~~~~~~~~~~~~~~~~~~~~~|!!"<<endl<<endl<<endl;

cout<<endl<<endl;	
	
cout<<"Score:"<<score1<<"\t\tOvers: "<<c_overs<<"\t\tWickets:"<<wickets1<<endl<<endl;
cout<<"RunRate: "<<run_rate1<<endl<<endl<<endl;

if (p_balls1<balls && score1>target)
{
	cout<<"\t\t\t\t"<<winner<<" won the match by "<<score1-target<<" runs";
}

else
cout<<"\t\t\t\t"<<winner<<"  won the match by  "<<target-score1<<" runs.";

getch();
	
ofstream fout ("Match_summary.txt");


fout<<"\t\t\t\t|-------------------------------------|  "<<endl;	
fout<<"\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|  "<<endl;	
fout<<"\t\t\t\t|Match summary of this Thrilling Match|: "<<endl;
fout<<"\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|  "<<endl;
fout<<"\t\t\t\t|-------------------------------------|  "<<endl;

fout<<endl<<endl<<endl;

fout<<"\t\t\t\t|~~~~~~~~~~~~~~First innings~~~~~~~~~~~~~|!!"<<endl<<endl<<endl;
fout<<"\t\t\t\t|~~~~~~~~~~~~~~"<<ininteam<<"~~~~~~~~~~~~~~~~~~|!!"<<endl<<endl<<endl;

fout<<"Score:"<<score<<"\t\tOvers: "<<c_overs1<<"\t\tWickets:"<<wickets<<endl<<endl;
fout<<"RunRate: "<<run_rate<<endl<<endl;
fout<<"\t\t\t\t\t\t\t\tTarget is:"<<target<<endl<<endl;

	
fout<<"\t\t\t\t|~~~~~~~~~~~~~~Second innings~~~~~~~~~~~~|!!"<<endl<<endl<<endl;
fout<<"\t\t\t\t|~~~~~~~~~~~~~~"<<ininteaml<<"~~~~~~~~~~~~~~~~~~~~~|!!"<<endl<<endl<<endl;

fout<<endl<<endl;	
	
fout<<"Score:"<<score1<<"\t\tOvers: "<<c_overs<<"\t\tWickets:"<<wickets1<<endl<<endl;
fout<<"RunRate: "<<run_rate1<<endl<<endl<<endl;

if (p_balls1<balls && score1>target)
{
	fout<<"\t\t\t\t"<<winner<<" won the match by "<<score1-target<<" runs.";
}

else
fout<<"\t\t\t\t"<<winner<<"  won the match by  "<<target-score1<<" runs.";

	
}







