#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
FILE* fp;
// 10�� �帣�� �뷡 �迭
char* T_K_rap[] = { "��ε�-ASH", "���̷�-ȣ�̵�", "���׿�-â��",
					"������ ����-������", "�ƹ��뷡-����" };

char* T_A_rap[] = { "KaceyTalk-YoungBoyNeverBrokenAgain", "Ibiza-Tyga",
					"Whoopty-CJ", "Blurry-TwoSleepy",
					"On Top Of The World-Imagine Dragon" };

char* T_K_rock[] = { "������-������", "����߳���-������", "����-����",
					"TOMBOY-����", "��Ű��� õõ��-�����" };

char* T_A_rock[] = { "Believer-Imagin Dragon", "Sugar-Maroon5", "Viva La Vida-Coldplay",
					"Photograph-Ed Sheeran", "Animals-Maroon5" };

char* T_K_ballad[] = { "�� ���� ���-������", "�� �ȳ� ��-������", "���̿� ���� �ٴ�-������",
					"���ʷα�-������", "������-������" };

char* T_A_ballad[] = { "Peaches-Justin Bieber", "Savage Love-Jawsh685", "2002-Anne-Marie",
					"Memories-Maroon5", "Paris In The Rain-Lauv" };

char* T_K_rb[] = { "Coin-������", "�����뷡-������", "�ȷ�Ʈ-������", "�߻�-������", "D-DEAN" };

char* T_A_rb[] = { "Blinding Lights-The Weeknd", "Someone Like You-Adele", "Bang!-AJR",
				"Burn the House Down-AJR", "Way Less Sad-AJR" };


//20�� �帣�� �뷡 �迭
char* S_K_rap[] = { "Trip-��������", "�ڴ�-�����̸Ӹ�", "�Ϸ� �Ϸ�-BIGBANG",
					"������-BIGBANG", "������-MINO" };

char* S_A_rap[] = { "Mood-24KGoldn", "Circles-Post Malone",
					"See You Again-Charlie Puth", "Astronaut In The Ocean-Masked Wolf",
					"MONTERO-Lil Nas X" };

char* S_K_rock[] = { "On The Ground-����", "Blueming-������",
					"��鸮�� �ɵ� �ӿ��� �� ��Ǫ���� �������ž�-�����",
					"����-��ȣ", "�����ϴ� ���ε��� ����-�ܳ���" };

char* S_A_rock[] = { "Tell Me If You Wanna Go Home-Keira Knightley", "Hotel California-Eagles", 
					"This Love-Maroon5", "A Sky Full Of Stars-Coldplay",
					"The Great Escape-Boys Like Girls" };

char* S_K_ballad[] = { "Timeless-SG���ʺ�", "����-SG���ʺ�", "�� ���� ���-������",
					"���ϴ��� ����(2020)-�漭", "���� ���� �ʳ׿�-�����" };

char* S_A_ballad[] = { "Closer-The Chainsmokers", "Symphony-Clean Bandit", "On My Way-Alan Walker",
					"Faded-Alan Walker", "Day1-HONNE" };

char* S_K_rb[] = { "�����-SG���ʺ�", "��� ������ ���� �Ǿ� �����ٰ�-������", "�Ƹ���-SG���ʺ�",
				"Ȧ��-������", "�� ���� �׷���-������" };

char* S_A_rb[] = { "Leave The Door Open-Bruno Mars", "At My Worst-Pink Sweat", 
					"HEARTBREAK ANNIVERSARY-Giveon",
				"Say So-Doja Cat", "Honesty-Pink Sweat" };

//30�� �帣�� �뷡 �迭
char* M_K_rap[] = { "������-�ѿ���", "����-������", "Selfmade Orange-â��",
					"Bk Love-MC��������", "�����-����" };

char* M_A_rap[] = { "Rolex-Ayo & Teo", "Going Up Tho Coast-Clay And Friends",
					"The Box-Roddy Ricch", "Company-24KGoldn",
					"Bad And Bougie-Migos" };

char* M_K_rock[] = { "�����-����(MoonMoon)", "Two Days-����ġ��", "����-��ī��",
					"���-�߰ſ� ����", "��й�ȣ 486-����" };

char* M_A_rock[] = { "Time Is Running Out-Muse", "We Are The Champions-Queen", 
					"Bad Day-Daniel Powter","Sunkissed-Khai Dreams", 
					"Cake By The Ocean-DNCE" };

char* M_K_ballad[] = { "ȥ���ϰ� ���� ��-��", "�������̶� �ؼ� �� ����;�-������",
						"��Ǯ��-��â��", "���鿪����-������", "�ȳ�-��Ŵ" };

char* M_A_ballad[] = { "10,000 Hours-Dan + Shay, JusinBieber", "Whiskey and Morphine-Alexander Jean",
						"Glad You Exist-Dan + Shay", "Let Her Go-Passenger", 
						"I Should Probably Go To Bed-Dan + Shay" };

char* M_K_rb[] = { "����-G-DRAGON", "�ʸ� �׸� ����-��ũ��", "Stay-SG���ʺ�", 
					"Advice-�¹�", "���� �ϳ�-���� ������" };

char* M_A_rb[] = { "You Come First-Zak Abel", "All Of Me-John Legend",
					"Talking To The Moon-Bruno Mars", "Myself-Bazzi", 
					"Lay Me Down-Sam Smith" };

