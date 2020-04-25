#include<iostream>
#include<cstring>
#include<fstream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<MMSystem.h>
#include<dos.h>
#include<math.h>
using namespace std;
#include<graphics.h>

class Node
{
	public:
 char Question[100];
	char ans1[50];
	char ans2[50];
	char ans3[50];
	char ans4[50];
	char correct[3];
	 //int baghu;
};

class Admin
{
   public:
   Node CreatNode();
   void InsertInSimple();
   void InsertInMedium();
   void InsertInHard();
   void InsertInHardest();
   void ReadFromSimple();
  void ReadFromMedium();
  void ReadFromHard();
  void ReadFromHardest();
   void Display(Node temp);
   void Display1(Node temp);
};

class Player
{
  public:
 /*int Audiance;
 int FiftyFifty;
 int DoubleDip;*/
 /*Player()
 {
  Audiance=0;
  FiftyFifty=0;
  DoubleDip=0;
 }*/
 int ReadSimple();
 int ReadMedium();
 int ReadHard();
 int ReadHardest();
 void Aud(Node curr);
 void DD(Node curr);
 //void FF(Node curr);
};

void Player::DD(Node curr)
{
  //int flag;
  for(int i=0; i<strlen(curr.correct); i++)
  {
   if(curr.correct[i]=='a'||curr.correct[i]=='A')
   {
    for(int k=130; k<=170; k++ )
       {
        for(int j=340; j<=600; j++)
        {
         putpixel(j,k,12);
        }
       }
    outtextxy(360, 140, "The Correct Options Are ");
    for(int k=190; k<=220; k++ )
       {
        for(int j=340; j<=460; j++)
        {
         putpixel(j,k,12);
        }
       }
    outtextxy(360, 200, curr.ans1);
      for(int k=190; k<=220; k++ )
       {
        for(int j=480; j<=620; j++)
        {
         putpixel(j,k,12);
        }
       }
    outtextxy(500, 200, curr.ans3);
    //cout<<"        C. "<<curr.ans3;
   }
   else if(curr.correct[i]=='b'||curr.correct[i]=='B')
   {
    //cout<<"\n                      CORRECT OPTIONS ARE \n"<<endl;
    //cout<<"          B. "<<curr.ans2;
   // cout<<"          C. "<<curr.ans3;
   for(int k=130; k<=170; k++ )
       {
        for(int j=340; j<=600; j++)
        {
         putpixel(j,k,12);
        }
       }
   outtextxy(360, 140, "The Correct Options Are ");
   for(int k=190; k<=220; k++ )
       {
        for(int j=340; j<=460; j++)
        {
         putpixel(j,k,12);
        }
       }
    outtextxy(360, 200, curr.ans2);
      for(int k=190; k<=220; k++ )
       {
        for(int j=480; j<=620; j++)
        {
         putpixel(j,k,12);
        }
       }
    outtextxy(500, 200, curr.ans3);
   }
   else if(curr.correct[i]=='c'||curr.correct[i]=='C')
   {
    /*cout<<"\n CORRECT OPTIONS ARE \n"<<endl;
    cout<<"D. "<<curr.ans1;
    cout<<"C. "<<curr.ans3;*/
     for(int k=130; k<=170; k++ )
       {
        for(int j=340; j<=600; j++)
        {
         putpixel(j,k,12);
        }
       }
    outtextxy(360, 140, "The Correct Options Are ");
     for(int k=190; k<=220; k++ )
       {
        for(int j=340; j<=460; j++)
        {
         putpixel(j,k,12);
        }
       }
    outtextxy(360, 200, curr.ans1);
     for(int k=190; k<=220; k++ )
       {
        for(int j=480; j<=620; j++)
        {
         putpixel(j,k,12);
        }
       }
    outtextxy(500, 200, curr.ans3);
   }
   else if(curr.correct[i]=='d'||curr.correct[i]=='D')
   {
    /*cout<<"\n CORRECT OPTIONS ARE \n"<<endl;
    cout<<"A. "<<curr.ans1;
    cout<<"D. "<<curr.ans4;*/
    for(int k=130; k<=170; k++ )
       {
        for(int j=340; j<=600; j++)
        {
         putpixel(j,k,12);
        }
       }
    outtextxy(360, 140, "The Correct Options Are ");
    for(int k=190; k<=220; k++ )
       {
        for(int j=340; j<=460; j++)
        {
         putpixel(j,k,12);
        }
       }
    outtextxy(360, 200, curr.ans1);
      for(int k=190; k<=220; k++ )
       {
        for(int j=480; j<=620; j++)
        {
         putpixel(j,k,12);
        }
       }
    outtextxy(500, 200, curr.ans4);
   }
  }

}


