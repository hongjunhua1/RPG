#include <graphics.h>
#include <conio.h>

// Constants for sprite dimensions and animation parameters
const int SPRITE_WIDTH = 49;    // Width of a single sprite frame
const int SPRITE_HEIGHT = 75;   // Height of a single sprite frame
const int FRAMES = 6;           // Number of frames per direction in the animation
const int ANIMATION_SPEED = 100; // Time per frame in milliseconds

enum Direction {
    UP = 0,
    LEFT = 1,
    RIGHT = 2,
    DOWN = 3
};

int main() {
    // Initialize the graphics window
    initgraph(780, 325);

    // Load the background image
    IMAGE background;
    loadimage(&background, "bk.jpg");

    // Load the sprite sheet
    IMAGE spriteSheet;
    loadimage(&spriteSheet, "Dragon.png");

    // Initialize position and direction
    int x = 300, y = 200;
    Direction direction = UP;
    int frame = 0;

    // Main animation loop
    while (true) {
        // Handle keyboard input for direction control
        if (_kbhit()) {
            switch (_getch()) {
            case 'W': // Up arrow
            case 'w': // Up arrow
                direction = UP;
                y -= 10; // Move up
                break;
            case 'S': // Down arrow
            case 's': // Down arrow
                direction = DOWN;
                y += 10; // Move down
                break;
            case 'A': // Left arrow
            case 'a': // Left arrow
                direction = LEFT;
                x -= 10; // Move left
                break;
            case 'D': // Left arrow
            case 'd': // Right arrow
                direction = RIGHT;
                x += 10; // Move right
                break;
            case 27: // ESC key
                closegraph();
                return 0;
            }
        }

        // Calculate the x and y coordinates of the current frame in the sprite sheet
        int xFrame = (frame % FRAMES) * SPRITE_WIDTH;
        int yFrame = direction * SPRITE_HEIGHT;

        // Draw the background image
        putimage(0, 0, &background);

        // Draw the current frame of the sprite
        putimage(x, y, SPRITE_WIDTH, SPRITE_HEIGHT, &spriteSheet, xFrame, yFrame, SRCINVERT);

        // Update the frame counter
        frame++;

        // Delay to control animation speed
        Sleep(ANIMATION_SPEED);
    }

    // Close the graphics window
    closegraph();
    return 0;
}