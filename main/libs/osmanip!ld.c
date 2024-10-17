#include "../LivingDelusion.h"

/*
 * #if __linux__
 *
 * #elif  defined(_WIN32) || defined(_WIN64)
 *
 * #else
 *
 * #endif
 */

//Used to get cur Terminal Size information
u64 GetTerminalSize(const char * what){

    u64 columns = 0, rows = 0;

    #if __linux__

        //Found in: https://stackoverflow.com/questions/1022957/getting-terminal-width-in-c
        struct winsize w;
        ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

        columns = (u64)w.ws_col;
        rows = (u64)w.ws_row;


    #elif  defined(_WIN32) || defined(_WIN64)
    
        //Found in: https://stackoverflow.com/questions/6812224/getting-terminal-size-in-c-for-windows/12642749#1264
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        int columns, rows;

        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
        columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    #else

    #endif

    if(strcmp(what, "columns")== 0)
        return columns;

    else
        return rows;
}
