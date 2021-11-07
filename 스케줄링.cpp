#include<stdio.h>
void sort(int size); //도착시간대로 정렬
void FCFS(int size); //FCFS스케줄링
void SJF(int size); //SJF스케줄링
int pro[200][7];
int main() {
	int i=0;
	for (int j = 0; j < 200; j++) {
		pro[j][0] = j; //프로세스 번호 저장
	}
	while (true) {
		printf("프로세스 %d번 도착시간과 실행시간을 입력해주세요(둘다 0을 입력하면 입력 종료) : ",i);
		scanf("%d%d", *(pro + i) + 1, *(pro + i) + 2); //pro[i][1]에 프로세스 도착시간, pro[i][2]에 프로세스 실행시간 입력
		if (pro[i][1] == 0 && pro[i][2] == 0) break; //도착시간과 실행시간이 둘다 0이라면 종료
		i++; //프로세스의 개수 저장
	}
	sort(i);
	FCFS(i);
	for (int j = 0; j < i; j++) {
		printf("프로세스%d번의 총처리시간 : %d, 대기시간 : %d\n", pro[j][0], pro[j][3], pro[j][4]);
	}
}

void sort(int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (pro[j][1] > pro[j+1][1]) {
				temp = pro[j][1];
				pro[j][1] = pro[j + 1][1];
				pro[j + 1][1] = temp;				
				temp = pro[j][0];
				pro[j][0] = pro[j + 1][0];
				pro[j + 1][0] = temp;
				temp = pro[j][2];
				pro[j][2] = pro[j + 1][2];
				pro[j + 1][2] = temp;
			}
		}
	}
}

void FCFS(int size) {
	pro[0][3] = pro[0][2]; //0번째 프로세스의 총처리시간 
	pro[0][4] = 0;  //0번째 프로세스의 대기시간
	pro[0][5] = pro[0][1] + pro[0][2]; //0번째 프로세스가 끝난 시간
	for (int i = 1; i < size; i++) {
		pro[i][4] = pro[i - 1][5] - pro[i][1]; //i번째 프로세스의 대기시간은 i-1번째 프로세스가 끝난시간 - 도착시간 
		pro[i][3] = pro[i][4] + pro[i][2]; //i번째 프로세스의 총처리시간은 대기시간 + 실행시간
		pro[i][5] = pro[i - 1][5] + pro[i][2]; //i번째 프로세스가 끝난 시간은 i-1번째 프로세스가 끝난시간 + 실행시간
	}
}
void SJF(int size) {

}