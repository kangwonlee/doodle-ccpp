#include <stdio.h>
// 44. https://www.youtube.com/watch?v=nSxNgDJEnN0&t=7s

enum {
    MAINMENU_STATE,
    PLAYING_STATE,
    PAUSED_STATE,
    GAMEOVER_STATE
};

int main() {
    printf("%d\n", MAINMENU_STATE);
    printf("%d\n", PLAYING_STATE);
    printf("%d\n", PAUSED_STATE);
    printf("%d\n", GAMEOVER_STATE);
}
