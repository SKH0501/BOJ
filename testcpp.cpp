#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
//#include <bits/stdc++.h>

// A �߰��� �� �ִ� �� => �׳� PUSHBACK A
// B �߰��� �� �ִ� �� => ������ PUSHBACK B 
// T -> S �� ���� ����� ��������.
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	//N�� �迭�� ũ�� M�� ���� ������ ����, K�� �⵵
	int tree_martrix[15][15] = { 0, };  // ��� Ʋ
	int robot_martrix[15][15] = { 0, }; // �κ��� ����
	int age_martrix[15][15] = { 0, }; // ���� ���� �迭
	int N, M, K;

	cin >> N >> M >> K;
	//index�� 1���� ������.
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			tree_martrix[i][j] = 5;  // ��� Ʋ ����
			cin >> robot_martrix[i][j]; // ��� �κ� ����
		}
	}

	for (int i = 0; i <= M; i++) {
		int temp_x, temp_y, temp_age;
		cin >> temp_x >> temp_y >> temp_age;

		age_martrix[temp_y][temp_x] = temp_age; // ���� ���� ����
	}
//






	return 0;
}


