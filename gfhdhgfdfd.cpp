#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

class ListNode {
public:
	int data;
	ListNode* next;

	ListNode (int val) {
		data = val;
		next = NULL;
	}

};

void InsertAtTail(ListNode* &head, int val) {
	ListNode* n = new ListNode(val);

	// If linked list is empty
	if (head == NULL) {
		head = n;
		return;
	}


	ListNode* temp = head;

	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = n;
}

void InsertAtHead(ListNode* &head, int val) {
	ListNode* n = new ListNode(val);
	n->next = head;
	head = n;
}

void Display(ListNode* head) {
	ListNode* temp = head;
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

void Deletion(ListNode* &head, int val) {
	// If linked List is already empty
	if (head == NULL) {
		return;
	}

	ListNode* temp = head;

	while (temp->next->data != val) {
		temp = temp->next;
	}

	ListNode* to_be_delted = temp->next;
	temp->next = temp->next->next;
	delete to_be_delted;
}

void DeleteHeadNode(ListNode* &head) {
	ListNode* to_be_deleted = head;
	head = head->next;
	delete to_be_deleted;
}

ListNode* Reverse(ListNode* &head) {
	ListNode* prev_p = NULL;
	ListNode* curr_p = head;
	ListNode* next_p;

	while (curr_p != NULL) {
		next_p = curr_p->next;
		curr_p->next = prev_p;

		prev_p = curr_p;
		curr_p = next_p;
	}
	return prev_p;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ListNode* head = NULL;
	InsertAtTail(head, 1);
	InsertAtTail(head, 2);
	InsertAtTail(head, 3);
	InsertAtTail(head, 4);
	Display(head);
	InsertAtHead(head, 5);
	InsertAtHead(head, 6);
	Display(head);
	Deletion(head, 2);
	Display(head);
	DeleteHeadNode(head);
	Display(head);
	ListNode* newHead = Reverse(head);
	Display(newHead);



	return 0;
}