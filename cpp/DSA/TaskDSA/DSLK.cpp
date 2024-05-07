#include <iostream>
#include <cstring>
using namespace std;
struct SV{
    char *Ten;
    char *MSSV;
    double dtb;
};
struct Node{
    SV sinhvien;
    Node* next;
};
struct List{
    Node *head;
    Node *tail;
};
void Nhap1SV(SV &s){
    s.Ten=new char [50];
    cin.getline(s.Ten,50);
    if (s.Ten[0]=='\0') return;
    s.MSSV=new char [10];
    cin.getline(s.MSSV,10);
    cin>>s.dtb;
    cin.ignore();
}
List *createList(){
    List *l=new List;
    l->head=new Node;
    SV g;
    Nhap1SV(g);
    l->head->sinhvien=g;
    l->head->next=NULL;
    l->tail=l->head;
    return l;
}
Node *nextnode(List *l,Node *s,SV temp){
    Node *add=new Node;
    add->sinhvien=temp;
    add->next=s;
    l->head=add;
    return add;
}
void findSV(char *s,List *l){
    Node *f=l->head;
    while (f!=NULL){
        if (strcmp(f->sinhvien.Ten,s)==0) {cout<<"Co tham gia lop hoc"<<endl; return;}
        f=f->next;
    }
    cout<<"Khong tham gia lop hoc"<<endl;
}
void xoaSV(char *f,List *l){
    Node *h=l->head;
    while (h!=NULL){   
        if (strcmp(h->sinhvien.MSSV,f)== 0) break;
        h=h->next;
    }
    if (h==l->head){
        l->head=h->next;
        h->next=NULL;
        delete h;
    }
    else if (h==l->tail){
        Node *dumb=l->head;
        while (dumb->next->next!=NULL){
            dumb=dumb->next;
        }
        l->tail=dumb;
        l->tail->next=NULL;
        delete h;
    }
    else{
        Node *dumb=l->head;
        while (dumb->next!=h){
            dumb=dumb->next;
        }
        dumb->next=h->next;
        h->next=NULL;
        delete h;
    }
}
void inSV(List *l){
    Node *p=l->head;
    while (p!=NULL){
        cout<<"Ho ten: "<<p->sinhvien.Ten<<endl;
        cout<<"MSSV "<<p->sinhvien.MSSV<<endl;
        cout<<"Diem trung binh: "<<p->sinhvien.dtb<<endl;
        p=p->next;
    }
}
int main(){
    List *l;
    l=createList();
    Node *p=l->head;
    while (true){
        SV temp;
        Nhap1SV(temp);
        if (temp.Ten[0]=='\0') break;
        p=nextnode(l,p,temp);
    }
    inSV(l);
    char *find;
    find=new char [50];
    cin.getline(find,50);
    findSV(find,l);
    char *find2=new char[10];
    cin.getline(find2,10);
    xoaSV(find2,l);
    inSV(l);
}