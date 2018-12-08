struct OCFEAT* createoc(struct ENUMER* a){
  struct OCFEAT *temp=(struct OCFEAT*)malloc(sizeof(struct OCFEAT));
  strcpy(temp->a,a->a);
  temp->child.a=a;
  return temp;
}

struct OCFEAT* createoc1(struct ITEMIZE* a){
  struct OCFEAT *temp=(struct OCFEAT*)malloc(sizeof(struct OCFEAT));
  strcpy(temp->a,a->a);
  temp->child.b=a;
  return temp;
}

struct ENUMER* createnewenumerate(){
  struct ENUMER *temp=(struct ENUMER*)malloc(sizeof(struct ENUMER));
  strcpy(temp->a,"<ol>\n");
  return temp;
}

struct ENITTEXT* addtoenittext(struct ENITTEXT* a,char * b){
     struct ENITTEXT *temp=(struct ENITTEXT*)malloc(sizeof(struct ENITTEXT));
     strcpy(temp->a,"\n<li>");
     strcat(temp->a,b);
     strcat(temp->a,"\n</li>");
     strcat(temp->a,a->a);
     temp->item=a;
     return temp;
}
struct ENITTEXT* addSimpleText(char *a){
    struct ENITTEXT *temp=(struct ENITTEXT*)malloc(sizeof(struct ENITTEXT));
     strcpy(temp->a,"\n<li>");
     strcat(temp->a,a);
     strcat(temp->a,"\n</li>");
     return temp; 
}

struct ENUMER* concatCon(struct ENUMER* a,struct ENITTEXT* b){
strcat(a->a,b->a);
strcat(a->a,"\n</ol>\n");
a->b=b;
return a;
}

struct ITEMIZE* createnewitemize(){printf("This is executed");
  struct ITEMIZE *temp=(struct ITEMIZE*)malloc(sizeof(struct ITEMIZE));
  strcpy(temp->a,"\n<ul>\n");
  return temp;
}
struct ITEMIZE* concatCon2(struct ITEMIZE* a,struct ENITTEXT* b){

strcat(a->a,b->a);
strcat(a->a,"</ul>");
a->b=b;
return a;
}