#pragma once

// Estado da janela
extern int janelaW;
extern int janelaH;

// Centro da janela (usado pelo input/mouse)
extern int centerX;
extern int centerY;

// Fullscreen
extern bool fullScreen;

// Atualiza centro após reshape
void atualizaCentroJanela(int w, int h);

// Alterna fullscreen (ALT+ENTER)
void altFullScreen();
