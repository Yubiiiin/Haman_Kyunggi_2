// pointerSample.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//#include <iostream> //c++







#include <stdio.h>  //표준헤더파일
#include <malloc.h>
//수정시 기존 소스 삭제 자제


char buf[100];
void MemoryDump(int start, int length);  //함수의 원형 Prototype  







int main(int argc, char* argv[])	//> pointerSample 10000  500  : // Command Line : 명령어
//10000 : Start memory 주소
//500 : Dump 할 메모리 크기

{
	int start = 0x09000000;
	int length = 500;


	char c = 'A';
	int i = 1;
	float a = 2.0;
	double d = 3.14;
	//int* p = &i;
	//void* p = &i; //그저 주소일 뿐 

	void* p = malloc(100);  //(void*)buf; //0x80000000;

	*(double*)p = d;

	MemoryDump((int) buf, length);

	//printf("c = %8c   [0x%08x]\n", c, &c);
	//printf("i = %8d   [0x%08x]\n", i, &i);
	//printf("f = %8f   [0x%08x]\n", a, &a);
	//printf("d = %8f   [0x%08x]\n", d, &d);

	//printf("p = %8f   [0x%08x]\n", *(double*)p, p);

}

void MemoryDump(int start, int length)
	{
		void* cp = (void*)start;
		
		//while for dowhile 반복문 사용

		int i = 0;  //index 변수 초기값
		while(i < length) //수행조건 : i < length
		{
			//char *cp = (char *)vp;
			//char c = *cp;
			unsigned char c = *((char*)cp + i++);
			//i++; 
			printf("0x%02x  ", c);
		}
	}






	/*
	
	 char c;
	 int i;
  	 float a; 
  	 double d;
	
	


	 c = 'A';
	 i = 1;
	 a = 2.0;
	 d = 3.14;
	 *p = &i;
	 
		
	*/

	/*
	 
	%c 단일 문자  
	%d 부호있는 10진 정수
	%f 부호있는 10진 실수
	%s 문자열
	%o 부호없는 8진 정수
	%u 부호없는 10진 정수
	%x 부호없는 16진 정수 소문자사용
	%X 부호없는 16진 정수 대문자사용
	%e e 표기법에 의한 실수
	%E E 표기법에 의한 실수
	
	
	*/
	 /*

	 printf("char c = %c\n", c);
	 printf("int i = %d\n", i);
	 printf("float a = %f\n", a);
	 printf("double d = %f\n", d);

	 */

	 /*
	 printf("char c = %c\n", c);
	 printf("int i = %d\n", i);
	 printf("float a = %f\n", a);
	 printf("double d = %f\n", d);
	 */

	 /*
	 printf("int i = %d   [%d]\n", i, &i); //i = 2;
	 printf("int i = %d   [0x%08x]\n", i, 10);
	 */




	 //0x%8x = 0x00000001

	 //LF : 줄바꿈
	 //CR : 제일 앞으로



//    std::cout << "Hello World!\n";
//}

























	  
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