void Player::Aud(Node curr)
{
    // char ch[3];
     PlaySound(TEXT("kbc3"), NULL, SND_SYNC);
     //cout<<"\n RESULT OF AUDIANCE POLE IS \t ";
     outtextxy(380, 240, "Result Of The Audiance Pole ");
     outtextxy(340, 220, "A");
     outtextxy(420, 220, "B ");
     outtextxy(500, 220, "C ");
     outtextxy(580, 220, "D ");
    for(int i=0;i<strlen(curr.correct);i++)
    {
      if(curr.correct[i]=='A')
      {
       line(340,200,340,120);
       line(340,120,380,120);
       line(380,120,380,200);
       line(380,200,340,200);
       for(int k=120; k<=200; k++ )
       {
        for(int j=340; j<=380; j++)
        {
         putpixel(j,k,12);
        }
       }

      }
      else if(curr.correct[i]=='B')
      {
        line(420,200,420,120);
       line(420,120,460,120);
       line(460,120,460,200);
       line(460,200,420,200);
       for(int k=120; k<=200; k++ )
       {
        for(int j=420; j<=460; j++)
        {
         putpixel(j,k,12);
        }
       }

      }
      else if(curr.correct[i]=='C')
      {

       line(500,200,500,120);
       line(500,120,540,120);
       line(540,120,540,200);
       line(540,200,500,200);
       for(int k=120; k<=200; k++ )
       {
        for(int j=500; j<=540; j++)
        {
         putpixel(j,k,12);
        }
       }
      }

      else if(curr.correct[i]=='D')
      {

       line(580,200,580,120);
       line(580,120,620,120);
       line(620,120,620,200);
       line(620,200,580,200);
      for(int k=120; k<=200; k++ )
       {
        for(int j=580; j<=620; j++)
        {
         putpixel(j,k,12);
        }
       }
      }

      for(int k=180; k<=200; k++ )
       {
        for(int j=340; j<=380; j++)
        {
         putpixel(j,k,12);
        }
       }
         for(int k=180; k<=200; k++ )
       {
        for(int j=580; j<=620; j++)
        {
         putpixel(j,k,12);
        }
       }

       for(int k=180; k<=200; k++ )
       {
        for(int j=500; j<=540; j++)
        {
         putpixel(j,k,12);
        }
       }

       for(int k=180; k<=200; k++ )
       {
        for(int j=420; j<=460; j++)
        {
         putpixel(j,k,12);
        }
       }
     }
     //cout<<ch;
}


