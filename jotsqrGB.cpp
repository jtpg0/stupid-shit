/*
                                __ 
                               |\ \   __ 
                               \ \ \ |\ \
                                \ \ \ \\ \ 
                                / /  \ \\_\ 
                               / / /\ \ \__\ 
                              / / /\ \ \
                             / / /  \ \ \
                            / / /    \ \ \
                           / / /______\ \ \
                          / / /________\_\ \
                         /_/________________\
                         \__________________/
                         
_____________________________________________________________________
\_______  \\ \  ____ \\ \___   ___\\ \  ,--, \\ \  _____\\ \  _______\
 \_____ \  \\ \ \  \\ \\___ \  \__| \ \ \\__\_\\ \ \____|_\ \ \______|
       \ \  \\ \ \  \\ \   \ \  \    \ \ \____| \ \  _____\\ \ \    _______
        \ \  \\ \ \  \\ \   \ \  \    \ \ \      \ \ \_____\\ \ \   \__  __\
   ______\_\  \\ \ \__\\ \   \ \  \    \ \ \      \ \ \______\ \ \___\_\ \_|    
   \___________\\_\_______\   \_\__\    \_\_\      \_\_______\\_\_________\   __
    \__________| \________|    \___|     \__|       \________| \__________|   \_\
*/
#include <iostream>
using namespace std;
int main(){
   int num = 0;
   printf("\x1b[38;5;255m{============================}\x1b[0;0m\x1b[38;5;37m\n  ___ ___ _____ ___ ___ ___  \x1b[0;0m\n\x1b[38;5;44m |__ | _ |_   _| __| _ |(_)| \x1b[0;0m\n\x1b[38;5;51m  _| ||_|| | | |__ |(_)|  _| \x1b[0;0m\n\x1b[38;5;123m |___|___| |_| |___|__\\\\|\\_\\ \x1b[38;5;255m\n\n{===========================}\n\033[0m");
   while(true){
   habibihamood:
   printf("Type in your number: ");
   cin >> num;
   /*if(cin.fail()){
       cin.clear();
       cin.ignore();
       printf("\033[1;37m{=========================} \033[1;31m\n ___ ____  ____ ___ ____   \n| __|(__)||(__)| _ |(__)|  \n| __| \\  || \\  |(_)|    |  \n|___|_|\\_\\|_|\\_\\___|_|\\_\\  \n\033[1;37m\n{========================} \033[1;31m\n:INPUT FAILED: \n\033[1;37mPossible cause: Not a Number\033[0m\n");
       goto habibihamood;
      }else{*/
   cout << "Result: ";
   num = num * num;
   cout << num << endl;
   return 0;
  }
 }
//}
