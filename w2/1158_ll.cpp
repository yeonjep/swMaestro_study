#include <iostream>
#include <list>
#include <stdlib.h>

using namespace std;

typedef struct node {
  int d;
  struct node* next = NULL;
} Node;

void push_back(Node** plist, Node** pback,  int item) {
  Node* newNode;
  newNode = (Node*)malloc(sizeof(*newNode));
  newNode->d = item;

  // cout << newNode->d;
  if (!(*plist)) {
    *plist = newNode;
    (*pback) = newNode;
  } else {
    (*pback)->next = newNode;
    (*pback) = newNode;
  }
}

void printCircularList(Node* list) {
  Node* cur = list;
  cout << cur->d << " ";
  cur = cur->next;

  while (cur != list) {
    cout << cur->d << " ";
    cur = cur->next;
  }
  cout << endl;
}

void printList(Node* list) {
  Node* cur = list;
  cout << "<";
  while (cur) {
    cout << cur->d << (cur->next ? ", " : "");
    cur = cur->next;
  }
  cout << ">";
}

void move(Node** pcur, Node** pprev, int k) {
  for (int i = 0; i < k; i++) {
    *pprev = *pcur;
    *pcur = (*pcur)->next;
  }
}

void deleteKth(Node* list, int n, int k, Node** pres) {
  Node* cur = list;
  Node* prev = NULL;
  Node* resBack = NULL;
  
  for (int i = 0; i < n; i++) {
    move(&cur, &prev, k);
    push_back(pres, &resBack, cur->d);
    if (k != 0)
      prev->next = cur->next;
    move(&cur, &prev, 1);
  }
  
}

int main() {
  Node* circle = NULL;
  Node* back = NULL;
  Node* res = NULL;
  int i;
  int n, k;

  cin >> n >> k;

  for (i = 1; i <= n; i++) {
    push_back(&circle, &back, i);
  }

  back->next = circle;
  // printCircularList(circle);
  // cout << "sdf";
  deleteKth(circle, n, k - 1, &res);
  
  printList(res);
  return 0;
}