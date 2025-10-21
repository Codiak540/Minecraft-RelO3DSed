#include <GameStates.h>
#include <gui/SpriteBatch.h>
#include <gui/Gui.h>
#include <citro3d.h>

#ifndef SPLASHTEXT_H
#define SPLASHTEXT_H

extern const char* SPLASH_ARRAY[];
extern const char* SPLASH_TEXT;

void loadSplashText();
void renderSplashText();

#endif