#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
//#include <bits/stdc++.h>

// A 추가할 수 있는 법 => 그냥 PUSHBACK A
// B 추가할 수 있는 법 => 뒤집고 PUSHBACK B 
// T -> S 로 가는 방법을 생각하자.
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	//N은 배열의 크기 M은 심은 나무의 갯수, K는 년도
	int tree_martrix[15][15] = { 0, };  // 양분 틀
	int robot_martrix[15][15] = { 0, }; // 로봇의 설계
	int age_martrix[15][15] = { 0, }; // 나무 나이 배열
	int N, M, K;

	cin >> N >> M >> K;
	//index가 1부터 시작함.
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			tree_martrix[i][j] = 5;  // 양분 틀 세팅
			cin >> robot_martrix[i][j]; // 양분 로봇 세팅
		}
	}

	for (int i = 0; i <= M; i++) {
		int temp_x, temp_y, temp_age;
		cin >> temp_x >> temp_y >> temp_age;

		age_martrix[temp_y][temp_x] = temp_age; // 나무 나이 세팅
	}
//






	return 0;
}


