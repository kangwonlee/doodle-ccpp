#include <iostream>
using namespace std;

int inventory[8] = { 0 };
int score = 0;

// �������� �� �� �ֿ��� ��
void getItem(int itemId) {
    inventory[itemId]++;
}
// �������� ���� �� �ֿ��� ��(cnt: ������ ����)
void getItem(int itemId, int cnt) {
    inventory[itemId] += cnt;
}
// �������� ���� �� �ݰ�, ������ ����� ��(sc: ���� ����)
void getItem(int itemId, int cnt, int sc) {
    inventory[itemId] += cnt;
    score += sc;
}

int main() {
    getItem(6, 5);        // 6�� �������� 5�� ����
    getItem(3);           // 3�� �������� �ϳ� ����
    getItem(5, 4, 7000);  // 5�� �������� 4�� ��� 7000���� ����

    // �����ϰ� �ִ� ������ ���� ���
    for (int i : inventory) {
        cout << i << " ";
    }
    cout << endl;
    cout << "���� : " << score << endl;
}
