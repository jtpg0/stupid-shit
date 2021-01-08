#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main () {
string input;
int random;
loop:
printf("you:\n");
getline(cin, input);
random = rand() % 7 + 1;
if( random == 1 ) {
    printf("\nbot:\nhaha same\n\n");
}else if( random == 2 ) {
    printf("\nbot:\nthats cool dude\n\n");
}else if( random == 3 ) {
    printf("\nbot:\npretty epic ngl\n\n");
}else if( random == 4 ) {
    printf("\nbot:\ntkinda cringe bro\n\n");
}else if( random == 5 ) {
    printf("\nbot:\nvery swag\n\n");
}else if( random == 6 ) {
    printf("\nbot:\nthats radical surfer bro\n\n");
}else if( random == 7 ) {
    printf("\nbot:\nwow youre lucky\n\n");
}
goto loop;
}
