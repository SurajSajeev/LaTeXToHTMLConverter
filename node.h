#include<stdlib.h>
struct ltDoc{
char a[1000000];
struct  CONTENT* cont; 

};
struct CONTENT{
char a[100000];
struct  CONTENT* cont;
struct  SUBCONTENT* subc;
};
struct GRAPHICS{
	char a[1000];
};
struct COMMENT{
	char a[10000];
};
struct FEATURES{
	char a[10000];
int type;
};
union SUBFEATURES{
	char str[10000];
struct COMMENT* a;
struct FEATURES* c;
};
struct  SUBCONTENT{
char a[10000];
int type;
union SUBFEATURES s;
};
struct SECTION{
char a[10000];
int count;	
};
struct ENUMER{
char a[10000];
struct ENITTEXT* b;	
};

struct ITEMIZE{
char a[10000];
struct ENITTEXT* b; 	
};
union combo{
struct ENUMER* a;
struct ITEMIZE* b;
};
struct OCFEAT{
char a[10000];
union combo child; 
};
struct ENITTEXT{
char a[10000];
struct ENITTEXT* item;
char * child;
};
struct MATH{
char a[10000];
struct MATHC* b; 
};
struct MATHC{
char a[10000];
struct MATHC* b;
struct MATHF* c;
};
struct MATHF{
char a[1000];
int type;
};
struct IBL{
char a[10000];
int type;
char * b;
};
struct FIGF{
char a[10000];

};
struct FIGC{
char a[10000];
struct FIGC* b;
struct GRAPHICS* c;
struct CAPTION* d;
};
struct CAPTION{
char a[10000];
};
struct TABULAR{
char a[10000];
struct TABCONTENT* b;
};
struct TABCONTENT{
char a[10000];
};
struct RCNT{
	char a[10000];
	struct RCNT* b;
};
struct LABEL{
char a[10000];
};
struct REF{
char a[10000];
};

