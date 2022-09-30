#include<iostream> // for IO operations
#include<cstdlib>  //  for random operation
#include<cstdio>  //  for random operation




int roll()     ///function for getting random number
{
   int number=rand();  // generate random number
   return (number%6)+1;
}

void show_dice(int number)  /// function for printing number
{
   system("cls");
   std::cout<<" _____"<<std::endl;
   std::cout<<"|     |"<<std::endl;
   std::cout<<"|  "<<number<<"  |"<<std::endl;
   std::cout<<"|_____|"<<std::endl;
}



int main()   // main function
{
   while(1) // infinite loop according to user wish
   {
   system("cls");  //screen clear
   std::cout<<"\nPRESS ANY KEY TO ROLL DICE\n";
   std::cin.get();
   show_dice(roll()); //showing dice
   std::cout<<"\n PRESS 1 TO EXIT OR PRESS ANYTHING TO CONTINUE\n";
   char c=std::cin.get();;
   if(c=='1')break; // exiting loop
   }
   return 0;  //returning 0
}

