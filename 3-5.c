//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<time.h>
//#include<math.h>
//#include<stdlib.h>
//#include<conio.h>
////int main()
////FILE *fp
//// fp->_bufsiz//输出缓冲区的大小
//// 文件打开函数
//// 文件指针名=fopen(文件名，使用方式）；
//// FILE *fp
//// fp=fopen("filea","r");
//// fp=("c:\\student","rb");
//// rt只读 
//// wt只写
//// at追加
//// t文本文件可省略
//// b二进制
//// if((fp=fopen("c:\\student","rb"))==NULL)
//// {
//// printf("\nerror on open c:\\student file!");
//// getch();exit(1);
//// 关闭函数close
//// 字符读写函数fgetc和fputc
//// 字符变量=fgetc（文件指针）；
//// ch=fgets(fp);
// 
////#include<stdio.h>
////main()
////{
////	FILE* fp; int ch;
////	if ((fp = fopen("C:\\Users\\zgw11\\Desktop\\1.txt", "rt")) == NULL)
////	{
////		printf("\nCannot open file strike any key exit!"); getch(); exit(1);
////	}
////	ch = fgetc(fp);
////	while (ch != EOF)
////	{
////		putchar(ch);
////		ch = fgetc(fp);
////	}
////	fclose(fp);
////}
////写字符函数
////fputc
//// fput(字符量，文件指针）；
//// fputc('a',fp);
//
////void main()
////{
////	FILE* fp; char ch;
////	if ((fp = fopen("string.txt", "wt+")) == NULL)
////	{
////		printf("Cannot open file strike any key exit!");
////		getchar();
////		exit(1);
////	}
////	printf("input a string:\n"); ch = getchar();
////	while (ch != '\n')
////	{
////		fputc(ch, fp);
////		ch = getchar();
////
////	}
////	rewind(fp);
////	ch = fgetc(fp);
////while (ch != EOF)
////{
////	putchar(ch);
////	ch = fgetc(fp);
////
////}
////printf("\n");
////fclose(fp);
////}
////
//// fgets和fputs
//// 字符串读写函数
////void main()
////{
////	FILE* fp; char str[11];
////	if ((fp = fopen("string.txt", "rt")) == NULL)
////
////	{
////		printf("\nCannot open file strike any key exit!");
////		getchar();
////		exit(1);
////	}
////	fgets(str, 13, fp);
////	printf("\n%s\n", str);
////	fclose(fp);
////
////}
////写字符串函数fputs
////fputs("abcd",fp);
////void main()
////{
////	FILE* fp;
////	char ch;
////	char st[20];
////	if ((fp = fopen("string.txt", "at+")) == NULL)
////	{
////		printf("!!!");
////		getchar();
////		exit(1);
////
////	}
////	printf("input a string :\n");
////	scanf("%s", st);
////	fputs(st, fp);
////	rewind(fp);
////	ch = fgetc(fp);
////	while (ch != EOF)
////	{
////		putchar(ch);
////		ch = fgetc(fp);
////	}
////	printf("\n");
////	fclose(fp);
////}
////数据块读写函数fread和fwrite
//// 读数据块儿
//// fread(buffer,size,count,fp);
//// fwrit(buffer,size,count,fp);
//// 
////格式化读写函数
////fscanf//fprinf
////fscanf（文件指针，格式字符串，输入列表）
////fprintf(文件指针，格式字符串，输出列表）
////fscanf(fp,"%d%s",&i,s);fprint(fp,"%d%c",&j,ch);
////文件的随机读写
////文件定位rewind//fseek
////fseek(fp,100L,0);
////fseek一般用于二进制文件
////rewind(fp)
////fseek(fp,i*sizeof(struct student),0);
////文件检测函数
////feof(文件指针)；文件结束检测函数
////ferror（文件指针）；文件操作出错检测
//// clearerr(文件指针)；文件清错函数
////宏定义
////#define PI 3.14159
//// void main()
//// {
//// }
//// #undef PI
//// fun1()
//// {
//// }
//// 有参宏定义 
//// #define M(y) y*y+3*y
//// k=M(5);即k=5*5+3*5;
//// 带参数宏定义带括号、、层层都要带括号；最后一个大括号
//// 
//// 
////
//#include<conio.h>
//#include<stdio.h>
//#include<stdlib.h>
//#define  M  4
//#define  N  5
//int fun(int a[M][N])
//{
//    int i, j, sum = 0;
//    for (i = 0; i < M; i++)
//        for (j = 0; j < N; j++)
//            if ((0 == i) ||( j == 0) || (i == M - 1 )|| (j == N - 1))
//                sum += a[i][j];
//}
//void main()
//{
//    FILE* wf;
//    int aa[M][N] = { {1,3,5,7,9},{2,9,9,9,4},{6,9,9,9,8},{1,3,5,7,0} };
//    int i, j, y;
//    system("CLS");
//    printf("The original data is :\n ");
//    for (i = 0; i < M; i++)
//    {
//        for (j = 0; j < N; j++)
//            printf("%6d ", aa[i][j]);
//        printf("\n ");
//    }
//    y = fun(aa);
//    printf("\nThe sun: %d\n ", y);
//    printf("\n ");
//    /******************************/
//    wf = fopen("out.dat", "w");
//    fprintf(wf, "%d", y);
//    fclose(wf);
//    /*****************************/
//}
