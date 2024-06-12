//#include <graphics.h>
//#include <conio.h>
//
//// Constants for sprite dimensions and animation parameters
//const int WOLF_WIDTH = 32;  // 每帧的宽度，需要根据实际的图像帧宽度进行调整
//const int WOLF_HEIGHT = 64; // 每帧的高度，需要根据实际的图像帧高度进行调整
//
//const int GOBLIN_WIDTH = 64;  // 每帧的宽度，需要根据实际的图像帧宽度进行调整
//const int GOBLIN_HEIGHT = 64; // 每帧的高度，需要根据实际的图像帧高度进行调整
//
//// 帧数常量
//const int WALK_FRAMES = 5;
//const int RUN_FRAMES = 5;
//const int BITE_FRAMES = 5;
//const int HOWL_FRAMES = 4;
//const int DEATH_FRAMES = 4;
//
//const int ANIMATION_SPEED = 100;
//
//enum Action {
//    WALK = 0,
//    RUN = 1,
//    BITE = 2,
//    HOWL = 3,
//    DEATH = 4,  
//};
//
//enum Direction {
//    UP = 0,
//    DOWN = 1,
//    LEFT = 2,
//    RIGHT = 3
//};
//
//int main() {
//    // Initialize the graphics window
//    initgraph(780, 325);
//
//    // Load the sprite sheets and background image
//    IMAGE backgroundImage;
//    loadimage(&backgroundImage, "bk.jpg");
//    IMAGE spriteSheet;
//    loadimage(&spriteSheet, "wolfsheet1.png");
//    IMAGE goblinImage;
//    loadimage(&goblinImage, "gbl.png");
//    
//    // Initialize position, action, and direction
//    int wolfX = 100, wolfY = 200;
//    int goblinX = 400, goblinY = 200; // Initial position of the goblin
//    Action action = WALK;
//    Direction direction = DOWN;
//    int frame = 0;
//    bool isDead = false; // 标志表示狼是否已死亡
//
//    // Main animation loop
//    while (true) {
//        // Handle keyboard input for action control
//        if (_kbhit()) {
//            char ch = _getch();
//            if (isDead) {
//                continue; // 如果狼已经死亡，忽略所有输入
//            }
//            switch (ch) {
//            case 72: // Up arrow
//                action = WALK;
//                direction = UP;
//                wolfY -= 10;
//                break;
//            case 80: // Down arrow
//                action = WALK;
//                direction = DOWN;
//                wolfY += 10;
//                break;
//            case 75: // Left arrow
//                action = WALK;
//                direction = LEFT;
//                wolfX -= 10;
//                break;
//            case 77: // Right arrow
//                action = WALK;
//                direction = RIGHT;
//                wolfX += 10;
//                break;
//            case 'R': // Run
//                action = RUN;
//                break;
//            case 'B': // Bite
//                action = BITE;
//                frame = 0; // Reset frame counter for bite animation
//                break;
//            case 'G': // Howl
//                action = HOWL;
//                frame = 0; // Reset frame counter for howl animation
//                break;
//            case 'D': // Death
//                action = DEATH;
//                frame = 0; // Reset frame counter for death animation
//                isDead = true; // 标志表示狼已死亡
//                break;
//            case 27: // ESC key
//                closegraph();
//                return 0;
//            }
//        }
//
//        // Clear the screen
//        cleardevice();
//
//        // Draw the background image
//        putimage(0, 0, &backgroundImage);
//
//        // Draw the goblin
//        putimage(goblinX, goblinY, GOBLIN_WIDTH, GOBLIN_HEIGHT, &goblinImage, 0, 0, SRCINVERT);
//
//        // Calculate the x and y coordinates of the current frame in the sprite sheet
//        int xFrame = 0, yFrame = 0;
//
//        if (action == DEATH && frame >= DEATH_FRAMES) {
//            // If death animation is finished, stop at the last frame
//            xFrame = (DEATH_FRAMES - 1) * WOLF_WIDTH;
//            yFrame = (DEATH * 4 + direction) * WOLF_HEIGHT; // Adjusted for direction
//        }
//        else {
//            switch (action) {
//            case WALK:
//                xFrame = (frame % WALK_FRAMES) * WOLF_WIDTH;
//                yFrame = (WALK * 4 + direction) * WOLF_HEIGHT;
//                break;
//            case RUN:
//                xFrame = (frame % RUN_FRAMES) * WOLF_WIDTH;
//                yFrame = (RUN * 4 + direction) * WOLF_HEIGHT;
//                break;
//            case BITE:
//                xFrame = (frame % BITE_FRAMES) * WOLF_WIDTH;
//                yFrame = (BITE * 4 + direction) * WOLF_HEIGHT;
//                break;
//            case HOWL:
//                xFrame = (frame % HOWL_FRAMES) * WOLF_WIDTH;
//                yFrame = (HOWL * 4 + direction) * WOLF_HEIGHT;
//                break;
//            case DEATH:
//                xFrame = (frame % DEATH_FRAMES) * WOLF_WIDTH;
//                yFrame = (DEATH * 4 + direction) * WOLF_HEIGHT;
//                break;
//            }
//        }
//
//        // Draw the current frame of the sprite
//        putimage(wolfX, wolfY, WOLF_WIDTH, WOLF_HEIGHT, &spriteSheet, xFrame, yFrame, SRCINVERT);
//
//        // Update the frame counter
//        frame++;
//
//        // Delay to control animation speed
//        Sleep(ANIMATION_SPEED);
//    }
//
//    // Close the graphics window
//    closegraph();
//    return 0;
//}
