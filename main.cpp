#include <iostream>
#include <windows.h>
#include <conio.h>
#include <mmsystem.h>

using namespace std;

class virtualGuitar{

       public:

           //Tunings function
       void tuningA();
       void tuningB();
       void tuningC();
       void tuningD();
       void tuningE();
       void tuningF();
       void tuningG();
       void tuningH();
       void tuningI();
       void tuningJ();
       void tuningK();
       void tuningL();
       void tuningM();
       void tuningN();
       void tuningP();
       void tuningQ();
       void tuningR();
       void tuningS();
       void tuningT();
       void tuningU();
       void tuningV();
       void tuningW();
       void tuningX();
       void tuningY();
       void tuningZ();
       void tuning1();
       void tuning2();
       void tuning3();
       void tuning4();
       void tuning5();


       //chord functions
       void chordA();
       void chordB();
       void chordC();
       void chordD();
       void chordE();
       void chordF();
       void chordG();
       void chordH();
       void chordI();
       void chordJ();
       void chordK();
       void chordL();
       void chordM();
       void chordN();
       void chordP();
       void chordQ();
       void chordR();
       void chordS();
       void chordT();
       void chordU();
       void chordV();
       void chordW();
       void chordX();
       void chordY();
       void chordZ();
       void chord1();
       void chord2();
       void chord3();
       void chord4();


       //user interface functions
       void displayUI();
       void music();


};


