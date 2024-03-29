#include <stdio.h>
#include <string.h>
/*
#include "linkedlist.h"
#include "textfilewriter.h"
*/

void read_command();
void add();	// 재생목록 첫 번째 위치에 노래 추가
void del();	// 재생목록에서 해당 노래명 삭제
void list();	// 재생목록을 콘솔에 출력
void next();	// 재생목록의 다음노래로 이동
void prev();	// 재생목록의 이전노래로 이동
void move();	
void play();	// 노래 재생
void clear();	// 재생목록 비우기
void quit();	// 뮤직 플레이어 종료 (종료 전 clear());
void load();	// 파일에 저장된 내용 읽고 재생목록 생성
void save();	// 재생목록 노래명 파일에 저장 (재생목록 역순으로 저장)


int main() {
    	int number_of_song = 0;
    	int number_of_command = 0;

    	char list[100] = {};

    	scanf("%d", number_of_song);
    	for(int i=0; i<number_of_song; i++) {
		char music_name[100];
		scanf("%s", music_name);
		list[i] = music_name;
    	}

    	scanf("%d", number_of_command);
    	for(int i=0; i<number_of_command; i++) {
        	read_command();
    	}
    	return 0;
}

void read_command() {
	char command[100] = {};
    	scanf("%s", command);
    	if(!strcmp(command, "add"))        { add(); } //string argument x1
	else if(!strcmp(command, "del"))   { del(); } //string argument x1
    	else if(!strcmp(command, "list"))  { list(); }
    	else if(!strcmp(command, "next"))  { next(); }
    	else if(!strcmp(command, "prev"))  { prev(); }
    	else if(!strcmp(command, "move"))  { move(); } //int argument x1
    	else if(!strcmp(command, "play"))  { play(); }
    	else if(!strcmp(command, "clear")) { clear(); }
    	else if(!strcmp(command, "quit"))  { quit(); }
    	else if(!strcmp(command, "load"))  { load(); } //string argument x1
    	else if(!strcmp(command, "save"))  { save(); } //string argument x1
    	else { ; }
}


void list() {
	printf("LinkedList [ ");
	//노래명 출력은 for문 반복?
	printf(" ]");
}

void play() {
	printf("[");
	//노래명 선택?
	printf("] is now playing!");
}

void clear() {
	//노래명 free
	printf("LinkedList is cleared!");
}

void quit() {
	clear();
	printf("LinkedList is cleared!\n");
	printf("quit!");
}	
