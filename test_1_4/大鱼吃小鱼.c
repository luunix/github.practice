//#include <graphics.h>
//#include <time.h>
//#include <stdlib.h>
//#include <stdio.h>
//
////һЩ�ض���ֵ���Ȱ����÷��Ŷ���������궨��
////���ڴ�С
//#define WIDTH 1000
//#define HEIGHT 600
////��Ĵ�С
////��С��
//#define FISH_MIN_W 50
//#define FISH_MAX_H 20
////�����Ŀ
//#define FISH_MAX_NUMS 7
////��ʱ������Ŀ
//#define TIMER_MAX  10
////�߽�
//#define BOARD 100
////����
//#define ASPECT_LEFT 0
//#define ASPECT_RIGHT 2
////��ɫ
//#define ROLE 0
//
//struct Fish
//{
//	//�������
//	int x;
//	int y;
//	int dir;	//��ķ���
//	int type;	//�������
//	//��Ŀ�Ⱥ͸߶�
//	int w;
//	int h;
//};
//struct Fish fish[Fish_MAX_NUMS]��//��Чstruct Fish fish[7];
//	//������Դ--->��������
//	IMAGE background;	//����ͼ
//IMAGE fishIMG[7][4];//������� 0 1����ߵı��������� 2 3 �ұߵı���������
//
//
//void intFish(int type)
//{
//	if (type == ROLE)
//	{
//		//��ɫ������
//		fish[type].x = 0;
//		fish[type].y = 0; 
//		fish[type].dir = ASPECT_RIGHT;
//		fish[type].type = ROLE;
//		fish[type].w = FISH_MIN_W +50;
//		fish[type].h = FISH_MIN_H +50;
//	}
//	else
//	{
//		//���������������
//		fish[type].type = rand() % (FISH_MAX_NUMS - 1) + 1;//rand()%6+1 [0,5],[1,6]	
//		int dir = rand() % 10 > 5 ? ASPECT_LEFT : ASPECT_RIGHT;
//		fish[type].dir = dir;
//		fish[type].y = rand() % 50 * 10 + 50;
//		fish[type].x = dir == ASPECT_LEFT ? rand() % BOARD + WIDTH : -1 * rand() % BOARD;
//		fish[type].w = FISH_MIN_W + 10 * type;
//		fish[type].h = FISH_MIN_H + 10 * type;
//	}
//}
//void LoadResources()
//{
//	loadimage(&background, "./res/background.jpg", WIDTH, HEIGHT);
//	char fileName[20] = { "" };
//	for (int i = 0; i < FISH_MAX_NUMS; i++)
//	{
//		InitFish(i);
//		for (int j = 0; j < 4; j++)
//		{
//		//fishIMG[i][0]	�������ͼ
//		//fishIMG[i][1]	��ߵı���ͼ
//		//fishIMG[i][2]	�ұߵ�����ͼ
//		//fishIMG[i][3]	�ұߵı���ͼ
//			switch (j)
//			{
//				case 0;
//					sprintf(fileName, "./Res/%d_left_y.jpg", i);
//					break;
//				case 1;
//					sprintf(fileName, "./Res/%d_left.jpg", i);
//					break;
//				case 2;
//					sprintf(fileName, "./Res/%d_right_y.jpg", i);
//					break;
//				case 3;
//					sprintf(fileName, "./Res/%d_right.jpg", i);
//					break;
//			}
//			loadimage(&fishIMG[i][j], fileName, fish[i].w, fish[i].h);
//		}
//	}
//}
//
////���ƹ���
//void DrawFsih()
//{
//	for (int i = 0; i < FISH_MAX_NUMS; i++0)
//	{
//		putimage(fsih[i].x, fish[i].y, &fishIMG[i][fish[i].dir], SRCAND);
//		putimage(fsih[i].x, fish[i].y, &fishIMG[i][fish[i].dir+1], SRCPAINT);
//	}
//}
//void ResetFish(
//	{
//		for (inti = 1; i < FISH_MAX_NUMS; i++)
//		{
//			switch (fish[i].dir)
//			{
//			case ASPECT_LEFT:
//					if (fish[i].x < -BOARD)
//					{
//						InitFish(i);
//					}
//					break;
//			case ASPECT_RIGHT:
//				if(fish[i].x > WIDTH + BOARD)
//				{
//					InitFish(i);
//				}
//				break;
//			}
//		}
//	}
////��ʱ��
//int OnTimer(int duration, int id)
//	{
//		static int startTime[TIMER_MAX];
//		int endTime = clock();
//		if (endTime - startTime[id] >= duration)
//		{
//			startTime[id] = endTime;
//			return 1;
//		}
//		return 0;
//	}
//	//���ƹ���
//	//�Զ�����---->����
//	void MoveFish()
//	{
//		for (intr i = 1; i < FISH_MAX_NUMS; i++)
//		{
//			switch (fish[i].dir)
//			{
//			case ASPECT_LEFT:
//				fish[i].x--; 
//				break;
//			case ASPECT_RIGHT:
//				fi[is.x++;
//				break;
//			}
//		}
//	}
//
//	//��Ϊ����---->��ɫ
//	void Control(
//		{
//			if (GetAsyncKeyState(VK_LEFT) && fish[ROLE].x > 0)
//			{
//				fish[ROLE].x--;
//				fish[ROLE].dir = ASPECT_LEFT;
//			}
//			if (GetAsyncKeyState(VK_RIGHT) && fish[ROLE].x <WIDTH-fish[ROLE].w)
//			{
//				fish[ROLE].x++;
//				fish[ROLE].dir = ASPECT_RIGHT;
//			}
//			if (GetAsyncKeyState(VK_UP) && fish[ROLE].y > 0)
//			{
//				fish[ROLE].y--;
//			}
//			if (GetAsyncKeyState(VK_DOWN) && fish[ROLE].y <HEIGHT-fish[ROLE].h)
//			{
//				fish[ROLE].y++;
//			}
//		}
//		int EatFish(int type)		//����Ե���type������
//		{
//			//���������ཻ
//			//���Ͻ������ֵ
//			int MinX = max(fish[ROLE].x, fish[type].x);
//			int MinY = max(fish[ROLE].y, fish[type].y);
//			//���½�����Сֵ
//			int MaxX = min(fish[ROLE].x + fsih[ROLE].w, fish[type].x + fish[ROLE].w);
//			int MaxY = min(fish[ROLE].y + fish[ROLE].h, fish[type].y + fish[ROLE].h);
//			if (minX > MaxX || MinY > MaxY)
//			{
//				return 0;		//���ཻ
//			}
//			else
//			{
//				//����жϴ�С
//				if (fish[ROLE].w * fsih[ROLE].h > fish[type].w * fsih[type].h)
//				{
//					InitFish(type);
//					return 0;
//				}
//				else
//				{
//					return 1;
//				}
//			}
//		}
//		int GameOver()
//		{
//			for (int i = 1; i < FISH_MAX_NUMS; i++)
//			{
//				if (EatFish(i) == 1)
//					return 1;
//			}
//			return 0;
//		}
//		int main()
//		{
//			srand((unsigned int)time(NULL));
//			HWND hwnd = initgraph(WIDTH, HEIGHT);
//			LoadResources();
//			BeginBatchDraw();
//			while(1)
//			{
//				putimage(0, 0, &background);
//				DrawFish();
//				FlushBatchDraw();
//				Control();
//				if (OnTimer(10, 0))
//					MoveFish();
//				ResetFish();
//				if (GameOver() == 1)
//				{
//					MessageBox(hwnd, "GameOver", "You Losse", MB_OK);
//					break;
//				}
//			}
//			EndBatchDraw();
//			closegraph();
//			return 0;
//		}