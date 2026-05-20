#include <stdio.h>
#include <conio.h>

void functionS();

int main() {

	int key = 0, key2 = 0, a=0;

	a = 'q';
	printf("%d", a);

	do
	{
		if (_kbhit()) {
			key = _getch();
			//printf("%x\n", key)


			switch (key) {
			case 0xe0: printf("矢印の");
				key2 = _getch();
				switch (key2) {
				case 0x4b:	printf("左\n");	break;
				case 0x4d:	printf("右\n");	break;
				case 0x48:	printf("上\n");	break;
				case 0x50:	printf("下\n");	break;
				}break;
			case 'a':	printf("aです\n");	break;
			case 's':	functionS();	break;
			case 'd':	printf("dです\n");	break;
			case 'A':	printf("Aです\n");	break;
			case 'q':	printf("qで終了\n");	break;
			default:	printf("そのキーは使用できません。[q]キーを押すと終了\n");

			}
		}
	} while (key!='q');
	printf("お疲れ様でした。\n\n");
	return 0;
}

void functionS() {
	printf("\n");
	printf("エスです\n");
	printf("\n");
	return;
}