//tuning function declaration
void virtualGuitar::tuningA(){
     PlaySound(TEXT("1st_String_E.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningB(){
     PlaySound(TEXT("1st_String_E_64kb.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningC(){
     PlaySound(TEXT("1st_String_E_vbr.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningD(){
     PlaySound(TEXT("2nd_String_B_.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningE(){
     PlaySound(TEXT("2nd_String_B__64kb.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningF(){
     PlaySound(TEXT("2nd_String_B__vbr.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningG(){
     PlaySound(TEXT("3rd_String_G.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningH(){
     PlaySound(TEXT("3rd_String_G_64kb.WAV"),NULL,SND_SYNC);
}


void virtualGuitar::tuningI(){
     PlaySound(TEXT("3rd_String_G_vbr.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningJ(){
     PlaySound(TEXT("4th_String_D.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningK(){
     PlaySound(TEXT("4th_String_D_64kb.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningL(){
     PlaySound(TEXT("4th_String_D_vbr.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningM(){
     PlaySound(TEXT("5th_String_A.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningN(){
     PlaySound(TEXT("5th_String_A_64kb.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningP(){
     PlaySound(TEXT("5th_String_A_vbr.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningQ(){
     PlaySound(TEXT("6th_String_E.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningR(){
     PlaySound(TEXT("6th_String_E_64kb.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningS(){
     PlaySound(TEXT("6th_String_E_vbr.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningT(){
     PlaySound(TEXT("C.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningU(){
     PlaySound(TEXT("C_64kb.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningV(){
     PlaySound(TEXT("C_vbr.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningW(){
     PlaySound(TEXT("D.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningX(){
     PlaySound(TEXT("D_64kb.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningY(){
     PlaySound(TEXT("D_vbr.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuningZ(){
     PlaySound(TEXT("Dm.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuning1(){
     PlaySound(TEXT("Dm_64kb.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuning2(){
     PlaySound(TEXT("Dm_vbr.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuning3(){
     PlaySound(TEXT("E.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuning4(){
     PlaySound(TEXT("E_64kb.WAV"),NULL,SND_SYNC);
}

void virtualGuitar::tuning5(){
     PlaySound(TEXT("E_vbr.WAV"),NULL,SND_SYNC);
}









//chord function declaration
void virtualGuitar::chordA(){
    tuningA();
}
void virtualGuitar::chordB(){
    tuningB();
}
void virtualGuitar::chordC(){
    tuningC();
}
void virtualGuitar::chordD(){
    tuningD();
}
void virtualGuitar::chordE(){
    tuningE();
}
void virtualGuitar::chordF(){
    tuningF();
}
void virtualGuitar::chordG(){
    tuningG();
}

void virtualGuitar::chordH(){
    tuningH();
}
void virtualGuitar::chordI(){
    tuningI();
}
void virtualGuitar::chordJ(){
    tuningJ();
}
void virtualGuitar::chordK(){
    tuningK();
}
void virtualGuitar::chordL(){
    tuningL();
}
void virtualGuitar::chordM(){
    tuningM();
}
void virtualGuitar::chordN(){
    tuningN();
}
void virtualGuitar::chordP(){
    tuningP();
}
void virtualGuitar::chordQ(){
    tuningQ();
}
void virtualGuitar::chordR(){
    tuningR();
}
void virtualGuitar::chordS(){
    tuningS();
}
void virtualGuitar::chordT(){
    tuningT();
}
void virtualGuitar::chordU(){
    tuningU();
}
void virtualGuitar::chordV(){
    tuningV();
}
void virtualGuitar::chordW(){
    tuningW();
}
void virtualGuitar::chordX(){
    tuningX();
}
void virtualGuitar::chordY(){
    tuningY();
}
void virtualGuitar::chordZ(){
    tuningZ();
}
void virtualGuitar::chord1(){
    tuning1();
}
void virtualGuitar::chord2(){
    tuning2();
}
void virtualGuitar::chord3(){
    tuning3();
}
void virtualGuitar::chord4(){
    tuning4();
}



//user interface declaration
void virtualGuitar::displayUI(){

    //STARTING OF DISPLAY
    cout<<"\n\n\tTHESE ARE THE KEY YOU NEED TO USE FROM KEYBOARD TO PRODUCE SOUND OF VARIOUS FREQUENCES:)\n\n\n";


    for(int i = 1; i<=24; i++){
        for(int j=1; j<=80;j++){
            if(i==1||j==1||i==24||j==80){
                cout<<"= ";
            }else if(i==8){
                 cout<<"= ";
            }else if(i==16){
                 cout<<"= ";
            }else if(j==8){
                 cout<<"= ";
            }else if(j==16){
                 cout<<"= ";
            }else if(j==24){
                 cout<<"= ";
            }else if(j==32){
                 cout<<"= ";
            }else if(j==40){
                 cout<<"= ";
            }else if(j==48){
                 cout<<"= ";
            }else if(j==56){
                 cout<<"= ";
            }else if(j==64){
                 cout<<"= ";
            }else if(j==72){
                 cout<<"= ";
            }else if(i==4&&j==4){
                 cout<<"Q ";
            }else if(i==4&&j==12){
                 cout<<"W ";
            }else if(i==4&&j==20){
                 cout<<"E ";
            }else if(i==4&&j==28){
                 cout<<"R ";
            }else if(i==4&&j==36){
                 cout<<"T ";
            }else if(i==4&&j==44){
                 cout<<"Y ";
            }else if(i==4&&j==52){
                 cout<<"U ";
            }else if(i==4&&j==60){
                 cout<<"I ";
            }else if(i==4&&j==68){
                 cout<<"O ";
            }else if(i==4&&j==76){
                 cout<<"P ";
            }else if(i==12&&j==4){
                 cout<<"A ";
            }else if(i==12&&j==12){
                 cout<<"S ";
            }else if(i==12&&j==20){
                 cout<<"D ";
            }else if(i==12&&j==28){
                 cout<<"F ";
            }else if(i==12&&j==36){
                 cout<<"G ";
            }else if(i==12&&j==44){
                 cout<<"H ";
            }else if(i==12&&j==52){
                 cout<<"J ";
            }else if(i==12&&j==60){
                 cout<<"K ";
            }else if(i==12&&j==68){
                 cout<<"L ";
            }else if(i==12&&j==76){
                 cout<<"UP";
            }else if(i==20&&j==4){
                 cout<<"Z ";
            }else if(i==20&&j==12){
                 cout<<"X ";
            }else if(i==20&&j==20){
                 cout<<"C ";
            }else if(i==20&&j==28){
                 cout<<"V ";
            }else if(i==20&&j==36){
                 cout<<"B ";
            }else if(i==20&&j==44){
                 cout<<"N ";
            }else if(i==20&&j==52){
                 cout<<"M ";
            }else if(i==20&&j==60){
                 cout<<"LF";
            }else if(i==20&&j==68){
                 cout<<"DN";
            }else if(i==20&&j==76){
                 cout<<"RT";
            }else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }


    cout<<"\n\n\tIf you want to exit press ENTER :) ";

    //ENDING OF DISPLAY

}


void virtualGuitar::music(){
    char select;
   while(1){
        select = getch();
    switch(select){

       case 'q':
             chordA();
              break;

       case 'w':
              chordB();
              break;

       case 'e':
              chordC();
              break;

       case 'r':
              chordD();
              break;

        case 't':
              chordE();
              break;


        case 'y':
              chordF();
              break;


        case 'u':
              chordG();
              break;


        case 'i':
              chordH();
              break;

        case 'o':
              chordI();
              break;

         case 'p':
              chordJ();
              break;


         case 'a':
              chordK();
              break;


         case 's':
              chordL();
              break;

         case 'd':
              chordM();
              break;


          case 'f':
              chordN();
              break;


          case 'g':
              chordP();
              break;


          case 'h':
              chordQ();
              break;


          case 'j':
              chordR();
              break;


          case 'k':
              chordS();
              break;


          case 'l':
              chordT();
              break;


           case 'z':
              chordU();
              break;



          case 'x':
              chordV();
              break;


          case 'c':
              chordW();
              break;


          case 'v':
              chordX();
              break;


          case 'b':
              chordY();
              break;

          case 'n':
              chordZ();
              chord4();
              break;

          case 'm':
              chord1();
              chord2();
              chord3();
              break;

          default:
            exit(0);


    }
   }

}


int main(){
   virtualGuitar dude;
   dude.displayUI();
   dude.music();

  return 0;
}
