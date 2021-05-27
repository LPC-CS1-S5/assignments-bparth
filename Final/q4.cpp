#include <iostream>
#include <cstring>
using namespace std;

void findStr(string d, char t[]);

int main(){
char  userinput[20]; // made a character array for the user input instead of a string, since this is easier.

string words= "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";

cout << "Enter user string "<<endl; // gives out the terminal output to the user
cin >> userinput; // sabse the user input into the char array made above.

findStr(words, userinput);

}

void findStr(string main, char find[]){
  int m = main.length(); // length of the main string which if that huge paragraph given above.
  int n = strlen(find); // gives the lenght f the small user inputed string. 

  for(int i = 0 ; main[i] != NULL; i++ ){
    //this loops through each and every character in the big paragraph until the thing becomes null. 
    int j ;
    for(j = 0; find[j] != NULL;j++ ){
      // loops througth the user inputed string in hopes of matching it with the bigger paragraph. 
      if(main[i+j] != find[j]){
        break; //this if statement goes through the array of the big paragraph and eertime it doesnt meet the condition it breaks out and goes to the following if statement
    }
    if(j == n ){
        cout<< "The index of matching string is: "<< i+1<<endl;
      } //after breaking from that previos loop it sees if this condition is true, then we have found the index
    }
  }
  cout<< "Lol your string doesnt exist in the paragraph"<< endl; 
  
}