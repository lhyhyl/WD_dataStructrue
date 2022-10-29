struct Link {
	int data;
	Link* next;
};
#include <stdio.h>
void printfNowLink(Link* head) {
	printf("链表值为：");
	while (head->next) {
		printf("%d ", head->next->data);
		head = head->next;
	}
}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/