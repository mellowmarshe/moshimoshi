#ifndef ANIMATIONS_H
#define ANIMATIONS_H

#include "utilities.h"

// Helper functions for animations
void displaySmile();
void displayOpenEyes();
void displayClosingEyes();
void displayOpeningEyes();
void displaySleepingFace();

// Sleep animation
void preSleep();
void sleep();
void postSleep();

// Blink animation
void blink();

// Standby animation
void standby();

#endif