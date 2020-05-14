#include<graphics.h>
#include<Windows.h>
#include<MMSystem.h>
#pragma comment(lib,"winmm.lib")

int main(void)
{
	initgraph(800,513);

	loadimage(0,_T("jile.jpg"));
	mciSendString(_T("play ¼«ÀÖ¾»ÍÁ.mp3 repeat"),0,0,0);
	system("pause");
	closegraph();
	return 0;

}