//#include <graphics.h>
//#include <conio.h>
//
//const int SPRITE_WIDTH = 48;//ͼƬ���
//const int SPRITE_HEIGHT = 64;//ͼƬ�߶�
//const int FRAMES = 4;//һ֡ͼƬ��
//const int ANIMATION_SPEED = 100;//һ֡�ٶ�
//
////����
//enum Direction {
//    UP = 0,//��
//    LEFT = 1,//��
//    RIGHT = 2,//��
//    DOWN = 3,//��
//};
//
//int main() {
//
//    initgraph(780,325);//��ʼ��ͼ��
//
//    IMAGE backgroud;
//    loadimage(&backgroud, "bk.jpg");//���ر���
//
//    IMAGE spriteSheet;
//    loadimage(&spriteSheet, "OldWomen.png");//��������ͼƬ
//
//    int x = 300, y = 200;//ͼƬ��ʼλ��
//    Direction direction = UP;//ͼƬ��ʼ����
//    int frame = 0;//��ʼ
//
//    //���ܼ����źſ��Ʒ���
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
//        //����ÿһ֡�Ŀ�ȣ��߶�
//        int xFrame = (frame % FRAMES) * SPRITE_WIDTH;
//        int yFrame = direction * SPRITE_HEIGHT;
//
//        //���ű���ͼƬ
//        putimage(0, 0, &backgroud);
//
//        //��������ͼƬ
//        putimage(x, y, SPRITE_WIDTH, SPRITE_HEIGHT, &spriteSheet, xFrame, yFrame, SRCINVERT);
//
//        //����֡��
//        frame++;
//
//        //�ӳٿ���ʱ��
//        Sleep(ANIMATION_SPEED);
//
//    }
//
//    //�ر�ͼ��
//    closegraph();
//	return 0;
//}