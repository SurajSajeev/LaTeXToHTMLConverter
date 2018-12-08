struct FEATURES* createfeaturel(struct LABEL * a){
struct FEATURES *temp=(struct FEATURES*)malloc(sizeof(struct FEATURES));
                         strcpy(temp->a,"");
                         strcat(temp->a,a->a);
                         return temp;
}
struct FEATURES* createfeaturer(struct REF * a){
struct FEATURES *temp=(struct FEATURES*)malloc(sizeof(struct FEATURES));
                         strcpy(temp->a,"");
                         strcat(temp->a,a->a);
                         return temp;
}


struct ENITTEXT* addoctoenit(struct ENITTEXT* b,struct OCFEAT* a){
	struct ENITTEXT *temp=(struct ENITTEXT*)malloc(sizeof(struct ENITTEXT));
	strcpy(temp->a,b->a);
	strcat(temp->a,"<li>");
    strcat(temp->a,a->a);
    strcat(temp->a,"</li>");
    return temp;    
}
struct LABEL* createlabel(char *a,char *b){
	struct LABEL *temp=(struct LABEL*)malloc(sizeof(struct LABEL));
	strcpy(temp->a,"<section id=\"");
	strcat(temp->a,b);
	strcat(temp->a,"\"></section>");
	return temp;
}
struct REF* createref(char *a,char *b){
	struct REF *temp=(struct REF*)malloc(sizeof(struct REF));
	strcpy(temp->a,"<a href=\"#");
	strcat(temp->a,b);
	strcat(temp->a,"\">\n");
	strcat(temp->a,a);
	strcat(temp->a,":");
	strcat(temp->a,b);
	strcat(temp->a,"</a>\n");
	return temp;
}