int Player::ReadSimple()                           //READ SIMPLE
{
    int Audiance=0;
    int FiftyFifty=0;
    int DoubleDip=0;
    Admin A;
    int count=0;

     Node curr;
    char ans, ch, ques, Lch, baghu;
    outtextxy(100,150,"PRESS ANY KEY ");
    baghu=getche();
    cleardevice();
    int n=baghu%15;
    cout<<n;
    int X;
    X=n*(sizeof(curr));
 ifstream fin;
 fin.open("simple.txt", ios::in| ios::binary);
 fin.seekg(X);
 while(fin.read((char*)&curr, sizeof(curr)))
 {
   int flag=0;
   char Life;
   A.Display(curr);
   cout<<endl;
   //cout<<"           Do You Know RIGTH Answer of that quesstion ? If  No You can Quit Game"<<endl;
   PlaySound(TEXT("kbc1"), NULL, SND_SYNC);
   delay(3000);
   outtextxy( 20, 20, " Do You Know the RIGTH Answer of this quesstion ? If  you don't know You can Quit Game" );
   outtextxy(20, 40, "  Do You  Want to Quit The Game (Y/N) ");
   //cout<<"           Do You  Want to Quit The Game (Y/N)"<<endl;
   ch=getche();
   cout<<endl;
   if(ch=='y'|ch=='Y')
    break;

    //---------------------------------------------------------------------------------------------------------------
    outtextxy(100, 80, "  Do You  Want to Use A Lifeline (Y/N) ");
    Life=getche();
    if(Life=='y'||Life=='Y')
    {
     if(Audiance==0 && FiftyFifty==0 && DoubleDip==0 )
     {
      outtextxy(60, 120, " Available LifeLines Are");
      outtextxy(60, 140, "    A.   Audiance Pole");
      outtextxy(60, 160, "     B.  Fifty Fifty");
       outtextxy(60, 180, " Enter Your Choice");
      cin>>Lch;
      if(Lch=='A'||Lch=='a')
      {
      Aud(curr);
      Audiance=1;
      }
      else if(Lch=='B'||Lch=='b')
      {
      DD(curr);
      DoubleDip=1;
      }

     }
     else if(Audiance==0 && FiftyFifty==0 && DoubleDip==1 )
     {

      outtextxy(60, 120, " Available LifeLines Are");
       outtextxy(60, 140, "   A.  Audiance Pole");
     // cout<<"\n B. DOUBLE DIP\n ";
      outtextxy(60, 160, " Enter Your Choice");
      cin>>Lch;
      if(Lch=='A'||Lch=='a')
      {
      Aud(curr);
      Audiance=1;
      //goto p;
      }
     }
     else if(Audiance==1 && FiftyFifty==0 && DoubleDip==0)
     {
      outtextxy(60, 120, " Available LifeLines Are");
       outtextxy(60, 140, "    A.  Fifty Fifty");
     // cout<<"\n B. DOUBLE DIP\n ";
      outtextxy(60, 160, " Enter Your Choice");
      cin>>Lch;
      if(Lch=='A'||Lch=='a')
      {
      DD(curr);
     DoubleDip=1;
      //goto p;
      }
     }
     else
     {

      outtextxy(60, 120, " Sorry !!! You Have Used Your All LifeLines");
      //goto p;
     }
    }

    //-------------------------------------------------------------------------------------------
    //p:
   //cout<<"   Select Your Answer   "<<endl;

      outtextxy(120, 140,  "Select Your Answer ");
   ans=getche();
   cout<<endl;
   cleardevice();
   for(int i=0;i<strlen(curr.correct);i++)
   {
    if(curr.correct[i]==ans)
     flag=1;
   }
   if(flag==1)
   {
    count++;
    if(count==1)
      {
       PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     outtextxy(100, 100, "Congratulation You Have Won The 10,000 Rupees");
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     delay(3000);
    }
    else if(count==2)
      {
    PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     outtextxy(100, 100, "Congratulation You Have Won The 20,000 Rupees");
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     delay(3000);
    }
     else if(count==3)
      {
       PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     outtextxy(100, 100, "Congratulation You Have Won The 30,000 Rupees");
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     delay(3000);
    }
     else if(count==4)
      {
       PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     outtextxy(100, 100, "Congratulation You Have Won The 40,000 Rupees");
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     delay(3000);
    }
   }
   else if(flag==0)
   {
    outtextxy(100, 100, "Sorry !!! Your Answer Is Wrong Try Again Next Time");
     PlaySound(TEXT("kbc2"), NULL, SND_SYNC);
     cleardevice();
     delay(3000);
     outtextxy(100, 140, " You has not Win Any Amount");
     delay(3000);
    break;
   }
    cleardevice();
    outtextxy(100, 100, " Do You Want To Play With New Question (Y/N)? ");
   ques=getche();
   cout<<endl;
   cleardevice();
   if(ques=='n'||ques=='N')
    break;
   if(count==4 && flag==1)
    return 1;
 }
 fin.close();
}


