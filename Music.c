#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
FILE* fp;
// 10대 장르별 노래 배열
char* T_K_rap[] = { "멜로디-ASH", "사이렌-호미들", "메테오-창모",
					"내일이 오면-릴보이", "아무노래-지코" };

char* T_A_rap[] = { "KaceyTalk-YoungBoyNeverBrokenAgain", "Ibiza-Tyga",
					"Whoopty-CJ", "Blurry-TwoSleepy",
					"On Top Of The World-Imagine Dragon" };

char* T_K_rock[] = { "돌덩이-하현우", "사랑했나봐-윤도현", "가시-버즈",
					"TOMBOY-혁오", "당신과는 천천히-장범준" };

char* T_A_rock[] = { "Believer-Imagin Dragon", "Sugar-Maroon5", "Viva La Vida-Coldplay",
					"Photograph-Ed Sheeran", "Animals-Maroon5" };

char* T_K_ballad[] = { "내 손을 잡아-아이유", "봄 안녕 봄-아이유", "아이와 나의 바다-아이유",
					"에필로그-아이유", "밤편지-아이유" };

char* T_A_ballad[] = { "Peaches-Justin Bieber", "Savage Love-Jawsh685", "2002-Anne-Marie",
					"Memories-Maroon5", "Paris In The Rain-Lauv" };

char* T_K_rb[] = { "Coin-아이유", "돌림노래-아이유", "팔레트-아이유", "삐삐-아이유", "D-DEAN" };

char* T_A_rb[] = { "Blinding Lights-The Weeknd", "Someone Like You-Adele", "Bang!-AJR",
				"Burn the House Down-AJR", "Way Less Sad-AJR" };


//20대 장르별 노래 배열
char* S_K_rap[] = { "Trip-릴러말즈", "자니-프라이머리", "하루 하루-BIGBANG",
					"거짓말-BIGBANG", "도망가-MINO" };

char* S_A_rap[] = { "Mood-24KGoldn", "Circles-Post Malone",
					"See You Again-Charlie Puth", "Astronaut In The Ocean-Masked Wolf",
					"MONTERO-Lil Nas X" };

char* S_K_rock[] = { "On The Ground-로제", "Blueming-아이유",
					"흔들리는 꽃들 속에서 네 샴푸향이 느껴진거야-장범준",
					"시작-가호", "주저하는 연인들을 위해-잔나비" };

char* S_A_rock[] = { "Tell Me If You Wanna Go Home-Keira Knightley", "Hotel California-Eagles", 
					"This Love-Maroon5", "A Sky Full Of Stars-Coldplay",
					"The Great Escape-Boys Like Girls" };

char* S_K_ballad[] = { "Timeless-SG워너비", "라라라-SG워너비", "내 손을 잡아-아이유",
					"밤하늘의 별을(2020)-경서", "잠이 오질 않네요-장범준" };

char* S_A_ballad[] = { "Closer-The Chainsmokers", "Symphony-Clean Bandit", "On My Way-Alan Walker",
					"Faded-Alan Walker", "Day1-HONNE" };

char* S_K_rb[] = { "내사람-SG워너비", "밝게 빛나는 별이 되어 비춰줄게-송이한", "아리랑-SG워너비",
				"홀로-이하이", "비도 오고 그래서-헤이즈" };

char* S_A_rb[] = { "Leave The Door Open-Bruno Mars", "At My Worst-Pink Sweat", 
					"HEARTBREAK ANNIVERSARY-Giveon",
				"Say So-Doja Cat", "Honesty-Pink Sweat" };

//30대 장르별 노래 배열
char* M_K_rap[] = { "가습기-한요한", "원해-스윙스", "Selfmade Orange-창모",
					"Bk Love-MC스나이퍼", "어땠을까-싸이" };

char* M_A_rap[] = { "Rolex-Ayo & Teo", "Going Up Tho Coast-Clay And Friends",
					"The Box-Roddy Ricch", "Company-24KGoldn",
					"Bad And Bougie-Migos" };

char* M_K_rock[] = { "비행운-문문(MoonMoon)", "Two Days-검정치마", "영원-스카이",
					"고백-뜨거운 감자", "비밀번호 486-윤하" };

char* M_A_rock[] = { "Time Is Running Out-Muse", "We Are The Champions-Queen", 
					"Bad Day-Daniel Powter","Sunkissed-Khai Dreams", 
					"Cake By The Ocean-DNCE" };

char* M_K_ballad[] = { "혼술하고 싶은 밤-벤", "거짓말이라도 해서 널 보고싶어-백지영",
						"되풀이-임창정", "서면역에서-순순히", "안녕-폴킴" };

char* M_A_ballad[] = { "10,000 Hours-Dan + Shay, JusinBieber", "Whiskey and Morphine-Alexander Jean",
						"Glad You Exist-Dan + Shay", "Let Her Go-Passenger", 
						"I Should Probably Go To Bed-Dan + Shay" };

char* M_K_rb[] = { "무제-G-DRAGON", "너를 그린 우주-마크툽", "Stay-SG워너비", 
					"Advice-태민", "벌써 일년-브라운 아이즈" };

char* M_A_rb[] = { "You Come First-Zak Abel", "All Of Me-John Legend",
					"Talking To The Moon-Bruno Mars", "Myself-Bazzi", 
					"Lay Me Down-Sam Smith" };

