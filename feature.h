
struct FEATURES* createfeatures0(struct SECTION * a){
struct FEATURES *temp=(struct FEATURES*)malloc(sizeof(struct FEATURES));
                         strcpy(temp->a,"");
                         strcat(temp->a,a->a);
                         return temp;
}
struct FEATURES* createfeaturef(struct FIGF * a){
struct FEATURES *temp=(struct FEATURES*)malloc(sizeof(struct FEATURES));
                         strcpy(temp->a,"");
                         strcat(temp->a,a->a);
                         return temp;
}

struct FEATURES* createbr(){
struct FEATURES *temp=(struct FEATURES*)malloc(sizeof(struct FEATURES));
                         strcpy(temp->a,"<br>");
                         return temp;
}
struct FEATURES* createpar(){
struct FEATURES *temp=(struct FEATURES*)malloc(sizeof(struct FEATURES));
                         strcpy(temp->a,"\n<par>");
                         return temp;
}
struct SECTION* createsection(char *a,int count,int count2,int flag){
switch(flag){
	case 0:{
		struct SECTION *temp=(struct SECTION*)malloc(sizeof(struct SECTION));
	                      char a2[100000];
	                      snprintf(a2,100000,"\n<h1>%d. ",count);
	                      strcat(a2,a);
	                      strcat(a2,"\n</h1>\n");
                          strcpy(temp->a,a2);
                          return temp;
	}
	break;
	case 1:{struct SECTION *temp=(struct SECTION*)malloc(sizeof(struct SECTION));
	                      char a2[100000];
	                      snprintf(a2,100000,"\n<h3>%d.%d. ",count,count2);
	                      strcat(a2,a);
	                      strcat(a2,"\n</h3>\n");
                          strcpy(temp->a,a2);
                          return temp;

	}

}
}