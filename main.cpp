/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
    
    using namespace std;
    
    int main() {
    int x = 0;//variable used to pick which person will be picked 
      int p1=0;// the choices they pick 
      int p2=0;
      int p3=0;
      int x1 = 0;
      int x2 = 0;
      int plysc = 0;//the players score 
      int cpusc = 0; //the computers score
      cout << "********************************************** \n";
      cout << "Welcome to Two Truths and a Lie \n";
      cout << "There are 3 players to choose from today. Your job is to view their statements and choose which one is a lie! \n";
      cout << "You have two tries to guess the right answer. If you guess the lie, you get a point; if not the players get a point. \n";
      cout << "The team with the most points wins! \n";
      cout << "**********************************************";
      cout << "\n";
      cout << "#### \n";
      cout << "ROUND 1! \n";
      cout << "#### \n";
      cout << "Please enter the number of the player you want to choose \n";
      cout << "1 - Carissa \n";
      cout << "2 - jaylon \n";
      cout << "3 - Erin \n";
      cout << "Type a number: ";
      cin >> x;
      cout << " \n";
        switch (x){
          case 1://the real case
          x1 = x;
            cout << "you have choosen Carissa \n";
            cout << "you get two tries to guess the lie \n";
            cout << "Here are Carissa's statements: \n";
            cout << "1. I wash my hands 20 times a day \n";
            cout << "2. I started driving at 30 years old \n";
            cout << "3. My dog has 3 legs \n";
            cout << "Which one is the lie? (enter the number of the statement) \n";
            cin >> p1;
            
            if (p1 > 3|| p1 < 1 ){
              cout << "please pick a number 1 to 3 for a acceptable answer";
              cin >> p1;
            }
              if (p1==1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
    if(p1 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
    }
    if(p1 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
    }
    if(p2 == 1){
                   cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
    if(p2 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
      
    }
    if(p2 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
                
    }
    
      cout << "ROUND 2! \n";
      cout << "#### \n";
      cout << "Please enter the number of the player you want to choose \n";
      cout << "1 - Carissa \n";
      cout << "2 - jaylon \n";
      cout << "3 - Erin \n";
      cout << "Type a number: ";
      cin >> x;
      cout << " \n";
    if (x = 1){
      cout << "You already guessed for that player \n ";
      cout << "Please choose again, but not 1: \n";
      cout << x;
      cin >>x;
     }
    switch (x){
    case 2:
            cout << "you have chosen Jaylon \n";
            x2 = x;
            cout << "you get two tries to guess the lie \n";
            cout << "Here are Jaylon's statements: \n";
            cout << "1. I met an elvis impersonator in vegas last year \n";
            cout << "2. I keep emergency lego in my desk \n";
            cout << "3. I have 3 children \n";
            cout << "Which one is the lie? (enter the number of the statement) \n";
            cin >> p1;
            
            if (p1 > 3|| p1 < 1 ){
              cout << "please pick a number 1 to 3 for a acceptable answer";
              cin >> p1;
            }
              if (p1==1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
                if(p1 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p1 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p2 == 1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
                }
                if(p2 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
      
                }
                if(p2 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
    
            
            break;
            
            case 3:
            cout << "you have chosen Erin \n";
            x2 = x;
            cout << "you get two tries to guess the lie \n";
            cout << "Here are Erin's statements: \n";
            cout << "1. I caught a home run ball at White Sox stadium in 2017. \n";
            cout << "2. My parents are both professional fire eaters \n";
            cout << "3. I have had a job at every major coffee chain in the USA Which one is the lie? (enter the number of the statement) \n";
            cout << "Which one is the lie? (enter the number of the statement) \n";
            cin >> p1;
            
            if (p1 > 3|| p1 < 1 ){
              cout << "please pick a number 1 to 3 for a acceptable answer";
              cin >> p1;
              x2 = x;
            }
              if (p1==1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
                  
              }
                if(p1 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p1 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p2 == 1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
                }
                if(p2 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
      
                }
                if(p2 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
    
            
            break;
              }
    
    
    
    
    
              
            
            case 2://the real 
            cout << "you have chosen Jaylon \n";
            x1 = x;
            cout << "you get two tries to guess the lie \n";
            cout << "Here are Jaylon's statements: \n";
            cout << "1. I met an elvis impersonator in vegas last year \n";
            cout << "2. I keep emergency lego in my desk \n";
            cout << "3. I have 3 children \n";
            cout << "Which one is the lie? (enter the number of the statement) \n";
            cin >> p1;
            
            if (p1 > 3|| p1 < 1 ){
              cout << "please pick a number 1 to 3 for a acceptable answer";
              cin >> p1;
              x1 = x;
            }
              if (p1==1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
                if(p1 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p1 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p2 == 1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
                }
                if(p2 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
      
                }
                if(p2 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
    
            
            break;
            "#### \n";
      cout << "ROUND 2! \n";
      cout << "#### \n";
      cout << "Please enter the number of the player you want to choose \n";
      cout << "1 - Carissa \n";
      cout << "2 - jaylon \n";
      cout << "3 - Erin \n";
      cout << "Type a number: ";
      cin >> x;
    cout << " \n";
    if (x = 1){
    cout << "You already guessed for that player \n";
    cout << "Please choose again, but not 1: \n";
    cout << x;
    cin >>x;
    }
    switch (x){
    case 1:
            cout << "you have choosen Carissa \n";
            x2 = x;
            cout << "you get two tries to guess the lie \n";
            cout << "Here are Carissa's statements: \n";
            cout << "1. I wash my hands 20 times a day \n";
            cout << "2. I started driving at 30 years old \n";
            cout << "3. My dog has 3 legs \n";
            cout << "Which one is the lie? (enter the number of the statement) \n";
            cin >> p1;
            
            if (p1 > 3|| p1 < 1 ){
              cout << "please pick a number 1 to 3 for a acceptable answer";
              cin >> p1;
              x2 = x;
            }
              if (p1==1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
    if(p1 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
    }
    if(p1 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
    }
    if(p2 == 1){
                   cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
    if(p2 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
      
    }
    if(p2 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left ";
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left ";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
                
    }
    
            break;
            
            
            case 3://the real
            cout << "you have chosen Erin \n";
            x1 = x;
            cout << "you get two tries to guess the lie \n";
            cout << "Here are Erin's statements: \n";
            cout << "1. I caught a home run ball at White Sox stadium in 2017. \n";
            cout << "2. My parents are both professional fire eaters \n";
            cout << "3. I have had a job at every major coffee chain in the USA Which one is the lie? (enter the number of the statement) \n";
            cout << "Which one is the lie? (enter the number of the statement) \n";
            cin >> p1;
            
            if (p1 > 3|| p1 < 1 ){
              cout << "please pick a number 1 to 3 for a acceptable answer";
              cin >> p1;
              x1 = x;
            }
              if (p1==1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
                  
              }
                if(p1 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p1 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p2 == 1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
                }
                if(p2 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
      
                }
                if(p2 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
    
            
            break;
            cout << "ROUND 2! \n";
      cout << "#### \n";
      cout << "Please enter the number of the player you want to choose \n";
      cout << "1 - Carissa \n";
      cout << "2 - jaylon \n";
      cout << "3 - Erin \n";
      cout << "Type a number: ";
      cin >> x;
      cout << " \n";
    if (x = 1){
      cout << "You already guessed for that player \n ";
      cout << "Please choose again, but not 1: \n";
      cout << x;
      cin >>x;
     }
    switch (x){
    case 2:
            cout << "you have chosen Jaylon \n";
            x2 = x;
            cout << "you get two tries to guess the lie \n";
            cout << "Here are Jaylon's statements: \n";
            cout << "1. I met an elvis impersonator in vegas last year \n";
            cout << "2. I keep emergency lego in my desk \n";
            cout << "3. I have 3 children \n";
            cout << "Which one is the lie? (enter the number of the statement) \n";
            cin >> p1;
            
            if (p1 > 3|| p1 < 1 ){
              cout << "please pick a number 1 to 3 for a acceptable answer";
              cin >> p1;
              x2=x;
            }
              if (p1==1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
                if(p1 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p1 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p2 == 1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
                }
                if(p2 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
      
                }
                if(p2 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
    
            
            break;
            
             case 1:
            cout << "you have choosen Carissa \n";
            x2 = x;
            cout << "you get two tries to guess the lie \n";
            cout << "Here are Carissa's statements: \n";
            cout << "1. I wash my hands 20 times a day \n";
            cout << "2. I started driving at 30 years old \n";
            cout << "3. My dog has 3 legs \n";
            cout << "Which one is the lie? (enter the number of the statement) \n";
            cin >> p1;
            
            if (p1 > 3|| p1 < 1 ){
              cout << "please pick a number 1 to 3 for a acceptable answer";
              cin >> p1;
            }
              if (p1==1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
    if(p1 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
    }
    if(p1 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
    }
    if(p2 == 1){
                   cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
    if(p2 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
      
    }
    if(p2 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
              
      
    }
                
    }
               
    }
    cout << "#### \n";
  cout << "ROUND 3! \n";
  cout << "#### \n";
  cout << "Please enter the number of the player you want to choose \n";
  cout << "1 - Carissa \n";
  cout << "2 - jaylon \n";
  cout << "3 - Erin \n";
  cout << "Type a number: ";
  cin >> x;

    if (x == x1|| x==x2){
    cout << "You already guessed for that player";
    cout << "Please choose again, but not 2: ";
    cout << x;
    }
    if (x==x1 ||x == x2){
    cout << "You already guessed for that player";
    cout << "Please choose again, but not 2: ";
    cout << x;
    }
if (x = 1){
cout << "you have choosen Carissa \n";
            x2 = x;
            cout << "you get two tries to guess the lie \n";
            cout << "Here are Carissa's statements: \n";
            cout << "1. I wash my hands 20 times a day \n";
            cout << "2. I started driving at 30 years old \n";
            cout << "3. My dog has 3 legs \n";
            cout << "Which one is the lie? (enter the number of the statement) \n";
            cin >> p1;

}
if (p1==1){
            cout << "You're Correct!!! \n";
            cout << "The score is currently: \n";
            plysc++;
            cout << "Game plays: ";
            cout << cpusc;
            cout << " \n";
            cout << "You: ";
            cout << plysc;
            cout << " \n";
}
if(p1 == 2){
            cout << "That statement is TRUE!";
            cout << "\n";
            cout << "You have one more guess left";
            cout << "Which one is the lie? (enter the number of the statement)";
            cin >> p2;  
}
if(p1 == 3){
            cout << "That statement is TRUE!";
            cout << "\n";
            cout << "You have one more guess left";
            cout << "Which one is the lie? (enter the number of the statement)";
            cin >> p2;  
}
if(p2 == 1){
               cout << "You're Correct!!! \n";
            cout << "The score is currently: \n";
            plysc++;
            cout << "Game plays: ";
            cout << cpusc;
            cout << " \n";
            cout << "You: ";
            cout << plysc;
            cout << " \n";
}
if(p2 == 2){
            cout << "That statement is TRUE!";
            cout << "\n";
            cout << "You have no more guess left";
             cpusc++;
            cout << "Game plays: ";
            cout << cpusc;
            cout << " \n";
            cout << "You: ";
            cout << plysc;
            cout << " \n";
  
}
if(p2 == 3){
            cout << "That statement is TRUE!";
            cout << "\n";
            cout << "You have no more guess left";
            cout << "That statement is TRUE!";
            cout << "\n";
            cout << "You have no more guess left";
             cpusc++;
            cout << "Game plays: ";
            cout << cpusc;
            cout << " \n";
            cout << "You: ";
            cout << plysc;
            cout << " \n";
            
}
            if (x = 2){
                cout << "you have chosen Jaylon \n";
            x2 = x;
            cout << "you get two tries to guess the lie \n";
            cout << "Here are Jaylon's statements: \n";
            cout << "1. I met an elvis impersonator in vegas last year \n";
            cout << "2. I keep emergency lego in my desk \n";
            cout << "3. I have 3 children \n";
            cout << "Which one is the lie? (enter the number of the statement) \n";
            cin >> p1;
            
            if (p1 > 3|| p1 < 1 ){
              cout << "please pick a number 1 to 3 for a acceptable answer";
              cin >> p1;
            }
              if (p1==1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
                if(p1 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p1 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p2 == 1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
                }
                if(p2 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
      
                }
                if(p2 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
            }
                if (x = 3){
                    cout << "you have chosen Erin \n";
            x2 = x;
            cout << "you get two tries to guess the lie \n";
            cout << "Here are Erin's statements: \n";
            cout << "1. I caught a home run ball at White Sox stadium in 2017. \n";
            cout << "2. My parents are both professional fire eaters \n";
            cout << "3. I have had a job at every major coffee chain in the USA Which one is the lie? (enter the number of the statement) \n";
            cout << "Which one is the lie? (enter the number of the statement) \n";
            cin >> p1;
            
            if (p1 > 3|| p1 < 1 ){
              cout << "please pick a number 1 to 3 for a acceptable answer";
              cin >> p1;
              x2 = x;
            }
              if (p1==1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
                  
              }
                if(p1 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p1 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have one more guess left";
                cout << "Which one is the lie? (enter the number of the statement)";
                cin >> p2;  
                }
                if(p2 == 1){
                cout << "You're Correct!!! \n";
                cout << "The score is currently: \n";
                plysc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
                }
                if(p2 == 2){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
      
                }
                if(p2 == 3){
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                cout << "That statement is TRUE!";
                cout << "\n";
                cout << "You have no more guess left";
                 cpusc++;
                cout << "Game plays: ";
                cout << cpusc;
                cout << " \n";
                cout << "You: ";
                cout << plysc;
                cout << " \n";
    }
                }
            
            
                if(cpusc > plysc){
                  cout <<"^^^^^^^^^^^^^^^^^^^^^^^^^^ \n";
                  cout << "FINAL SCORE:";
                  cout <<  "        You have ";
                  cout << plysc;
                  cout << " point";
                  cout << "\n";
                  cout << "        The players have: ";
                  cout << cpusc;
                  cout << " points";
                  cout << " \n";
                  cout << "^^^^^^^^^^^^^^^^^^^^^^^^";
                  cout << "You loose too bad. ";
              }
              if(cpusc < plysc){
                  cout <<"^^^^^^^^^^^^^^^^^^^^^^^^^^ \n";
                  cout << "FINAL SCORE:";
                  cout <<  "        You have ";
                  cout << plysc;
                  cout << " point";
                  cout << "\n";
                  cout << "        The players have: ";
                  cout << cpusc;
                  cout << " points";
                  cout << " \n";
                  cout << "^^^^^^^^^^^^^^^^^^^^^^^^";
                  cout << "You won!! Great Job!!";
              }
        }
    }

          
    
  

