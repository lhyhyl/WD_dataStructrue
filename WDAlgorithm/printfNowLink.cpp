struct Link {
	int data;
	Link* next;
};
#include <stdio.h>
void printfNowLink(Link* head) {
	printf("����ֵΪ��");
	while (head->next) {
		printf("%d ", head->next->data);
		head = head->next;
	}
}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/