int Player::ReadMedium()                   //READ MEDIUM
{

     int Audiance=0;
    int FiftyFifty=0;
    int DoubleDip=0;
    Admin A;
    int count=0;
    Node curr;
    char ans, ch, ques, Lch, baghu;
    outtextxy(80, 100," You Won The Fisrt Round");
    outtextxy(100,150,"PRESS ANY KEY ");
    baghu=getche();
    cleardevice();
    int n=baghu%10;
    cout<<n;
    int X;
    X=n*(sizeof(curr));
 ifstream fin;
 fin.open("medium.txt", ios::in| ios::binary);
 fin.seekg(X);
 while(fin.read((char*)&curr, sizeof(curr)))
 {
   int flag=0;
   char Life;
   A.Display(curr);
   cout<<endl;
   PlaySound(TEXT("kbc1"), NULL, SND_SYNC);
   delay(3000);
   outtextxy( 20, 20, " Do You Know the RIGTH Answer of this quesstion ? If  you don't know You can Quit Game" );
   outtextxy(20, 40, "  Do You  Want to Quit The Game (Y/N) ");
   ch=getche();
   cout<<endl;
   if(ch=='y'|ch=='Y')
    break;
    //---------------------------------------------------------------------------------------------------------------
     outtextxy(100, 80, "  Do You  Want to Use A Lifeline (Y/N) ");
    Life=getche();
    if(Life=='y'||Life=='Y')
    {
     if(Audiance==0 && FiftyFifty==0 && DoubleDip==0 )
     {
      outtextxy(60, 120, " Available LifeLines Are");
      outtextxy(60, 140, "    A.  Audiance Pole");
      outtextxy(60, 160, "    B.  Fifty Fifty");
       outtextxy(60, 180, " Enter Your Choice");
      cin>>Lch;
      if(Lch=='A'||Lch=='a')
      {
      Aud(curr);
      Audiance=1;
      }
      else if(Lch=='B'||Lch=='b')
      {
      DD(curr);
      DoubleDip=1;
      }

     }
     else if(Audiance==0 && FiftyFifty==0 && DoubleDip==1 )
     {

      outtextxy(60, 120, " Available LifeLines Are");
       outtextxy(60, 140, "   A.  Audiance Pole");
     // cout<<"\n B. DOUBLE DIP\n ";
      outtextxy(60, 160, " Enter Your Choice");
      cin>>Lch;
      if(Lch=='A'||Lch=='a')
      {
      Aud(curr);
      Audiance=1;
      //goto p;
      }
     }
     else if(Audiance==1 && FiftyFifty==0 && DoubleDip==0)
     {

      outtextxy(60, 120, " Available LifeLines Are");
       outtextxy(60, 140, "   A.  Fifty Fifty");
      outtextxy(60, 160, " Enter Your Choice");
      cin>>Lch;
      if(Lch=='A'||Lch=='a')
      {
      DD(curr);
     DoubleDip=1;
      //goto p;
      }
     }
     else
     {
      outtextxy(60, 120, " Sorry !!! You Have Used Your All LifeLines");
      //goto p;
     }
    }










      outtextxy(120, 140,  "Select Your Answer ");
   ans=getche();
   cout<<endl;
   cleardevice();
   for(int i=0;i<strlen(curr.correct);i++)
   {
    if(curr.correct[i]==ans)
     flag=1;
   }
   if(flag==1)
   {
    count++;
    if(count==1)
    {
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
    outtextxy(100, 100, "Congratulation You Have Won The 1,60,000 Rupees");
    PlaySound(TEXT("talwar"), NULL, SND_SYNC);
    PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     delay(3000);
    }
    else if(count==2)
    {
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     outtextxy(100, 100, "Congratulation You Have Won The 3,20,000 Rupees");
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     delay(3000);
    }
     else if(count==3)
      {
       PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     outtextxy(100, 100, "Congratulation You Have Won The 6,40,000 Rupees");
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     delay(3000);
    }
     else if(count==4)
     {PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     outtextxy(100, 100, "Congratulation You Have Won The 12,50,000 Rupees");
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     delay(3000);
    }
   }
   else if(flag==0)
   {
     outtextxy(100, 100, "Sorry !!! Your Answer Is Wrong Try Again Next Time");
      PlaySound(TEXT("kbc2"), NULL, SND_SYNC);
       cleardevice();
     delay(3000);
     outtextxy(100, 140, " You Won 80,000 Amount");
     delay(3000);
    break;
   }
    cleardevice();
    outtextxy(100, 100, " Do You Want To Play With New Question (Y/N)? ");
   ques=getche();
   cout<<endl;
   cleardevice();
   if(ques=='n'||ques=='N')
    break;
   if(count==4 && flag==1)
    return 1;
 }
 fin.close();
}

