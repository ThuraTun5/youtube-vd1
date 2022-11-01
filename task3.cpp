// Task 3 

// Write a prgram that stores students' exam marks in an array. Then, display them from highest to lowest. 
// Finally calculate the average marks.

#include <iostream>
#include <cstring>

using namespace std;

class Students {
    private:
        string name;
        int score;
    public:
        Students() : name(""), score(0) {}
        Students(string s, int ss) : name(s), score(ss) {}

        void getData () {
            cout << "Enter name: "; cin >> name;
            cout << "Enter score: "; cin >> score; 
        }

        void showData () {
            cout << "\nName: " << name << endl << "Score: " << score << endl;
        }

        void sortDsc (Students s[], int n) { // From highest to lowest
            for (int j=0; j<n; j++) {
                for (int i=0; i<n; i++) {
                    if(s[i].score < s[i+1].score){
                        Students temp = s[i];
                        s[i] = s[i+1];
                        s[i+1] = temp;
                    }
                }
            }
        }

        void adding ( Students s1, Students s2) {
            score = s1.score + s2.score;
        }

        void dividing (Students s, int divisor) {
            score = s.score / divisor;
        }

        void showAverage () {
            cout << name << ": " << score << endl;
        }
};

int main () {
    Students stds[10];
    int n=0;
    char ch;
    Students average("Average", 0);

    do {
        stds[n++].getData();
        cout << "Enter another (y/n) ?: ";
        cin >> ch;
    } while ( ch != 'n');

    cout << "Students and their scores: " << endl << "---------------------------" << endl;
    for (int i=0; i<n; i++) {
        stds[i].showData();
    }
    cout << endl;

    cout << "From Highest to Lowest scores: " << endl << "-----------------------------" << endl;
    stds[n].sortDsc(stds, n);
    for (int j=0; j<n; j++) {
        stds[j].showData();
    }

    for (int i=0; i<n; i++ ) {
        average.adding(average, stds[i]);
    }
    average.dividing(average, n);
    cout << endl;
    average.showAverage();

    return 0;
}