#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

#include "utilities.h"
#include "animations.h"
#include "constants.h"

void setup()
{
  display.begin(0, true);

  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(28, 20);
  display.println("MoshiMoshi");
  display.setCursor(35, 40);

  displaySleep(2000);

  standby();
  displaySleep(5000);
}

void loop()
{
  int randomNum = random(TOTAL_ANIMATIONS);
  const FunctionPtr *animations = animationArray[randomNum];
  const FunctionPtr preAnim = animations[0];
  const FunctionPtr anim = animations[1];
  const FunctionPtr postAnim = animations[2];

  if (preAnim != nullptr)
  {
    preAnim();
  }

  if (anim != nullptr)
  {
    if (randomNum == 0)
    {
      for (int i = 0; i <= random(MIN_SLEEP_AMOUNT, MAX_SLEEP_AMOUNT); i++)
      {
        anim();
      }
    }
    else
    {
      anim();
    }
  }

  if (postAnim != nullptr)
  {
    postAnim();
  }

  randomNum = random(TOTAL_ANIMATIONS - 1);

  standby();
  displaySleep(10000);
}