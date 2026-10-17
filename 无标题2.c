#include <stdio.h>

int LeapYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}

int monthDays(int year, int month)
{
	int days;
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		break;
	case 2:
		if (LeapYear(year))
			days = 29;
		else
			days = 28;
		break;
	default:
		days = -1; // Invalid month
	}
	return days;
}

int firstday(int year, int month) {
	int year1 = 1;
	for (int i = 1; i < year; i++) {
		if (LeapYear(i)) {
			year1 += 366;
		}
		else {
			year1 += 365;
		}
	}for (int i = 1; i < month; i++)
		{
			year1 = year1 + monthDays(year, i);
		}
	return year1 % 7;
}



void printthecalander(int year, int month) {
	printf("              %d年%d月\n", year, month);
	printf("日 一 二 三 四 五 六\n");
	int n = firstday(year, month);
	int m = monthDays(year, month);
	for (int i = 0; i < n; i++)
	{
		printf("   ");
	}
	for (int i = 1; i <= m; i++)
	{
		printf("%2d ", i);
		if (++n == 7) { printf("\n");n = 0; }
	}
}void date(int year, int month, int day) {
	int w = (firstday(year, month) + day - 1) % 7;
	const char* name[] = { "日", "一", "二", "三", "四", "五", "六" };
	printf("星期%s\n", name[w]);
}
int main() {
	int year, month, day;
	char n;
	do {
		printf("-----------万年历-----------\n");
		printf("1.-----按1打印全年日历------\n");
		printf("2.---按2打印某年某月日历----\n");
		printf("3.-----按3打印某天星期------\n");
		printf("4.--------按4退出哦---------\n");
		printf("-----------万年历-----------\n");
		printf("-------------哈-------------\n");


		scanf(" %c", &n);
		if (n == '1') {
			printf("请输入年份:\n");
			scanf("%d", &year);
			for (int i = 1; i <= 12; i++)
			{
				printthecalander(year, i);
				printf("\n");
			}

		}
		if (n=='2')
		{
			printf("请输入年份，月份；\n");
			scanf("%d %d", &year, &month);
			printthecalander(year, month);

		}if (n == '3') {
			printf("请输入年，月，日：\n");
			scanf("%d %d %d", &year, &month, &day);
			date(year, month, day);

		}

	} while (n != '4');
	return 0;
}