// 사용자 구조체 생성
struct User {
	char name[80]; // 사용자의 이름
	char genre; // 사용자가 좋아하는 장르
	int age; // 사용자의 나이
	char nation; //사용자가 원하는 국적
};

//10대 노래 추천 함수
void tenth(char genre, char nation, char name[10]) {
	int re = rand() % 5; //위의 배열 중 다섯 곡 중 하나를 랜덤으로 뽑는 수가 들어가는 함수
	if (nation == 'K') { //한국 노래를 선택했다면
		switch (genre) { // case 장르에 따는 분류
		case 'r': 
			printf("%s님에게 추천드릴 곡은\n", name); // 파라미터로 받은 이름 출력
			printf("%s\n\n", T_K_rap[re]); // 위 배열에 re 변수 값을 넣어서 곡 추천 5곡 중 한 곡
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, T_K_rap[re]); // 파일에 넣기 추천한 곡
			break;

		case 'o':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", T_K_rock[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, T_K_rock[re]);
			break;

		case 'a':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", T_K_ballad[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, T_K_ballad[re]);
			break;

		case 'b':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", T_K_rb[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, T_K_rb[re]);
			break;
		}
	}
	else if (nation == 'A') {
		switch (genre) {
		case 'r':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", T_A_rap[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, T_A_rap[re]);
			break;

		case 'o':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", T_A_rock[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, T_A_rock[re]);
			break;

		case 'a':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", T_A_ballad[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, T_A_ballad[re]);
			break;

		case 'b':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", T_A_rb[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, T_A_rb[re]);
			break;
		}
	}
}

//20대 노래 추천 함수
void twoth(char genre, char nation, char name[10]) {
	int re = rand() % 5;
	if (nation == 'K') {
		switch (genre) {
		case 'r':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", S_K_rap[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, S_K_rap[re]);
			break;

		case 'o':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", S_K_rock[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, S_K_rock[re]);
			break;

		case 'a':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", S_K_ballad[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, S_K_rb[re]);
			break;

		case 'b':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", S_K_rb[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, S_K_rb[re]);
			break;
		}
	}
	else if (nation == 'A') {
		switch (genre) {
		case 'r':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", S_A_rap[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, S_A_rap[re]);
			break;

		case 'o':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", S_A_rock[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, S_A_rock[re]);
			break;

		case 'a':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", S_A_ballad[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, S_A_ballad[re]);
			break;

		case 'b':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", S_A_rb[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, S_A_rb[re]);
			break;
		}
	}

}

//30대 노래 추천 함수
void thirth(char genre, char nation, char name[10]) {
	int re = rand() % 5;
	if (nation == 'K') {
		switch (genre) {
		case 'r':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", M_K_rap[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, M_K_rap[re]);
			break;

		case 'o':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", M_K_rock[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, M_K_rock[re]);
			break;

		case 'a':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", M_K_ballad[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, M_K_ballad[re]);
			break;

		case 'b':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", M_K_rb[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, M_K_rb[re]);
			break;
		}
	}
	else if (nation == 'A') {
		switch (genre) {
		case 'r':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", M_A_rap[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, M_A_rap[re]);
			break;

		case 'o':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", M_A_rock[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, M_A_rock[re]);
			break;

		case 'a':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", M_A_ballad[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, M_A_ballad[re]);
			break;

		case 'b':
			printf("%s님에게 추천드릴 곡은\n", name);
			printf("%s\n\n", M_A_rb[re]);
			fprintf(fp, "%s님에게 추천드린 곡은 %s입니다\n", name, M_A_rb[re]);
			break;
		}
	}
}

int main() {
	struct User user[50] = { 0, };
	int i = 0, answer;
	fp = fopen("music.txt", "a"); // a형식으로 파일 열기

	while (1) {
		printf("----음악 추천 프로그램----\n");
		printf("음악 추천을 받으시겠습니까? (0(부정)) : ");
		scanf("%d", &answer); // 0 입력 시 종료
		if (answer == 0)
			break;

		printf("당신의 이름은? "); // 구조체에서 이름 변수 가져와서 사용
		scanf("%s", &user[i].name);

		printf("%s님의 나이는? (10 ~ 39) ", user[i].name); // 구조체에서 나이 변수 활용
		scanf("%d", &user[i].age);

		//장르 -> rap(r), rock(o), ballad(a), r&b(b) 
		// 구조체에서 장르 변수 사용
		printf("%s님이 좋아하는 장르는? (rap(r), rock(o), ballad(a), r & b(b)) ", user[i].name); 
		scanf("%s", &user[i].genre);

		printf("%s님이 듣고 싶은 나라의 노래는? (K or A)", user[i].name); //구조체에서 나라 변수 사용
		scanf("%s", &user[i].nation);

		//여기서 10대 20대 30대 판별 40대 판별
		if (user[i].age / 10 == 1)
			tenth(user[i].genre, user[i].nation, user[i].name);
		else if (user[i].age / 10 == 2)
			twoth(user[i].genre, user[i].nation, user[i].name);
		else if (user[i].age / 10 == 3)
			thirth(user[i].genre, user[i].nation, user[i].name);
		else {
			printf("\n");
			printf("추천 드릴 곡이 없어요..ㅜㅜ");
			return 0;
		}
		i++;
		Sleep(3000);
		system("cls");
	}
	fclose(fp);
	return 0;
}