int Player::ReadHard()                               //READ HARD FILE
{
     int Audiance=0;
    int FiftyFifty=0;
    int DoubleDip=0;
    Admin A;
    int count=0;
   Node curr;
    char ans, ch, ques, Lch, baghu;
    outtextxy(80, 100," You Won The Second Round");
    outtextxy(100,150,"PRESS ANY KEY ");
    baghu=getche();
    cleardevice();
    int n=baghu%8;
    cout<<n;
    int X;
    X=n*(sizeof(curr));
 ifstream fin;
 fin.open("hard.txt", ios::in| ios::binary);
 fin.seekg(X);
 while(fin.read((char*)&curr, sizeof(curr)))
 {

   char Life;
   int flag=0;
   A.Display(curr);
   cout<<endl;
   PlaySound(TEXT("kbc1"), NULL, SND_SYNC);
   delay(3000);
   outtextxy( 20, 20, " Do You Know the RIGTH Answer of this quesstion ? If  you don't know You can Quit Game" );
   outtextxy(20, 40, "  Do You  Want to Quit The Game (Y/N) ");
   ch=getche();
   cout<<endl;
   if(ch=='y'|ch=='Y')
    break;
    //---------------------------------------------------------------------------------------------------------------
  outtextxy(100, 80, "  Do You  Want to Use A Lifeline (Y/N) ");
    Life=getche();
    if(Life=='y'||Life=='Y')
    {
     if(Audiance==0 && FiftyFifty==0 && DoubleDip==0 )
     {
      outtextxy(60, 120, " Available LifeLines Are");
      outtextxy(60, 140, "    A.  Audiance Pole");
      outtextxy(60, 160, "    B.  Fifty Fifty");
       outtextxy(60, 180, " Enter Your Choice");
      cin>>Lch;
      if(Lch=='A'||Lch=='a')
      {
      Aud(curr);
      Audiance=1;
      }
      else if(Lch=='B'||Lch=='b')
      {
      DD(curr);
      DoubleDip=1;
      }

     }
     else if(Audiance==0 && FiftyFifty==0 && DoubleDip==1 )
     {

      outtextxy(60, 120, " Available LifeLines Are");
       outtextxy(60, 140, "    A.  Audiance Pole");
     // cout<<"\n B. DOUBLE DIP\n ";
      outtextxy(60, 160, " Enter Your Choice");
      cin>>Lch;
      if(Lch=='A'||Lch=='a')
      {
      Aud(curr);
      Audiance=1;
      //goto p;
      }
     }
     else if(Audiance==1 && FiftyFifty==0 && DoubleDip==0)
     {

      outtextxy(60, 120, " Available LifeLines Are");
       outtextxy(60, 140, "   A.  Fifty Fifty");
      outtextxy(60, 160, " Enter Your Choice");
      cin>>Lch;
      if(Lch=='A'||Lch=='a')
      {
      DD(curr);
     DoubleDip=1;
      //goto p;
      }
     }
     else
     {
      outtextxy(60, 120, " Sorry !!! You Have Used Your All LifeLines");
      //goto p;
     }
    }






   //cout<<"   Select Your Answer   "<<endl;
   outtextxy(120, 140,  "Select Your Answer ");
   ans=getche();
   cout<<endl;
   cleardevice();
   for(int i=0;i<strlen(curr.correct);i++)
   {
    if(curr.correct[i]==ans)
     flag=1;
   }
   if(flag==1)
   {
    count++;
    if(count==1)
    {
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     outtextxy(100, 100, "Congratulation You Have Won The 50,00,000 Rupees");
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     delay(3000);
    }
    else if(count==2)
    {
     outtextxy(100, 100, "Congratulation You Have Won The 1,00,00,000 Rupees");
     delay(3000);
    }
   }
   else if(flag==0)
   {
    //cout<<"Sorry !!! Your Answer Is Wrong Try Again Next Time"<<endl;
     outtextxy(100, 100, "Sorry !!! Your Answer Is Wrong Try Again Next Time");
      PlaySound(TEXT("kbc2"), NULL, SND_SYNC);
       cleardevice();
     delay(3000);
     outtextxy(100, 140, " You Won 80,000 Amount");
     delay(3000);
    break;
   }
    cleardevice();
    outtextxy(100, 100, " Do You Want To Play With New Question (Y/N)? ");
   ques=getche();
   cout<<endl;
   cleardevice();
   if(ques=='n'||ques=='N')
    break;
   if(count==2 && flag==1)
    return 1;
 }
 fin.close();
}




