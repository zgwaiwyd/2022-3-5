//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<time.h>
//#include<math.h>
//#include<stdlib.h>
//#include<conio.h>
////int main()
////FILE *fp
//// fp->_bufsiz//����������Ĵ�С
//// �ļ��򿪺���
//// �ļ�ָ����=fopen(�ļ�����ʹ�÷�ʽ����
//// FILE *fp
//// fp=fopen("filea","r");
//// fp=("c:\\student","rb");
//// rtֻ�� 
//// wtֻд
//// at׷��
//// t�ı��ļ���ʡ��
//// b������
//// if((fp=fopen("c:\\student","rb"))==NULL)
//// {
//// printf("\nerror on open c:\\student file!");
//// getch();exit(1);
//// �رպ���close
//// �ַ���д����fgetc��fputc
//// �ַ�����=fgetc���ļ�ָ�룩��
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
////д�ַ�����
////fputc
//// fput(�ַ������ļ�ָ�룩��
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
//// fgets��fputs
//// �ַ�����д����
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
////д�ַ�������fputs
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
////���ݿ��д����fread��fwrite
//// �����ݿ��
//// fread(buffer,size,count,fp);
//// fwrit(buffer,size,count,fp);
//// 
////��ʽ����д����
////fscanf//fprinf
////fscanf���ļ�ָ�룬��ʽ�ַ����������б�
////fprintf(�ļ�ָ�룬��ʽ�ַ���������б�
////fscanf(fp,"%d%s",&i,s);fprint(fp,"%d%c",&j,ch);
////�ļ��������д
////�ļ���λrewind//fseek
////fseek(fp,100L,0);
////fseekһ�����ڶ������ļ�
////rewind(fp)
////fseek(fp,i*sizeof(struct student),0);
////�ļ���⺯��
////feof(�ļ�ָ��)���ļ�������⺯��
////ferror���ļ�ָ�룩���ļ�����������
//// clearerr(�ļ�ָ��)���ļ������
////�궨��
////#define PI 3.14159
//// void main()
//// {
//// }
//// #undef PI
//// fun1()
//// {
//// }
//// �вκ궨�� 
//// #define M(y) y*y+3*y
//// k=M(5);��k=5*5+3*5;
//// �������궨������š�����㶼Ҫ�����ţ����һ��������
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
