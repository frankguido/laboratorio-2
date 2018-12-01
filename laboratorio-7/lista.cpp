#include <iostream>
#include <fstream>
using namespace std;

class Link
{
	public:
		string value;
		Link(const string& v,Link* p=0,Link* s=0):
			value(v),prev(p),succ(s) {
			}
		Link* insert(Link* n);
		Link* erase();
		Link* Print();
		Link* find(const string& s);
		const Link* find(const string& s) const;
		Link* next() const { return prev; }
		
		void Print(Link* n)
		{	
			Link* temp=n;
			
			while(temp)
			{
				cout<<temp->value<<" ";
				temp=temp->succ;
			}
			cout<<"\n";
		}
		
	private:
		Link* prev;
		Link* succ;
};

Link* Link::insert(Link* n)
{
	Link* p=this;
	if(n==0) return p;
	if(p==0) return n;
	
	n->succ=p;
	if(p->prev) p->prev->succ=n;
	
	n->prev=p->prev;
	p->prev=n;
	
	return n;
}


int main()
{
	Link* nord_gods=new Link("Thor");
	nord_gods=nord_gods->insert (new Link("Odin"));
	nord_gods=nord_gods->insert (new Link("Freia"));
	nord_gods->Print(nord_gods);		
}