int Player::ReadHardest()                               //READ HARDEST FILE
{

     int Audiance=0;
    int FiftyFifty=0;
    int DoubleDip=0;
    Admin A;
    int count=0;
    Node curr;
    char ans, ch, ques, Lch, baghu;
    outtextxy(80, 100," You Won The Third Round");
    outtextxy(100,150,"PRESS ANY KEY ");
    baghu=getche();
    cleardevice();
    int n=baghu%8;
    cout<<n;
    int X;
    X=n*(sizeof(curr));
 ifstream fin;
 fin.open("hardest.txt", ios::in| ios::binary);
 fin.seekg(X);
 while(fin.read((char*)&curr, sizeof(curr)))
 {
  char Life;
   int flag=0;
   A.Display(curr);
   cout<<endl;
   PlaySound(TEXT("kbc1"), NULL, SND_SYNC);
   delay(3000);
    outtextxy( 20, 20, " Do You Know the RIGTH Answer of this quesstion ? If  you don't know You can Quit Game" );
   outtextxy(20, 40, "  Do You  Want to Quit The Game (Y/N) ");
   ch=getche();
   cout<<endl;
   if(ch=='y'|ch=='Y')
    break;

    //---------------------------------------------------------------------------------------------------------------
      outtextxy(100, 80, "  Do You  Want to Use A Lifeline (Y/N) ");
    Life=getche();
    if(Life=='y'||Life=='Y')
    {
     if(Audiance==0 && FiftyFifty==0 && DoubleDip==0 )
     {
      outtextxy(60, 120, " Available LifeLines Are");
      outtextxy(60, 140, "   A.  Audiance Pole");
      outtextxy(60, 160, "   B.  Fifty Fifty");
       outtextxy(60, 180, " Enter Your Choice");
      cin>>Lch;
      if(Lch=='A'||Lch=='a')
      {
      Aud(curr);
      Audiance=1;
      }
      else if(Lch=='B'||Lch=='b')
      {
      DD(curr);
      DoubleDip=1;
      }

     }
     else if(Audiance==0 && FiftyFifty==0 && DoubleDip==1 )
     {

      outtextxy(60, 120, " Available LifeLines Are");
       outtextxy(60, 140, "   A.  Audiance Pole");
     // cout<<"\n B. DOUBLE DIP\n ";
      outtextxy(60, 160, " Enter Your Choice");
      cin>>Lch;
      if(Lch=='A'||Lch=='a')
      {
      Aud(curr);
      Audiance=1;
      //goto p;
      }
     }
     else if(Audiance==1 && FiftyFifty==0 && DoubleDip==0)
     {

      outtextxy(60, 120, " Available LifeLines Are");
       outtextxy(60, 140, "    A.  Fifty Fifty");
      outtextxy(60, 160, " Enter Your Choice");
      cin>>Lch;
      if(Lch=='A'||Lch=='a')
      {
      DD(curr);
     DoubleDip=1;
      //goto p;
      }
     }
     else
     {
      outtextxy(60, 120, " Sorry !!! You Have Used Your All LifeLines");
      //goto p;
     }
    }







   outtextxy(120, 140,  "Select Your Answer ");
   ans=getche();
   cout<<endl;
   cleardevice();
   for(int i=0;i<strlen(curr.correct);i++)
   {
    if(curr.correct[i]==ans)
     flag=1;
   }
   if(flag==1)
   {
    count++;
    if(count==1)
    {
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     outtextxy(100, 100, "Congratulation You Have Won The 7,00,00,000 Rupees");
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     delay(3000);
    }
    else if(count==2)
     {
      PlaySound(TEXT("talwar"), NULL, SND_SYNC);
      outtextxy(100, 100, "Congratulation You Have Won The 10,00,00,000 Rupees");
      PlaySound(TEXT("talwar"), NULL, SND_SYNC);
      PlaySound(TEXT("talwar"), NULL, SND_SYNC);
     delay(3000);
     }
   }
   else if(flag==0)
   {
     outtextxy(100, 100, "Sorry !!! Your Answer Is Wrong Try Again Next Time");
      PlaySound(TEXT("kbc2"), NULL, SND_SYNC);
       cleardevice();
     delay(3000);
     outtextxy(100, 140, " You Won 80,000 Amount");
     delay(3000);
    break;
   }
   cleardevice();
    outtextxy(100, 100, " Do You Want To Play With New Question (Y/N)? ");
   ques=getche();
   cout<<endl;
   cleardevice();
   if(ques=='n'||ques=='N')
    break;
   if(count==2 && flag==1)
    return 1;
 }
 fin.close();
}







Node Admin::CreatNode()
{
   Node temp;
   cout<<"Enter The Question"<<endl;
   gets(temp.Question);
   cout<<"Enter First Option"<<endl;
   gets(temp.ans1);
   cout<<"Enter Second Option"<<endl;
   gets(temp.ans2);
   cout<<"Enter third Option"<<endl;
   gets(temp.ans3);
   cout<<"Enter four Option"<<endl;
   gets(temp.ans4);
   cout<<"Enter Option"<<endl;
   gets(temp.correct);
   return temp;
}



void Admin::InsertInSimple()
{
    Node curr;
    //char ch;
    char ch;
    ofstream fout;
    fout.open("simple.txt", ios::out|ios::app|ios::binary);
    while(1)
    {
	curr=CreatNode();
        fout.write((char*)&curr,sizeof(curr));
        cout<<"DO YOU WANT TO ADD NEW QUESTION (Y/N)??"<<endl;
	       ch=getche();
	       cout<<endl;
        //cin>>ch;
        if(ch=='n'||ch=='N')
        break;
    }
    fout.close();
}


