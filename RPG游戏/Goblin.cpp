#include <conio.h>
#include <graphics.h>

const int SPRITE_WIDTH = 23;
const int SPRITE_HEIGHT = 23;
const int RUN_FRAMES = 7;
const int HIT_FRAMES = 4;
const int ANIMATION_SPEED = 100;

enum Direction {
	UP = 0,
	LEFT = 1,
	RIGHT = 2,
	DOWN = 3
};

enum Action {
	WALK = 0,
	HIT = 1,
	DEATH = 2
};

int main() {
	initgraph(780,325);

	IMAGE backgroud;
	loadimage(&backgroud, "bk.groud");

	IMAGE spritesheet;
	loadimage(&spritesheet, "goblin1.jpg");

	int x = 300,y = 200;
	Direction direction = UP;
	int frame = 0;
	Action action = WALK;
	bool isDead = false;

	while (true) {
		if (_kbhit()) {
			switch (_getch()) {
			case 'W':
				direction = UP;
				y -= 10;
				break;
			case 'S':
				direction = DOWN;
				y += 10;
				break;
			case 'A':
				direction = LEFT;
				x -= 10;
				break;
			case 'D':
				direction = RIGHT;
				x += 10;
				break;
			case 27:
				closegraph();
				return 0;
			}
			}
			
		}
	}

	closegraph();
	return 0;
}