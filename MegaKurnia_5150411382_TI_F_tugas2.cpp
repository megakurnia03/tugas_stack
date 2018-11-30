#include <iostream>
#define MAX 3
using namespace std;

struct Stack 
{
	int top;
	string nama[MAX];
} tumpukan;

void atas() 
{
	tumpukan.top = -1;
}

bool isEmpty() 
{
	return tumpukan.top == -1;
}

bool isFull() 
{
	return tumpukan.top == MAX - 1;
}

void push() 
{
	if (isFull()) 
	{
		cout<<"Tumpukan penuh"<<endl;
	} else 
	{
		tumpukan.top++;
		cout<<"Masukkan Nama = ";
		cin>>tumpukan.nama[tumpukan.top];
		cout<<tumpukan.nama[tumpukan.top] <<" masuk ke stack"<<endl;
	}
}

void pop() 
{
	if (isEmpty()) 
	{
		cout<<"Tumpukan kosong"<<endl;
	} else 
	{
		cout<<"Nama "<<tumpukan.nama[tumpukan.top]<<" sudah terambil"<<endl;
		tumpukan.top--;
	}
}

void printStack() 
{
	if (isEmpty()) {
		cout<<"Tumpukan kosong"<<endl;
	} else {
		cout<<"Tumpukan : ";
		for (int i = tumpukan.top; i >= 0; i--)
			cout<<tumpukan.nama[i]<<((i == 0) ? "" : ",");
	}
	cout<<endl;
}

int main() 
{
	int pil, nama;
	atas();
	do 
	{
		printStack();
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. Exit"<<endl;
		cout<<"Masukkan Pilihan: ";
		cin>>pil;
		switch (pil) 
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		default:
			cout << "Pilihan tidak tersedia" << endl;
			break;
		}
	} while (pil!=3);
}
