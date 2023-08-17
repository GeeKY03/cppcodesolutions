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

class node {
public:
	int data;
	node* next;

	node(int val) {
		data = val;
		next = NULL;
	}
};

void InsertAtTail(node* &head, int val) {
	node* n = new node(val);
	if (head == NULL) {
		head = n;
		return;
	}

	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = n;
}

int length(node* head) {
	node* temp = head;
	int count = 0;
	while (temp != NULL) {
		count++;
		temp = temp->next;
	}
	return count;
}

void Intersect(node* &head1, node* &head2, int pos) {
	node* temp1 = head1;
	pos--;
	while (pos--) {
		temp1 = temp1->next;
	}

	node* temp2 = head2;
	while (temp2->next != NULL) {
		temp2 = temp2->next;
	}

	temp2->next = temp1;
}

int Intersection(node* head1, node* head2) {
	int len1 = length(head1);
	int len2 = length(head2);

	node* ptr1;
	node* ptr2;
	int diff = 0;
	if (len1 > len2) {
		diff = len1 - len2;
		ptr1 = head1;
		ptr2 = head2;
	}
	else {
		diff = len2 - len1;
		ptr1 = head2;
		ptr2 = head1;
	}

	while (diff--) {
		ptr1 = ptr1->next;
		if (ptr1 == NULL) {
			return -1;
		}
	}

	while (ptr1 != NULL && ptr2 != NULL) {
		if (ptr1 == ptr2) {
			return ptr1->data;
		}
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}

	return -1;

}

void Display(node* head) {
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}



int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	node* head1 = NULL;
	node* head2 = NULL;
	InsertAtTail(head1, 1);
	InsertAtTail(head1, 2);
	InsertAtTail(head1, 3);
	InsertAtTail(head1, 4);
	InsertAtTail(head1, 5);
	InsertAtTail(head1, 6);
	InsertAtTail(head2, 9);
	InsertAtTail(head2, 10);
	Intersect(head1, head2, 5);
	Display(head1);
	Display(head2);
	cout << Intersection(head1, head2) << endl;


	return 0;
}