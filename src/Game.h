#pragma once
#include "Utility.h"
#include "Input.h"
#include "Renderer.h"
#define is_down(b) input->buttons[b].is_down
#define pressed(b) (input->buttons[b].is_down && input->buttons[b].changed)
#define released(b) (!input->buttons[b].is_down && input->buttons[b].changed)
class Player {
	public:
	float pos_y;
	float velocity;
	float ddp;
	int score;
	Player() {
		pos_y = 0.f;
		ddp = 0.f;
		velocity = 0.f;
		score = 0.f;
	}
};

enum Gamemode {
	GM_MENU,
	GM_SINGLE_PLAYER,
	GM_MULTIPLAYER,
};
void simulate_player(Player &player,float dt);
void simulate_game(Input* input, float dt);