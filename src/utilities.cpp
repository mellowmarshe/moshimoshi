#include "utilities.h"
#include "constants.h"

void displaySleep(int ms)
{
    display.display();
    delay(ms);
    display.clearDisplay();
}