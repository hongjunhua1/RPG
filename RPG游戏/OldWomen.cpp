//#include <graphics.h>
//#include <conio.h>
//
//const int SPRITE_WIDTH = 48;//图片宽度
//const int SPRITE_HEIGHT = 64;//图片高度
//const int FRAMES = 4;//一帧图片数
//const int ANIMATION_SPEED = 100;//一帧速度
//
////方向
//enum Direction {
//    UP = 0,//上
//    LEFT = 1,//左
//    RIGHT = 2,//右
//    DOWN = 3,//下
//};
//
//int main() {
//
//    initgraph(780,325);//初始化图层
//
//    IMAGE backgroud;
//    loadimage(&backgroud, "bk.jpg");//加载背景
//
//    IMAGE spriteSheet;
//    loadimage(&spriteSheet, "OldWomen.png");//加载运行图片
//
//    int x = 300, y = 200;//图片开始位置
//    Direction direction = UP;//图片开始方向
//    int frame = 0;//开始
//
//    //接受键盘信号控制方向
//    while (true) {
//        if (_kbhit()) {
//            switch (_getch()) {
//            case 'w':
//            case 'W':
//                direction = DOWN;
//                y -= 10;
//                break;
//            case 'S':
//            case 's':
//                direction = UP;
//                y += 10;
//                break;
//            case 'A':
//            case 'a':
//                direction = LEFT;
//                x -= 10;
//                break;
//            case 'D':
//            case 'd':
//                direction = RIGHT;
//                x += 10;
//                break;
//            case 27:
//                closegraph;
//                return 0;
//            }
//        }
//
//        //设置每一帧的宽度，高度
//        int xFrame = (frame % FRAMES) * SPRITE_WIDTH;
//        int yFrame = direction * SPRITE_HEIGHT;
//
//        //播放背景图片
//        putimage(0, 0, &backgroud);
//
//        //播放运行图片
//        putimage(x, y, SPRITE_WIDTH, SPRITE_HEIGHT, &spriteSheet, xFrame, yFrame, SRCINVERT);
//
//        //更新帧数
//        frame++;
//
//        //延迟控制时间
//        Sleep(ANIMATION_SPEED);
//
//    }
//
//    //关闭图层
//    closegraph();
//	return 0;
//}