#include<iostream>
#include<string.h>
using namespace std;
class Link
{
	public:
		string value;
		Link(const string &v, Link *p=0,Link *s=0):
			value(v),prev(p),succ(s){}
		Link *insert(Link *n);
		Link *erase();
		Link *find(const string &s);
		const Link *find(const string &s) const;
		Link *next()const
		{return succ;}
		Link *previous()const { return prev;}
	private:
	Link *prev;
	Link *succ;		
};
