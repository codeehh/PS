#include <iostream>
using namespace std;

void func(int n, string str) {
    if (n == 0) {
        cout << str << "\"����Լ��� ������?\"\n";
        cout << str << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
        cout << str << "��� �亯�Ͽ���.\n";
        return;
    }
    cout << str << "\"����Լ��� ������?\"\n";
    cout << str << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
    cout << str << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
    cout << str << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
    func(n - 1, str + "____");
    cout << str << "��� �亯�Ͽ���.\n";
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    func(n, "");

    return 0;
}