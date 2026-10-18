#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char subjects[3][19] = {"Math", "Physics", "Chemistry"};
    char names[5][19];
    int marks[5][3];
    int total[5];
    double average[5];

cout<<"**************** Student Mark Table ****************"<<endl;
cout<<endl;

// store 5 students names
cout<<"Enter name of the students:"<<endl;

for (int i = 0; i < 5; i++) {
    cout<<"Student "<<i + 1<<" : ";
    cin.getline(names[i], 19);
}

// store marks in a two dimensional array

for (int i = 0; i < 5; i++) {
    cout<<"Enter "<<names[i]<<" marks: "<<endl;
    total[i] = 0;
    for(int j = 0; j < 3; j++) {
        cout<<subjects[j]<<" : ";
        cin>>marks[i][j];

        // compute each total and average
        total[i] += marks[i][j];
    }
    average[i] = total[i] / 3.0;
}

cout<<endl;

// print the table
cout<<left;
cout<<setw(20)<<"Names";

for (int j = 0; j < 3; j++) {
    cout<<left;
    cout << setw(20) << subjects[j];
}

cout<<setw(20)<<"Total";
cout<<setw(20)<<"Average"<<endl;

for (int i = 0; i < 5; i++) {
    cout<<left;
    cout<<setw(20)<<names[i];

    for(int j = 0; j < 3; j++) {
        cout<<left;
        cout<<setw(20)<<marks[i][j];
    }

    cout<<left;
    cout<<setw(20)<<total[i];
    cout<<setw(20)<<average[i]<<endl;
}

// show the top student
double top = average[0];
for (int i = 0; i < 5; i++) {
    if (average[i] > top) top = average[i];
}

cout<<endl;

for (int i = 0; i < 5; i++) {
    if (top == average[i]) {
        cout<<endl;
        cout<<"Top student : "<<names[i]<<endl;
    }
}

cout<<endl;
cout<<"**********************************************************"<<endl;
}
