#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int,int);
void printMaze();
void playerMove(int,int);

main(){  
  system("cls");
  printMaze();
  int x=24;
  int y=15;
  while(true){
  playerMove(x,y);
  if(x<50){
  x=x+1;
  }
  if(x==50){
  gotoxy(x-1,y);
  cout<<" ";
  x=50;
  }
  }
  }
void printMaze(){
cout <<"                 _______________________________________________________________________________________   " <<endl;
cout <<"                ||.. .....................................................................     .....   || " <<endl;
cout <<"                ||.. [$$$$$$$$$$$$$$$$$$|          ...          |$$$$$$$$$$$$$$|     |$|..    |$$$$$|  || " <<endl;
cout <<"                ||..         |$|      |$|       |$|...          |$|          |$|     |$|..        |$|  || " <<endl;
cout <<"                ||..         |$|      |$|       |$|...          |$|          |$|     |$|..        |$|  || " <<endl;
cout <<"                ||..         |$$$$$$$$$$|  . .  |$|...          :$$$$$$$$$$$$$$:        ..    |$$$$$|. || " <<endl;
cout <<"                ||..         |$|           . .  |$|...         .................   |$|  ..           . || " <<endl;
cout <<"                ||..         |$$$$$$$$$$$$|. .  |$|...         |$$$$$$$$$$$|       |$|  ..    |$$$$$|. || " <<endl;
cout <<"                ||..                    |$|.                   |$|......           |$|  ..        |$|. || " <<endl;
cout <<"                ||..      ...........   |$|.                   |$|......|$|             ..        |$|. || " <<endl;
cout <<"                ||..|$|   |$|$$$$$|$| . |$|. |$|                  ......|$|             ..|$|     |$|. || " <<endl;
cout <<"                ||..|$|   |$|     |$| ...    |$$$$$$$$$$$$$$$|    ......|$|              .|$|.         || " <<endl;
cout <<"                ||..|$|   |$|     |$| ...             .....|$|       $$$$$|             . |$|.         || " <<endl;
cout <<"                ||..|$|                ..             .....|$|                    |$|   ..|$|.         || " <<endl;
cout <<"                ||..|$|   |$$$$$$$$$$$$$$$$$|         .....|$|$$$$$$$$$$$$|       |$|   ..|$|$$$$$$$$| || " <<endl;
cout <<"                ||............................................................    |$|   .............  || " <<endl;
cout <<"                ||   .........................................................             ..........  || " <<endl;
cout <<"                ||..|$|   |$|     |$|..      |$$$$$$$$$$$$$$$|    .........|$|    |$|   ..|$|.         || " <<endl;
cout <<"                ||..|$|   |$|     |$|..               .....|$|        |$$$$$$|    |$|   ..|$|.         || " <<endl;
cout <<"                ||..|$|               .        G      .....|$|                    |$|   ..|$|.         || " <<endl;
cout <<"                ||..|$|   |$$$$$$$$$$$$$$$$$|         .....|$|$$$$$$$$$$$$|       |$|   ..|$|$$$$$$$|  || " <<endl;
cout <<"                ||...........................................................     |$|   .............  || " <<endl;
cout <<"                ||  .........................................................             ...........  || " <<endl;
cout <<"                ||_____________________________________________________________________________________|| " <<endl;
}
void gotoxy(int x,int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void playerMove(int x,int y){
  gotoxy(x-1,y);
  cout<<" ";
  gotoxy(x,y);
  cout<<"P";
  Sleep(200);
}