#include "LivingDelusion.h"

void DoFuniHere(void);
void DoFuniHereBckp(void);

//Testing functions when idk if my custom funcions work well or not (also testing other stuff)
void DoFuniHere(void){

    //Art("test", 1, NULL);  

    return;
}

void DoFuniHereBckp(void){

    return;
}

int main(void){

    time_needed = clock();                              
    srand(time(NULL));                              
    setlocale(LC_ALL, "");

    #if defined(_WIN32) || defined(_WIN64)  
    system("title (test ver.) LIVING DELUSION [OPEN BETA 2]");
    #endif

    DEBUG_MODE = true;

    DoFuniHere(); 
    //DoFuniHereBckp();

    return 0;
} 
