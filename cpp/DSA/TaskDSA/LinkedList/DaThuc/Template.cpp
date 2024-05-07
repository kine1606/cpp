/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct DONTHUC
{
	double heso;
	int somu;
	
	DONTHUC(double _heso = 0,int _somu=0)
    {
		heso = _heso;
		somu  = _somu;
	}
	
	DONTHUC& operator = (const DONTHUC &rhs){
		if (this == &rhs) return *this;
		this->heso = rhs.heso;
		this->somu = rhs.somu;
		return *this;
	}
};

struct Node
{
	DONTHUC* data;
	Node* next;
	
	Node(DONTHUC* _data = nullptr)
    {
		this->data = _data;
		this->next = nullptr;
	}
	
};

struct DATHUC
{
	Node* head;
	Node* tail;
	DATHUC()
    {
		this->head = nullptr;
		this->tail = nullptr;
	}
};
int getSize(DATHUC&B)
{
    Node* dummy = B.head;
    int count(0);
    while (dummy != nullptr)
    {
        count++;
        dummy = dummy->next;
    }
    return count;
}
void Xuat(DATHUC& B)
{
    int countzero(0);
    bool phantudau = true;
    Node* dummy = B.head;
    while(dummy!= nullptr)
    {
        if
    }
}
bool isEmpty(DATHUC& B)
{
    if(B.head == nullptr && B.tail == nullptr) return true;
    return false;
}
void Nhap(DATHUC& B, double heso, int somu)  
{
    DONTHUC* new_data = new DONTHUC(heso, somu);
    Node* new_node = new Node(new_data);
    if(isEmpty(B))
    {
        B.head = B.tail = new_node; 
    }
    else
    {
        B.tail->next = new_node;
        B.tail = new_node;
    }
}

long double TinhDaThuc(DATHUC& B, double x)
{
    long double sum(0);
    Node* dummy = B.head;
    while(dummy!= nullptr)
    {
        sum += dummy->data->heso * std::pow(x, dummy->data->somu);
        dummy = dummy->next;
    }
    return sum;
}
int main() {
    DATHUC B;
    int N;
    
    cin >> N;
    for (int test = 0; test < N; test++){
		double heso; int somu;
		cin >> heso >> somu;
		Nhap(B,heso,somu);
    } 
    double x; cin >> x;
    cout << "Da thuc vua nhap la: "; Xuat(B);
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(B, x);
    return 0;
}
