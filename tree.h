#include "list.h"


struct tNode{
	tNode *right;
	tNode * left;
	char letter;
	list l;
};


class tree{
	public:
		tree();
		~tree();
	private:
		tNode * root;
	
};
