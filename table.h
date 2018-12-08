struct RCNT* addSimpleTRow(char *a){
	struct RCNT *temp=(struct RCNT*)malloc(sizeof(struct RCNT));
	strcpy(temp->a,"<td>");
	strcat(temp->a,a);
	strcat(temp->a,"</td>");
	return temp;
}
struct RCNT* addRAS(struct RCNT* a,char *b){
    struct RCNT *temp=(struct RCNT*)malloc(sizeof(struct RCNT));
	strcat(temp->a,a->a);
	strcat(temp->a,"<td>");
	strcat(temp->a,b);
	strcat(temp->a,"</td>");
	return temp;   
}
struct TABCONTENT* addRtT(struct RCNT* a){
	struct TABCONTENT *temp=(struct TABCONTENT*)malloc(sizeof(struct TABCONTENT));
	strcpy(temp->a,"\n<tr>");
	strcat(temp->a,a->a);
	strcat(temp->a,"\n</tr>");
    return temp;
}

struct TABCONTENT* addtrtT(struct TABCONTENT* a,struct RCNT* b){
	struct TABCONTENT *temp=(struct TABCONTENT*)malloc(sizeof(struct TABCONTENT));
	strcpy(temp->a,a->a);
	strcat(temp->a,"<tr>\n");
	strcat(temp->a,b->a);
	strcat(temp->a,"</tr\n>");
    return temp;
}

struct TABULAR* createTabular(struct TABCONTENT* a){
	struct TABULAR *temp=(struct TABULAR*)malloc(sizeof(struct TABULAR));
	strcpy(temp->a,"<table border=1>\n");
	strcat(temp->a,a->a);
	strcat(temp->a,"</table>\n");
	return temp;
}

struct FEATURES* createfeaturet(struct TABULAR * a){
struct FEATURES *temp=(struct FEATURES*)malloc(sizeof(struct FEATURES));
                         strcpy(temp->a,"");
                         strcat(temp->a,a->a);
                         return temp;
}
