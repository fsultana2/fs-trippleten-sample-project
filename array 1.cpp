//homework 9 problem 1
#include <iostream>
#include <string>

using namespace std;
void try_to_read_str(string &input);
void calcRank(int);
int getAnswers(string arr[]);

int main() {
  string arr[10];
  int count = 0;

  cout << "Welcome to the 'How California Are You?' survey!" << endl << endl;
  // TOTAL QUESTIONS WRITE IN ARRAY
  arr[0] = "Do you know the state flower of California? ";
  arr[1] = "Can you find Sacramento on a map? ";
  arr[2] = "Do you know what 'animal style is? ";
  arr[3] = "Do you surf? ";
  arr[4] = "Have you ever felt an earthquake? ";
  arr[5] = "Do you always place compost in the correct bin? ";
  arr[6] = "Are you bothered by rain? ";
  arr[7] = "Do you consider 55-degree weather cold? ";
  arr[8] = "Do you know when Cesar Chavez Day is? ";
  arr[9] = "Do you eat avocado at least once a week? ";
  int rank = getAnswers(arr);
  cout << "\nYou answered yes " << rank << " times"
       << "." << endl;
  calcRank(rank);
  cout << "coded by Fhameda Sultana" << endl;
  return 0;
}

int getAnswers(string arr[]) {
  char choice[10];
  int count = 0;
  // GET THE SERVIVE FROM USER
  for (int i = 0; i < 10; i++) {
    cout << arr[i];
    cin >> choice[i];
    // COUNT how many yes
    if (tolower(choice[i]) == 'y') {
      count++; // REAPEAT DATA
    }
  }
  return count;
}

void calcRank(int rank) {
  // Calculate rank base on count.
  if (rank >= 0 && rank <= 2) {
    string name = "novice";
    cout << "Your California rank is: " << name << "." << endl;
  } else if (rank >= 3 && rank <= 5) {
    string name = "apprentice";
    cout << "Your California rank is: " << name << "." << endl;
  }
  else if (rank >= 6 && rank <= 8) {
    string name = "adept";
    cout << "Your California rank is: " << name << "." << endl;
  } else if (rank >= 9 && rank <= 10) {
    string name = "expert";
    cout << "Your California rank is: " << name << "." << endl;
  }
}
/*Welcome to the 'How California Are You?' survey!

Do you know the state flower of California? y
Can you find Sacramento on a map? y
Do you know what 'animal style is? y
Do you surf? n
Have you ever felt an earthquake? y
Do you always place compost in the correct bin? y
Are you bothered by rain? n
Do you consider 55-degree weather cold? n
Do you know when Cesar Chavez Day is? y
Do you eat avocado at least once a week? y

You answered yes 7 times.
Your California rank is: adept.
coded by Fhameda Sultana*/