void Admin::InsertInMedium()
{
    Node curr;
    //char ch;
    char ch;
    ofstream fout;
    fout.open("medium.txt", ios::out|ios::app|ios::binary);
    while(1)
    {
        curr=CreatNode();
        fout.write((char*)&curr,sizeof(curr));
        cout<<"DO YOU WANT TO ADD NEW QUESTION (Y/N)??"<<endl;
	       ch=getche();
	       cout<<endl;
        //cin>>ch;
        if(ch=='n'||ch=='N')
        break;
    }
    fout.close();
}



void Admin::InsertInHard()
{
    Node curr;
    //char ch;
    char ch;
    ofstream fout;
    fout.open("hard.txt", ios::out|ios::app|ios::binary);
    while(1)
    {
        curr=CreatNode();
        fout.write((char*)&curr,sizeof(curr));
        cout<<"DO YOU WANT TO ADD NEW QUESTION (Y/N)??"<<endl;
	       ch=getche();
	       cout<<endl;
        //cin>>ch;
        if(ch=='n'||ch=='N')
        break;
    }
    fout.close();
}


void Admin::InsertInHardest()
{


    Node curr;
    //char ch;
    char ch;
    ofstream fout;
    fout.open("hardest.txt", ios::out|ios::app|ios::binary);
    while(1)
    {
        curr=CreatNode();
        fout.write((char*)&curr,sizeof(curr));
        cout<<"DO YOU WANT TO ADD NEW QUESTION (Y/N)??"<<endl;
	       ch=getche();
	       cout<<endl;
        //cin>>ch;
        if(ch=='n'||ch=='N')
        break;
    }
    fout.close();
}





void Admin::Display(Node temp)   //DISPLAY
{
   for(int i=310; i<340; i++)
   {
    for(int j=40; j<560; j++)
    {
     putpixel(j,i,10);
    }
   }
   outtextxy(60,320, temp.Question);
      for(int i=350; i<380; i++)
   {
    for(int j=40; j<280; j++)
    {
     putpixel(j,i,5);
    }
   }
   outtextxy(60,360, temp.ans1);
      for(int i=350; i<380; i++)
   {
    for(int j=320; j<560; j++)
    {
     putpixel(j,i,5);
    }
   }
   outtextxy(340,360, temp.ans2);
      for(int i=390; i<420; i++)
   {
    for(int j=40; j<280; j++)
    {
     putpixel(j,i,5);
    }
   }
   outtextxy(60,400, temp.ans3);
      for(int i=390; i<420; i++)
   {
    for(int j=320; j<560; j++)
    {
     putpixel(j,i,5);
    }
   }
   outtextxy(340,400, temp.ans4);
   cout<<temp.correct<<endl;
   cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
   //delay(1000);
   //cleardevice();
}

void Admin::Display1(Node temp)   //DISPLAY
{

   outtextxy(60,100, temp.Question);
   //cout<<"A  "<<temp.ans1;
   outtextxy(60,140, temp.ans1);
   //cout<<"                                 B  "<<temp.ans2<<endl;
   outtextxy(200,140, temp.ans2);
   //cout<<"C  "<<temp.ans3<<endl;
   outtextxy(60,180, temp.ans3);
   //cout<<"                                   D "<<temp.ans4<<endl;
   outtextxy(200,180, temp.ans4);
   cout<<temp.correct<<endl;
   cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
   delay(1000);
   cleardevice();
}



void Admin::ReadFromMedium()
{
 Node curr;
 ifstream fin;
 fin.open("medium.txt", ios::in| ios::binary);
 while(fin.read((char*)&curr, sizeof(curr)))
 {
   Display1(curr);
 }
}


void Admin::ReadFromSimple()
{
 Node curr;
 ifstream fin;
 fin.open("simple.txt", ios::in| ios::binary);
 while(fin.read((char*)&curr, sizeof(curr)))
 {
   Display1(curr);
 }
}

void Admin::ReadFromHard()
{
 Node curr;
 ifstream fin;
 fin.open("hard.txt", ios::in| ios::binary);
 while(fin.read((char*)&curr, sizeof(curr)))
 {
   Display1(curr);
 }
}

void Admin::ReadFromHardest()
{
 Node curr;
 ifstream fin;
 fin.open("hardest.txt", ios::in| ios::binary);
 while(fin.read((char*)&curr, sizeof(curr)))
 {
  Display1(curr);
 }
}


