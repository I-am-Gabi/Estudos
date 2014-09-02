// ALUNO ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include <iostream>
using namespace std;

int min(int a, int b) { return (a < b)? a : b; }
char min(char a, char b) { return (a < b)? a : b; }
float min(float a, float b) { return (a < b)? a : b; }
int main (){

cout << min(10,5) << endl;
cout << min('c','a') << endl;	
cout << min(10.5f,5.5f) << endl;	
}