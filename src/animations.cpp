#include "animations.h"
#include "constants.h"

void displaySmile()
{
    display.fillRoundRect(58, 37, 14, 10, 3, WHITE);
    display.fillRoundRect(58, 34, 14, 10, 3, BLACK);
}

void displayOpenEyes()
{
    display.fillRoundRect(36, 15, 16, 28, 4, WHITE);
    display.fillRoundRect(77, 15, 16, 28, 4, WHITE);
}

void displayClosingEyes()
{
    display.fillRoundRect(36, 23, 16, 20, 4, WHITE);
    display.fillRoundRect(77, 23, 16, 20, 4, WHITE);
    displaySmile();

    displaySleep(125);

    display.fillRoundRect(36, 29, 16, 14, 4, WHITE);
    display.fillRoundRect(36, 23, 16, 14, 4, BLACK);
    display.fillRoundRect(77, 29, 16, 14, 4, WHITE);
    display.fillRoundRect(77, 23, 16, 14, 4, BLACK);
    displaySmile();

    displaySleep(125);

    display.fillRoundRect(36, 35, 16, 8, 4, WHITE);
    display.fillRoundRect(36, 33, 16, 8, 4, BLACK);
    display.fillRoundRect(77, 35, 16, 8, 4, WHITE);
    display.fillRoundRect(77, 33, 16, 8, 4, BLACK);
    displaySmile();
}

void displayOpeningEyes()
{
    display.fillRoundRect(36, 35, 16, 8, 4, WHITE);
    display.fillRoundRect(77, 35, 16, 8, 4, WHITE);
    displaySmile();

    displaySleep(100);

    display.fillRoundRect(36, 29, 16, 14, 4, WHITE);
    display.fillRoundRect(77, 29, 16, 14, 4, WHITE);
    displaySmile();

    displaySleep(100);

    display.fillRoundRect(36, 23, 16, 20, 4, WHITE);
    display.fillRoundRect(77, 23, 16, 20, 4, WHITE);
    displaySmile();

    displaySleep(100);
}

void displaySleepingFace()
{
    display.fillRoundRect(36, 35, 16, 8, 4, WHITE);
    display.fillRoundRect(36, 33, 16, 8, 4, BLACK);
    display.fillRoundRect(77, 35, 16, 8, 4, WHITE);
    display.fillRoundRect(77, 33, 16, 8, 4, BLACK);
    displaySmile();
}

void preSleep()
{
    displayClosingEyes();
    displaySleep(125);
}

void sleep()
{
    displaySleepingFace();
    display.drawBitmap(75, 20, sleeping_z_bitmap, 12, 12, 1);

    displaySleep(400);

    displaySleepingFace();
    display.drawBitmap(80, 16, sleeping_z_bitmap, 12, 12, 1);

    displaySleep(370);

    displaySleepingFace();
    display.drawBitmap(90, 10, sleeping_z_bitmap, 12, 12, 1);

    displaySleep(340);

    displaySleepingFace();
    display.drawBitmap(100, 3, sleeping_z_bitmap, 12, 12, 1);

    displaySleep(310);
}

void postSleep()
{
    displayOpeningEyes();
}

void blink()
{
    // eyes are wide open
    displayOpenEyes();
    displaySmile();

    displaySleep(2000);

    // we start to blink
    displayClosingEyes();

    // now the eyes open again
    displaySleep(125);

    displayOpeningEyes();
}

void standby()
{
    display.fillCircle(5, 5, 2, 1);
    displayOpenEyes();
    displaySmile();
}