int main()
{

   int gd,gm,th;
   gd=DETECT;
   initgraph(&gd,&gm,NULL);
   int maxX=getmaxx();
   int maxY=getmaxy();
   cout<<endl;
   cout<<maxX<<"  "<<maxY;
   char choice,ch, ch1;
   char type,Ex;
   Admin A;
   Player P;
   char password[50];
  // char pass[50];
  // pass='@bhi$hek';
   //cout<<"************************WELCOME TO JACKPOT GAME*******************************"<<endl;
   outtext("****************************** WELCOME TO JACKPOT GAME  ************************************");
   while(1)
   {
   q://cout<<"     Enter User Type "<<endl;
   outtextxy(200, 40,"  Enter User Type ");
   //cout<<"     Enter A for Admin"<<endl;
   outtextxy(200, 60,"  Enter A for Admin ");
   //cout<<"     Enter B For Player"<<endl;
   outtextxy(200, 80,"  Enter B for Player ");

    type=getche();
    cout<<endl;
    cleardevice();
    //getch();
    if(type=='A'||type=='a')
    {
     //cout<<"     Enter The PassWord"<<endl;
     outtextxy(100, 100,"  Enter The PassWord");
     gets(password);
     if(strcmp(password, "@bhi$hek")==1)
     {
     exit(0);
     }
     else
     {
      cleardevice();
      //cout<<"**********************WELCOME ADMIN**************************"<<endl;
      outtextxy(20, 00, "**********************WELCOME ADMIN************************** ");
      while(1)
     {
     // cout<<"   A. Enter Question In Simple File  "<<endl;
      outtextxy(20, 20, "A. Enter Question In Simple File  ");
       outtextxy(20, 40, "B. Enter Question In Simple File  ");
       outtextxy(20, 60, "C. Enter Question In Simple File  ");
       outtextxy(20, 80, "D. Enter Question In Simple File  ");
       outtextxy(20, 100, " E. Read Data Of Simple File  ");
       outtextxy(20, 120, "F. Read Data Of  Medium File  ");
       outtextxy(20, 140, "G.Read Data Of Hard File ");
       outtextxy(20, 160, "H. Read Data Of Hardest File  ");
      p:
       outtextxy(60, 200, " Enter Your Choice");
      //cin>>choice;
      choice=getche();
      cout<<endl;
      cleardevice();
      if(choice=='A'||choice=='a')
        A.InsertInSimple();
       else if(choice=='B'||choice=='b')
        A.InsertInMedium();
       else if(choice=='C'||choice=='c')
        A.InsertInHard();
       else if(choice=='D'||choice=='d')
        A.InsertInHardest();
       else if(choice=='E'||choice=='e')
        A.ReadFromSimple();
       else if(choice=='F'||choice=='f')
        A.ReadFromMedium();
        else if(choice=='G'||choice=='g')
        A.ReadFromHard();
       else if(choice=='H'||choice=='h')
        A.ReadFromHardest();
       else
       {
        cout<<"InValid Input"<<endl;
        goto p;
      }
      cout<<"Do You Want To Exit  (Y/N)"<<endl;
      Ex=getche();
      if(Ex=='Y'||Ex=='y')
       break;
     }
     }
    }
    else if(type=='b'||type=='B')
    {
       char y;
       int a,b,c,d;

       outtextxy(80, 60, "Press");
       outtextxy(80, 80, "A.  Start");
       outtextxy(80, 100, "B.  Exit");
       y=getche();
       cleardevice();
       if(ch=='b'||ch=='B')
       return 0;

       //cout<<"      Lets play The jackopt Game     "<<endl;
       outtextxy(100, 100, "Let's Play The Jackpot Game ");
       PlaySound(TEXT("kbc"), NULL, SND_SYNC);
       //delay(3000);
       cleardevice();
       a=P.ReadSimple();
       //a=P.ReadSimple();
       if(a==1)
       {
        //P.ReadMedium();
         b=P.ReadMedium();
         if(b==1)
         {
          //P.ReadHard();
          c=P.ReadHard();
          if(c==1)
          {
           P.ReadHardest();
          }
         }
       }
    }
    else
    {
     //cleardevice();
     outtextxy(20,20, "you have entered Wrong choice");
     delay(2000);
     cleardevice();
     goto q;

    }
    cleardevice();
    outtextxy(100, 100, "Do You Want To Continue (Y/N)");
    ch1=getche();
    cleardevice();
    if(ch1=='n'||ch1=='N')
     break;
   }
   return 0;
}
