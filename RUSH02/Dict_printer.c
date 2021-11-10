#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct _DICTPRINTER {
	char* key;
	void* value;
	struct _DICTPRINTER* link;

}_dictprinter;

typedef struct DICTPRINTER {
	int count;
	struct _DICTPRINTER* head;
}dictionary;

void DICTPRINTER_Show(dictionary dic) {
	_dictprinter* temp = dic.head;
	int i =0;

	printf("--- total count : %d\n", dic.count);
	while (temp != NULL) {
		printf("[%d] %s\n", i, temp->key);
		i++; temp = temp->link;
	}
}

int DICTPRINTER_Add(dictionary* head, char* key, void* value) {
	_dictprinter* temp = head->head;

while (1) {
	if (head->count == 0/*temp == NULL*/) {
			temp = (_dictprinter*)malloc(sizeof(_dictprinter));
			//temp->key = StringAdd("", key);
			temp->key = key;
			temp->value = value;
			temp->link = NULL;
			head->head = temp;
			break;
			}

			//현재 노드의 키가 새로 추가하려는 키와 같을 때
			else if (strncmp(temp->key, key) == COMPARE_SAME) {
				return false;
			}

			//헤더(현재 노드)가 마지막 일때
			else if (temp->link == NULL) {
				temp->link = (_dictprinter*)malloc(sizeof(_dictprinter));
				//temp->link->key = StringAdd1("", key);
				temp->link->key = key;
				temp->link->value = value;
				temp->link->link = NULL;
			break;
			}

			// 다음 노드가 존재할 
			else {
				temp = temp->link;
				}
			}
	head->count++;
	return true;
}

void main() {
	dictionary dic;
	DICTPRINTER_Init(&dic);

	DICTPRINTER_Add(&dic, "key1", "value2");
	DICTPRINTER_Add(&dic, "key2", "value1");
	DICTPRINTER_Show(dic);
}
