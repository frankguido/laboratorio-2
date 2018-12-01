#include<iostream>
#include<string>
using namespace std;
struct Link

{
	string value;
	Link *prev;
	Link *succ;
	Link(const string &v, Link *p=0; Link *s=0):
		value(v),prev(p),succ(s){}
};
Link *insert(Link *p, Link *n)
{
	n->succ=p;
	p->prev->succ=n;
	n->prev=p->prev;
	p->prev=n;
	return n;
}
int main()
{
	Link *nord_gods=new Link("Thor",0,0);
	nord_gods=new Link("Odin",nord_gods,0);
	nord_gods->succ->prev=nord_gods;
	nord_gods=new Link("Freia",norse_gods,0);
	nord_gods->succ->prev=nord_gods;
}