// ����� ����ü ����
struct User {
	char name[80]; // ������� �̸�
	char genre; // ����ڰ� �����ϴ� �帣
	int age; // ������� ����
	char nation; //����ڰ� ���ϴ� ����
};

//10�� �뷡 ��õ �Լ�
void tenth(char genre, char nation, char name[10]) {
	int re = rand() % 5; //���� �迭 �� �ټ� �� �� �ϳ��� �������� �̴� ���� ���� �Լ�
	if (nation == 'K') { //�ѱ� �뷡�� �����ߴٸ�
		switch (genre) { // case �帣�� ���� �з�
		case 'r': 
			printf("%s�Կ��� ��õ�帱 ����\n", name); // �Ķ���ͷ� ���� �̸� ���
			printf("%s\n\n", T_K_rap[re]); // �� �迭�� re ���� ���� �־ �� ��õ 5�� �� �� ��
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, T_K_rap[re]); // ���Ͽ� �ֱ� ��õ�� ��
			break;

		case 'o':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", T_K_rock[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, T_K_rock[re]);
			break;

		case 'a':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", T_K_ballad[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, T_K_ballad[re]);
			break;

		case 'b':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", T_K_rb[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, T_K_rb[re]);
			break;
		}
	}
	else if (nation == 'A') {
		switch (genre) {
		case 'r':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", T_A_rap[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, T_A_rap[re]);
			break;

		case 'o':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", T_A_rock[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, T_A_rock[re]);
			break;

		case 'a':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", T_A_ballad[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, T_A_ballad[re]);
			break;

		case 'b':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", T_A_rb[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, T_A_rb[re]);
			break;
		}
	}
}

//20�� �뷡 ��õ �Լ�
void twoth(char genre, char nation, char name[10]) {
	int re = rand() % 5;
	if (nation == 'K') {
		switch (genre) {
		case 'r':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", S_K_rap[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, S_K_rap[re]);
			break;

		case 'o':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", S_K_rock[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, S_K_rock[re]);
			break;

		case 'a':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", S_K_ballad[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, S_K_rb[re]);
			break;

		case 'b':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", S_K_rb[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, S_K_rb[re]);
			break;
		}
	}
	else if (nation == 'A') {
		switch (genre) {
		case 'r':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", S_A_rap[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, S_A_rap[re]);
			break;

		case 'o':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", S_A_rock[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, S_A_rock[re]);
			break;

		case 'a':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", S_A_ballad[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, S_A_ballad[re]);
			break;

		case 'b':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", S_A_rb[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, S_A_rb[re]);
			break;
		}
	}

}

//30�� �뷡 ��õ �Լ�
void thirth(char genre, char nation, char name[10]) {
	int re = rand() % 5;
	if (nation == 'K') {
		switch (genre) {
		case 'r':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", M_K_rap[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, M_K_rap[re]);
			break;

		case 'o':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", M_K_rock[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, M_K_rock[re]);
			break;

		case 'a':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", M_K_ballad[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, M_K_ballad[re]);
			break;

		case 'b':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", M_K_rb[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, M_K_rb[re]);
			break;
		}
	}
	else if (nation == 'A') {
		switch (genre) {
		case 'r':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", M_A_rap[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, M_A_rap[re]);
			break;

		case 'o':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", M_A_rock[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, M_A_rock[re]);
			break;

		case 'a':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", M_A_ballad[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, M_A_ballad[re]);
			break;

		case 'b':
			printf("%s�Կ��� ��õ�帱 ����\n", name);
			printf("%s\n\n", M_A_rb[re]);
			fprintf(fp, "%s�Կ��� ��õ�帰 ���� %s�Դϴ�\n", name, M_A_rb[re]);
			break;
		}
	}
}

int main() {
	struct User user[50] = { 0, };
	int i = 0, answer;
	fp = fopen("music.txt", "a"); // a�������� ���� ����

	while (1) {
		printf("----���� ��õ ���α׷�----\n");
		printf("���� ��õ�� �����ðڽ��ϱ�? (0(����)) : ");
		scanf("%d", &answer); // 0 �Է� �� ����
		if (answer == 0)
			break;

		printf("����� �̸���? "); // ����ü���� �̸� ���� �����ͼ� ���
		scanf("%s", &user[i].name);

		printf("%s���� ���̴�? (10 ~ 39) ", user[i].name); // ����ü���� ���� ���� Ȱ��
		scanf("%d", &user[i].age);

		//�帣 -> rap(r), rock(o), ballad(a), r&b(b) 
		// ����ü���� �帣 ���� ���
		printf("%s���� �����ϴ� �帣��? (rap(r), rock(o), ballad(a), r & b(b)) ", user[i].name); 
		scanf("%s", &user[i].genre);

		printf("%s���� ��� ���� ������ �뷡��? (K or A)", user[i].name); //����ü���� ���� ���� ���
		scanf("%s", &user[i].nation);

		//���⼭ 10�� 20�� 30�� �Ǻ� 40�� �Ǻ�
		if (user[i].age / 10 == 1)
			tenth(user[i].genre, user[i].nation, user[i].name);
		else if (user[i].age / 10 == 2)
			twoth(user[i].genre, user[i].nation, user[i].name);
		else if (user[i].age / 10 == 3)
			thirth(user[i].genre, user[i].nation, user[i].name);
		else {
			printf("\n");
			printf("��õ �帱 ���� �����..�̤�");
			return 0;
		}
		i++;
		Sleep(3000);
		system("cls");
	}
	fclose(fp);
	return 0;
}