#pragma once

#include "core/game_enums.h"
#include "core/game_state.h"
#include "level/level.h"
#include "audio/audio_system.h"

// --- Acesso global ao nível e contexto ---
Level &gameLevel();
GameContext &gameContext();
AudioSystem &gameAudio();

// --- Estado do jogo ---
GameState gameGetState();
void gameSetState(GameState s);
void gameTogglePause();

// --- Fluxo principal ---
bool gameInit(const char *mapPath);   // Inicialização completa (primeira vez)
void gameInitLevel(const char *mapPath); // Troca de nível (portal)
void gameUpdate(float dt);
void gameRender();
void gameReset();

// --- Ações do player ---
void playerTryAttack();
void playerTryReload();